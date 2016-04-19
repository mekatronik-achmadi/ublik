#ifndef SAVER_H
#define SAVER_H

#define PWR_OFFSET      (PWR_BASE - PERIPH_BASE)
#define CSR_OFFSET      (PWR_OFFSET + 0x04)
#define EWUP_BitNumber  0x08
#define CSR_EWUP_BB     (PERIPH_BB_BASE + (CSR_OFFSET * 32) + (EWUP_BitNumber * 4))

#define CR_DS_MASK              ((uint32_t)0xFFFFFFFC)
#define PWR_Regulator_LowPower  ((uint32_t)0x00000001)

#define PWR_FLAG_WU             ((uint32_t)0x00000001)

void wkup_pin_set(FunctionalState NewState);
void pwr_flag_clear(uint32_t PWR_FLAG);

void saver_init(void);
void standby_init(void);
void alarm_init(void);
void sleep_init(void);


#endif // SAVER_H
