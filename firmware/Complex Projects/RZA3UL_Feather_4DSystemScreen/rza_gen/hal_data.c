/* generated HAL source file - do not edit */
#include "hal_data.h"
gtm_instance_ctrl_t g_timer0_ctrl;
const gtm_extended_cfg_t g_timer0_extend =
{ .generate_interrupt_when_starts = GTM_GIWS_TYPE_DISABLED, .gtm_mode = GTM_TIMER_MODE_INTERVAL, };
const timer_cfg_t g_timer0_cfg =
{ .mode = TIMER_MODE_PERIODIC,
  .period_counts = 429496729499999 /* Actual period: 4294967.295 seconds. */,
  .channel = 0,
  .p_callback = tick_callback,
  .p_context = NULL,
  .cycle_end_ipl = 24,
  .p_extend = &g_timer0_extend,
#if defined(VECTOR_NUMBER_GTM0_COUNTER_OVERFLOW)
    .cycle_end_irq       = VECTOR_NUMBER_GTM0_COUNTER_OVERFLOW,
#else
  .cycle_end_irq = GTM0_OSTM0INT_IRQn,
#endif
        };
/* Instance structure to use this module. */
const timer_instance_t g_timer0 =
{ .p_ctrl = &g_timer0_ctrl, .p_cfg = &g_timer0_cfg, .p_api = &g_timer_on_gtm };
#define FSP_NOT_DEFINED (UINT32_MAX)
#if (FSP_NOT_DEFINED) != (FSP_NOT_DEFINED)

/* If the transfer module is DMAC, define a DMAC transfer callback. */
#include "r_dmac.h"
extern void scif_uart_tx_dmac_callback(scif_uart_instance_ctrl_t const * const p_ctrl);

void g_uart1_tx_transfer_callback (dmac_callback_args_t * p_args)
{
    FSP_PARAMETER_NOT_USED(p_args);
    scif_uart_tx_dmac_callback(&g_uart1_ctrl);
}
#endif

#if (FSP_NOT_DEFINED) != (FSP_NOT_DEFINED)

/* If the transfer module is DMAC, define a DMAC transfer callback. */
#include "r_dmac.h"
extern void scif_uart_rx_dmac_callback(scif_uart_instance_ctrl_t const * const p_ctrl);

void g_uart1_rx_transfer_callback (dmac_callback_args_t * p_args)
{
    FSP_PARAMETER_NOT_USED(p_args);
    scif_uart_rx_dmac_callback(&g_uart1_ctrl);
}
#endif
#undef FSP_NOT_DEFINED

scif_uart_instance_ctrl_t g_uart1_ctrl;

scif_baud_setting_t g_uart1_baud_setting =
        {
        /* Baud rate calculated with 0.014% error. */.semr_baudrate_bits_b.abcs = 0,
          .semr_baudrate_bits_b.bgdm = 1, .semr_baudrate_bits_b.cks = 0, .brr = 38, .mddr = (uint8_t) 184, .semr_baudrate_bits_b.brme =
                  true };

/** UART extended configuration for UARTonSCIF HAL driver */
const scif_uart_extended_cfg_t g_uart1_cfg_extend =
{ .bri_ipl = 24, .bri_irq = SCIF1_BRK_IRQn, .clock = SCIF_UART_CLOCK_INT, .noise_cancel =
          SCIF_UART_NOISE_CANCELLATION_DISABLE,
  .p_baud_setting = &g_uart1_baud_setting, .rx_fifo_trigger = SCIF_UART_RECEIVE_TRIGGER_MAX, .rts_fifo_trigger =
          SCIF_UART_RTS_TRIGGER_14,
  .uart_mode = SCIF_UART_MODE_RS232, .flow_control = SCIF_UART_FLOW_CONTROL_NONE, .rs485_setting =
  { .enable = (sci_uart_rs485_enable_t) NULL, .polarity = SCI_UART_RS485_DE_POLARITY_HIGH, .de_control_pin =
            (bsp_io_port_pin_t) SCIF_UART_INVALID_16BIT_PARAM, }, };

/** UART interface configuration */
const uart_cfg_t g_uart1_cfg =
{ .channel = 1,
  .data_bits = UART_DATA_BITS_8,
  .parity = UART_PARITY_OFF,
  .stop_bits = UART_STOP_BITS_1,
  .p_callback = uart_callback_1,
  .p_context = NULL,
  .p_extend = &g_uart1_cfg_extend,
  .p_transfer_tx = g_uart1_P_TRANSFER_TX,
  .p_transfer_rx = g_uart1_P_TRANSFER_RX,
  .rxi_ipl = 24,
  .txi_ipl = 24,
  .tei_ipl = 24,
  .eri_ipl = 24,
  .rxi_irq = SCIF1_RXI_IRQn,
  .txi_irq = SCIF1_TXI_IRQn,
  .tei_irq = SCIF1_TEI_DRI_IRQn,
  .eri_irq = SCIF1_RERR_IRQn, };

