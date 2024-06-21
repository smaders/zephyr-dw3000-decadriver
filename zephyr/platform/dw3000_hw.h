#ifndef DW3000_HW_H
#define DW3000_HW_H

typedef void (* dw3000_isr_cb)(void);

int dw3000_hw_init(void);
int dw3000_hw_init_interrupt(void);
void dw3000_hw_uninit(void);
void dw3000_hw_reset(void);
void dw3000_hw_wakeup(void);
void dw3000_hw_wakeup_pin_low(void);
void dw3000_hw_interrupt_enable(void);
void dw3000_hw_interrupt_disable(void);
void dw3000_hw_isr_set_cb(dw3000_isr_cb isr_cb);
bool dw3000_hw_isr_is_rised(void);
#endif
