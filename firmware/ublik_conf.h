#ifndef UBLIK_CONF_H
#define UBLIK_CONF_H

#define ind_tunda 100
#define con_tunda 100
#define data_tunda 100
#define proc_tunda 100
#define saver_tunda 100
#define analog_tunda 100

#define USE_COMMS 0

#define USE_SAVER 1
#define SLEEP_PERIOD 5  //in second
#define HIBERNATE_PERIOD 25 //in second

#define MIN_ADC_LAMP 100
#define MIN_ADC_USB 4095

#define LVL_BATT_1 100
#define LVL_BATT_2 100
#define LVL_BATT_3 100
#define LVL_BATT_4 100

#define HIBERNATE_CONDITION (chk_lamp()==0) && (chk_pv()==0 ) && (chk_usb()==0 )

#endif // UBLIK_CONF_H
