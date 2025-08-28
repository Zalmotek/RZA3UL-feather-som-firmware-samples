/* generated common header file - do not edit */
#ifndef COMMON_DATA_H_
#define COMMON_DATA_H_
#include <stdint.h>
#include "bsp_api.h"
#include "r_mmu.h"
#include "r_ioport.h"
#include "bsp_pin_cfg.h"
FSP_HEADER
/* MMU Instance */
extern const mmu_instance_t g_mmu;

/* MMU control structure. */
extern mmu_instance_ctrl_t g_mmu_ctrl;
extern const mmu_cfg_t g_mmu_cfg;
#define IOPORT_CFG_NAME g_bsp_pin_cfg
#define IOPORT_CFG_OPEN R_IOPORT_Open
#define IOPORT_CFG_CTRL g_ioport_ctrl

/* IOPORT Instance */
extern const ioport_instance_t g_ioport;

/* IOPORT control structure. */
extern ioport_instance_ctrl_t g_ioport_ctrl;
void g_common_init(void);
FSP_FOOTER
#endif /* COMMON_DATA_H_ */
