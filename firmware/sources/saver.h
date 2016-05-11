#ifndef SAVER_H
#define SAVER_H

#define __IO volatile
#define PWR_OFFSET      (PWR_BASE - PERIPH_BASE)
#define CSR_OFFSET      (PWR_OFFSET + 0x04)
#define EWUP_BitNumber  0x08
#define CSR_EWUP_BB     (PERIPH_BB_BASE + (CSR_OFFSET * 32) + (EWUP_BitNumber * 4))

void saver_init(void);
void wkup_pin_set(FunctionalState NewState);
void alarm_init(uint32_t alarm_time);
void standby_start(void);

#endif // SAVER_H
