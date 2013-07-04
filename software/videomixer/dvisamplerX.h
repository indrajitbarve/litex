#ifndef __DVISAMPLERX_H
#define __DVISAMPLERX_H

void dvisamplerX_isr(void);
void dvisamplerX_init_video(void);
void dvisamplerX_print_status(void);
int dvisamplerX_calibrate_delays(void);
int dvisamplerX_adjust_phase(void);
int dvisamplerX_init_phase(void);
int dvisamplerX_phase_startup(void);
void dvisamplerX_service(void);

#endif