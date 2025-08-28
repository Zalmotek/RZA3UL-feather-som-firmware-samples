/* generated configuration header file - do not edit */
#ifndef BSP_PIN_CFG_H_
#define BSP_PIN_CFG_H_
#include "r_ioport.h"
#define RZ_SD0_CD (IOPORT_PORT_00_PIN_0)
#define NIRQ_PMIC (IOPORT_PORT_00_PIN_1)
#define RZ_ADC_TRG (IOPORT_PORT_06_PIN_2)
#define SER3_RX (IOPORT_PORT_06_PIN_3)
#define SER3_TX (IOPORT_PORT_06_PIN_4)
#define LEDEN (IOPORT_PORT_07_PIN_2)
#define POWEREN (IOPORT_PORT_07_PIN_3)
#define RX1 (IOPORT_PORT_08_PIN_0)
#define TX1 (IOPORT_PORT_08_PIN_1)
#define A2 (IOPORT_PORT_10_PIN_1)
#define A3 (IOPORT_PORT_10_PIN_2)
#define D24 (IOPORT_PORT_10_PIN_3)
#define D25 (IOPORT_PORT_10_PIN_4)
#define D14 (IOPORT_PORT_13_PIN_0)
#define D5 (IOPORT_PORT_13_PIN_1)
#define D10 (IOPORT_PORT_13_PIN_2)
#define D9 (IOPORT_PORT_14_PIN_0)
#define D6 (IOPORT_PORT_14_PIN_1)
#define D13 (IOPORT_PORT_16_PIN_0) /* LED */
#define D12 (IOPORT_PORT_16_PIN_1)
#define SCK_SPI1 (IOPORT_PORT_17_PIN_0)
#define MOSI_SPI1 (IOPORT_PORT_17_PIN_1)
#define MISO_SPI1 (IOPORT_PORT_17_PIN_2)
#define D11 (IOPORT_PORT_17_PIN_3)
extern const ioport_cfg_t g_bsp_pin_cfg; /* RZA3UL_FEATHER */

void BSP_PinConfigSecurityInit();
#endif /* BSP_PIN_CFG_H_ */