/* Instance structure to use this module. */
const uart_instance_t g_uart1 =
{ .p_ctrl = &g_uart1_ctrl, .p_cfg = &g_uart1_cfg, .p_api = &g_uart_on_scif };
#define FSP_NOT_DEFINED (UINT32_MAX)
#if (FSP_NOT_DEFINED) != (FSP_NOT_DEFINED)

/* If the transfer module is DMAC, define a DMAC transfer callback. */
#include "r_dmac.h"
extern void scif_uart_tx_dmac_callback(scif_uart_instance_ctrl_t const * const p_ctrl);

void g_uart0_tx_transfer_callback (dmac_callback_args_t * p_args)
{
    FSP_PARAMETER_NOT_USED(p_args);
    scif_uart_tx_dmac_callback(&g_uart0_ctrl);
}
#endif

#if (FSP_NOT_DEFINED) != (FSP_NOT_DEFINED)

/* If the transfer module is DMAC, define a DMAC transfer callback. */
#include "r_dmac.h"
extern void scif_uart_rx_dmac_callback(scif_uart_instance_ctrl_t const * const p_ctrl);

void g_uart0_rx_transfer_callback (dmac_callback_args_t * p_args)
{
    FSP_PARAMETER_NOT_USED(p_args);
    scif_uart_rx_dmac_callback(&g_uart0_ctrl);
}
#endif
#undef FSP_NOT_DEFINED

scif_uart_instance_ctrl_t g_uart0_ctrl;

scif_baud_setting_t g_uart0_baud_setting =
        {
        /* Baud rate calculated with 0.014% error. */.semr_baudrate_bits_b.abcs = 0,
          .semr_baudrate_bits_b.bgdm = 1, .semr_baudrate_bits_b.cks = 0, .brr = 38, .mddr = (uint8_t) 184, .semr_baudrate_bits_b.brme =
                  true };

/** UART extended configuration for UARTonSCIF HAL driver */
const scif_uart_extended_cfg_t g_uart0_cfg_extend =
{ .bri_ipl = 24, .bri_irq = SCIF0_BRK_IRQn, .clock = SCIF_UART_CLOCK_INT, .noise_cancel =
          SCIF_UART_NOISE_CANCELLATION_DISABLE,
  .p_baud_setting = &g_uart0_baud_setting, .rx_fifo_trigger = SCIF_UART_RECEIVE_TRIGGER_MAX, .rts_fifo_trigger =
          SCIF_UART_RTS_TRIGGER_14,
  .uart_mode = SCIF_UART_MODE_RS232, .flow_control = SCIF_UART_FLOW_CONTROL_NONE, .rs485_setting =
  { .enable = (sci_uart_rs485_enable_t) NULL, .polarity = SCI_UART_RS485_DE_POLARITY_HIGH, .de_control_pin =
            (bsp_io_port_pin_t) SCIF_UART_INVALID_16BIT_PARAM, }, };

/** UART interface configuration */
const uart_cfg_t g_uart0_cfg =
{ .channel = 0,
  .data_bits = UART_DATA_BITS_8,
  .parity = UART_PARITY_OFF,
  .stop_bits = UART_STOP_BITS_1,
  .p_callback = uart_callback_0,
  .p_context = NULL,
  .p_extend = &g_uart0_cfg_extend,
  .p_transfer_tx = g_uart0_P_TRANSFER_TX,
  .p_transfer_rx = g_uart0_P_TRANSFER_RX,
  .rxi_ipl = 24,
  .txi_ipl = 24,
  .tei_ipl = 24,
  .eri_ipl = 24,
  .rxi_irq = SCIF0_RXI_IRQn,
  .txi_irq = SCIF0_TXI_IRQn,
  .tei_irq = SCIF0_TEI_DRI_IRQn,
  .eri_irq = SCIF0_RERR_IRQn, };

/* Instance structure to use this module. */
const uart_instance_t g_uart0 =
{ .p_ctrl = &g_uart0_ctrl, .p_cfg = &g_uart0_cfg, .p_api = &g_uart_on_scif };
void g_hal_init(void)
{
    g_common_init ();
}
