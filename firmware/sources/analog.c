#include "inklusi.h"

static adcsample_t samples[ADC_GRP1_NUM_CHANNELS * ADC_GRP1_BUF_DEPTH];
static uint32_t sum_adc_lamp;
adcsample_t adc_lamp;

void adccb(ADCDriver *adcp, adcsample_t *buffer, size_t n){
    (void) buffer;
    (void) n;

    int i;
    if (adcp->state == ADC_COMPLETE) {

        sum_adc_lamp=0;

        for(i=0;i<ADC_GRP1_BUF_DEPTH;i++){
            sum_adc_lamp=sum_adc_lamp+samples[0+(i*ADC_GRP1_NUM_CHANNELS)];
        }

        adc_lamp=sum_adc_lamp/ADC_GRP1_BUF_DEPTH;
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
    ADC_LAMP_SMPR_(ADC_SAMPLE_239P5),
    0,
    ADC_SQR1_NUM_CH(ADC_GRP1_NUM_CHANNELS),
    0,
    ADC_SQR3_SQ1_N(ADC_LAMP_CHANNEL)
};

void analog_init(void){
    palSetPadMode(GPIOA,ADC_LAMP_N,PAL_MODE_INPUT_ANALOG);
    adcStart(&ADCD1, NULL);
}

void analog_read(void){
    delay(0xAFFFF);
    adcStartConversion(&ADCD1, &adcgrpcfg, samples, ADC_GRP1_BUF_DEPTH);
    delay(0xAFFFF);
}

void analog_deinit(void){
    adcStopConversion(&ADCD1);
    adcStop(&ADCD1);
    palSetPadMode(GPIOA,ADC_LAMP_N,PAL_MODE_RESET);
}

uint8_t chk_lamp(void){
    delay(0xAFFFF);
    adcStartConversion(&ADCD1, &adcgrpcfg, samples, ADC_GRP1_BUF_DEPTH);
    delay(0xAFFFF);

    if(adc_lamp>=MIN_ADC_LAMP){
        return 1;
    }
    else{
        return 0;
    }
}


