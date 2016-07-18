#include "inklusi.h"

static adcsample_t samples[ADC_GRP1_NUM_CHANNELS * ADC_GRP1_BUF_DEPTH];
static uint32_t sum_adc_lamp,sum_adc_usb,sum_adc_batt;
static adcsample_t adc_lamp,adc_usb,adc_batt;

void adccb(ADCDriver *adcp, adcsample_t *buffer, size_t n){
    (void) buffer;
    (void) n;

    int i;
    if (adcp->state == ADC_COMPLETE) {

        sum_adc_lamp=0;
        sum_adc_batt=0;
        sum_adc_usb=0;

        for(i=0;i<ADC_GRP1_BUF_DEPTH;i++){
            sum_adc_lamp=sum_adc_lamp+samples[0+(i*ADC_GRP1_NUM_CHANNELS)];
            sum_adc_batt=sum_adc_batt+samples[1+(i*ADC_GRP1_NUM_CHANNELS)];
            sum_adc_usb=sum_adc_usb+samples[2+(i*ADC_GRP1_NUM_CHANNELS)];
        }

        adc_lamp=sum_adc_lamp/ADC_GRP1_BUF_DEPTH;
        adc_batt=sum_adc_batt/ADC_GRP1_BUF_DEPTH;
        adc_usb=sum_adc_usb/ADC_GRP1_BUF_DEPTH;
    }
}

static const ADCConversionGroup adcgrpcfg = {
    FALSE,
    ADC_GRP1_NUM_CHANNELS,
    adccb,
    NULL,
    /* HW dependent part.*/
    0,
    0,
    ADC_LAMP_SMPR(ADC_SAMPLE_239P5) |  ADC_BATT_SMPR(ADC_SAMPLE_239P5) | ADC_USB_SMPR(ADC_SAMPLE_239P5) ,
    0,
    ADC_SQR1_NUM_CH(ADC_GRP1_NUM_CHANNELS),
    0,
    ADC_SQR3_SQ1_N(ADC_LAMP_CHANNEL) | ADC_SQR3_SQ2_N(ADC_BATT_CHANNEL) | ADC_SQR3_SQ3_N(ADC_USB_CHANNEL)
};

void analog_init(void){
    palSetPadMode(analog_gpio,ADC_LAMP_N,PAL_MODE_INPUT_ANALOG);
    palSetPadMode(analog_gpio,ADC_BATT_N,PAL_MODE_INPUT_ANALOG);
    palSetPadMode(analog_gpio,ADC_USB_N,PAL_MODE_INPUT_ANALOG);
    adcStart(&ADCD1, NULL);
}

void analog_deinit(void){
    adcStopConversion(&ADCD1);
//    adcStop(&ADCD1);
    palSetPadMode(analog_gpio,ADC_LAMP_N,PAL_MODE_RESET);
    palSetPadMode(analog_gpio,ADC_BATT_N,PAL_MODE_RESET);
    palSetPadMode(analog_gpio,ADC_USB_N,PAL_MODE_RESET);
}

uint8_t chk_lamp(void){
    adcConvert(&ADCD1, &adcgrpcfg, samples, ADC_GRP1_BUF_DEPTH);
    delay_ms(analog_tunda);

    if(adc_lamp>=MIN_ADC_LAMP){
        return 1;
    }
    else{
        return 0;
    }
}

uint8_t chk_usb(void){
    adcConvert(&ADCD1, &adcgrpcfg, samples, ADC_GRP1_BUF_DEPTH);
    delay_ms(analog_tunda);


    if(adc_usb>=MIN_ADC_USB){
        return 1;
    }
    else{
        return 0;
    }
}

uint8_t chk_batt(void){
    
    con_pv_off();
    delay_ms(100);
    
    adcConvert(&ADCD1, &adcgrpcfg, samples, ADC_GRP1_BUF_DEPTH);
    delay_ms(analog_tunda);

    uint8_t lvl;

    if(adc_batt<LVL_BATT_1){
        lvl=0;
    }
    else if((adc_batt>=LVL_BATT_1) && (adc_batt<LVL_BATT_2)){
        lvl=1;
    }
    else if((adc_batt>=LVL_BATT_2) && (adc_batt<LVL_BATT_3)){
        lvl=2;
    }
    else if((adc_batt>=LVL_BATT_3) && (adc_batt<LVL_BATT_4)){
        lvl=3;
    }
    else if(adc_batt>=LVL_BATT_4){
        lvl=4;
    }
    
    if(lvl<4){
        con_pv_on();
    }

    return lvl;
}

void data_print(void){

    adcConvert(&ADCD1, &adcgrpcfg, samples, ADC_GRP1_BUF_DEPTH);
    delay_ms(analog_tunda);

    uint8_t batt_stt = chk_batt();
    
    uint8_t pv_stt;
    if(chk_pv()==1){pv_stt=1;}
    else{pv_stt=0;}
    
    uint16_t min_lamp = MIN_ADC_LAMP;
    uint16_t min_usb = MIN_ADC_USB;
    chprintf(CHP,"a-lamp = %4d of %4d | a-usb = %4d of %4d | a-batt = %4d | n-batt = %1d | s-pv = %1d \r\n",adc_lamp,min_lamp,adc_usb,min_usb,adc_batt,batt_stt,pv_stt);

}


