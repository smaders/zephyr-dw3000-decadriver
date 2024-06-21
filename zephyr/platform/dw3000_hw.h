#ifndef DW3000_HW_H
#define DW3000_HW_H

int dw3000_hw_init(void);
int dw3000_hw_init_interrupt(void);
void dw3000_hw_uninit(void);
void dw3000_hw_reset(void);
void dw3000_hw_wakeup(void);
void dw3000_hw_wakeup_pin_low(void);
void dw3000_hw_interrupt_enable(void);
void dw3000_hw_interrupt_disable(void);

#endif
