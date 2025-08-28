/* generated HAL source file - do not edit */
#include "hal_data.h"
/** Buffer setting for Capture output */
#ifdef BUFFER0_USED
			#endif
#ifdef BUFFER1_USED
			#ifndef reserved_capture_buffer0_DEFINE_LCDC
         	uint8_t reserved_capture_buffer0[1280 * 720 * CAPTURE_BYTES_PER_PIXEL] BSP_ALIGN_VARIABLE(64) BSP_PLACE_IN_SECTION("UNCACHED_BSS")__attribute__ ((__aligned__(512)));
         	#endif
         	#endif
#ifdef BUFFER2_USED
         	#ifndef reserved_capture_buffer1_DEFINE_LCDC
         	uint8_t reserved_capture_buffer1[1280 * 720 * CAPTURE_BYTES_PER_PIXEL] BSP_ALIGN_VARIABLE(64) BSP_PLACE_IN_SECTION("UNCACHED_BSS")__attribute__ ((__aligned__(512)));
         	#endif
         	#endif
#ifdef BUFFER3_USED
         	#ifndef reserved_capture_buffer2_DEFINE_LCDC
         	uint8_t reserved_capture_buffer2[1280 * 720 * CAPTURE_BYTES_PER_PIXEL] BSP_ALIGN_VARIABLE(64) BSP_PLACE_IN_SECTION("UNCACHED_BSS")__attribute__ ((__aligned__(512)));
         	#endif
         	#endif
#ifdef BUFFER4_USED
         	#ifndef reserved_capture_buffer3_DEFINE_LCDC
         	uint8_t reserved_capture_buffer3[1280 * 720 * CAPTURE_BYTES_PER_PIXEL] BSP_ALIGN_VARIABLE(64) BSP_PLACE_IN_SECTION("UNCACHED_BSS")__attribute__ ((__aligned__(512)));
         	#endif
         	#endif
#ifdef BUFFER5_USED
         	#ifndef reserved_capture_buffer4_DEFINE_LCDC
         	uint8_t reserved_capture_buffer4[1280 * 720 * CAPTURE_BYTES_PER_PIXEL] BSP_ALIGN_VARIABLE(64) BSP_PLACE_IN_SECTION("UNCACHED_BSS")__attribute__ ((__aligned__(512)));
         	#endif
         	#endif
#ifdef BUFFER6_USED
         	#ifndef reserved_capture_buffer5_DEFINE_LCDC
         	uint8_t reserved_capture_buffer5[1280 * 720 * CAPTURE_BYTES_PER_PIXEL] BSP_ALIGN_VARIABLE(64) BSP_PLACE_IN_SECTION("UNCACHED_BSS")__attribute__ ((__aligned__(512)));
         	#endif
         	#endif
#ifdef BUFFER7_USED
         	#ifndef reserved_capture_buffer6_DEFINE_LCDC
         	uint8_t reserved_capture_buffer6[1280 * 720 * CAPTURE_BYTES_PER_PIXEL] BSP_ALIGN_VARIABLE(64) BSP_PLACE_IN_SECTION("UNCACHED_BSS")__attribute__ ((__aligned__(512)));
         	#endif
         	#endif
#ifdef BUFFER8_USED
         	#ifndef reserved_capture_buffer7_DEFINE_LCDC
         	uint8_t reserved_capture_buffer7[1280 * 720 * CAPTURE_BYTES_PER_PIXEL] BSP_ALIGN_VARIABLE(64) BSP_PLACE_IN_SECTION("UNCACHED_BSS")__attribute__ ((__aligned__(512)));
			#endif
			#endif
#if STATISTICS_ENABLE
			#ifdef STA_BUFFER_NUM_0
			#endif
			#ifdef STA_BUFFER_NUM_1
			 uint8_t reserved_sta_buffer0[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			#endif
            #ifdef STA_BUFFER_NUM_2
             uint8_t reserved_sta_buffer0[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer1[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			#endif
			#ifdef STA_BUFFER_NUM_3
			 uint8_t reserved_sta_buffer0[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer1[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer2[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			#endif
			#ifdef STA_BUFFER_NUM_4
			 uint8_t reserved_sta_buffer0[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer1[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer2[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer3[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			#endif
			#ifdef STA_BUFFER_NUM_5
			 uint8_t reserved_sta_buffer0[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer1[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer2[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer3[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer4[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			#endif
			#ifdef STA_BUFFER_NUM_6
			 uint8_t reserved_sta_buffer0[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer1[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer2[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer3[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer4[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer5[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			#endif
			#ifdef STA_BUFFER_NUM_7
			 uint8_t reserved_sta_buffer0[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer1[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer2[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer3[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer4[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer5[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer6[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			#endif
			#ifdef STA_BUFFER_NUM_8
			 uint8_t reserved_sta_buffer0[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer1[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer2[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer3[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer4[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer5[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer6[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
			 uint8_t reserved_sta_buffer7[(1280 >> (4+0)) * (720 >> (4+0)) * 4]BSP_ALIGN_VARIABLE(512) BSP_PLACE_IN_SECTION("UNCACHED_BSS");
            #endif
#endif
/** CRU control block instance  */
cru_instance_ctrl_t g_cru0_ctrl;

/* Camera device extended configuration */
const cru_extended_cfg_t g_cru0_extend_cfg =
{ .color_input = CRU_COLOR_INPUT_FORMAT_RAW8,
  .color_output = CRU_COLOR_OUTPUT_FORMAT_YUV422_YUYV,
  .num_datalane = CRU_DATALANE_2,
  .interrupt_enable = false | CRU_INTERRUPT_ENABLE_FRAME_END | false,
  .scan_line_num = 0,
  .image_conv_int_ipl = 24,
  .image_conv_int_irq = CRU_IMAGE_CONV_INT_IRQn,
  .statistics_cfg =
  { .statistics = 0b1,
#if STATISTICS_ENABLE
#ifdef STA_BUFFER_NUM_1
   						.pp_buffer[0] = reserved_sta_buffer0,
#endif
#ifdef STA_BUFFER_NUM_2
   						.pp_buffer[0] = reserved_sta_buffer0,
   						.pp_buffer[1] = reserved_sta_buffer1,
#endif
#ifdef STA_BUFFER_NUM_3
   						.pp_buffer[0] = reserved_sta_buffer0,
   						.pp_buffer[1] = reserved_sta_buffer1,
   						.pp_buffer[2] = reserved_sta_buffer2,
#endif
#ifdef STA_BUFFER_NUM_4
   						.pp_buffer[0] = reserved_sta_buffer0,
   						.pp_buffer[1] = reserved_sta_buffer1,
   						.pp_buffer[2] = reserved_sta_buffer2,
   						.pp_buffer[3] = reserved_sta_buffer3,
#endif
#ifdef STA_BUFFER_NUM_5
   						.pp_buffer[0] = reserved_sta_buffer0,
   						.pp_buffer[1] = reserved_sta_buffer1,
   						.pp_buffer[2] = reserved_sta_buffer2,
   						.pp_buffer[3] = reserved_sta_buffer3,
   						.pp_buffer[4] = reserved_sta_buffer4,
#endif
#ifdef STA_BUFFER_NUM_6
   						.pp_buffer[0] = reserved_sta_buffer0,
   						.pp_buffer[1] = reserved_sta_buffer1,
   						.pp_buffer[2] = reserved_sta_buffer2,
   						.pp_buffer[3] = reserved_sta_buffer3,
   						.pp_buffer[4] = reserved_sta_buffer4,
   						.pp_buffer[5] = reserved_sta_buffer5,
#endif
#ifdef STA_BUFFER_NUM_7
   						.pp_buffer[0] = reserved_sta_buffer0,
   						.pp_buffer[1] = reserved_sta_buffer1,
   						.pp_buffer[2] = reserved_sta_buffer2,
   						.pp_buffer[3] = reserved_sta_buffer3,
   						.pp_buffer[4] = reserved_sta_buffer4,
   						.pp_buffer[5] = reserved_sta_buffer5,
   						.pp_buffer[6] = reserved_sta_buffer6,
#endif
#ifdef STA_BUFFER_NUM_8
   						.pp_buffer[0] = reserved_sta_buffer0,
   						.pp_buffer[1] = reserved_sta_buffer1,
   						.pp_buffer[2] = reserved_sta_buffer2,
   						.pp_buffer[3] = reserved_sta_buffer3,
   						.pp_buffer[4] = reserved_sta_buffer4,
   						.pp_buffer[5] = reserved_sta_buffer5,
   						.pp_buffer[6] = reserved_sta_buffer6,
   						.pp_buffer[7] = reserved_sta_buffer7,
#endif
   						.num_buffers = 0,
   						.stunit      = 0,
   						.stsadpos    = 0,
   						.sthpos      = 0,
#endif
          },
  .linearmatrix_cfg =
  { .linearmatrix = 0b1,
    .rof = 0,
    .gof = 0,
    .bof = 0,
    .rr = 1.0 * 1024,
    .rg = 0 * 1024,
    .rb = 0 * 1024,
    .gr = 0 * 1024,
    .gg = 1.0 * 1024,
    .gb = 0 * 1024,
    .br = 0 * 1024,
    .bg = 0 * 1024,
    .bb = 1.0 * 1024, },
  .rgb_bit_extension = 0b0,
  .rawstarttype = 0b11,
  .t_init = CRU_T_INIT,
  .tclk_miss = CRU_TCLK_MISS,
  .tclk_settle = CRU_TCLK_SETTLE,
  .ths_settle = CRU_THS_SETTLE,
  .tclk_prepare = CRU_TCLK_PREPARE,
  .ths_prepare = CRU_THS_PREPARE, };

/** CRU configuration setting */
const cru_cfg_t g_cru0_cfg =
{ .x_capture_start_pixel = 0, .x_capture_pixels = 1280, .y_capture_start_pixel = 0, .y_capture_pixels = 720,

.buffer_cfg =
{
#ifdef BUFFER_NUM_0
#endif
#ifdef BUFFER_NUM_1
         			.pp_buffer[0]		= reserved_capture_buffer0,
#endif
#ifdef BUFFER_NUM_2
         			.pp_buffer[0]		= reserved_capture_buffer0,
         			.pp_buffer[1]		= reserved_capture_buffer1,
#endif
#ifdef BUFFER_NUM_3
         			.pp_buffer[0]		= reserved_capture_buffer0,
         			.pp_buffer[1]		= reserved_capture_buffer1,
         			.pp_buffer[2]		= reserved_capture_buffer2,
#endif
#ifdef BUFFER_NUM_4
         			.pp_buffer[0]		= reserved_capture_buffer0,
         			.pp_buffer[1]		= reserved_capture_buffer1,
         			.pp_buffer[2]		= reserved_capture_buffer2,
         			.pp_buffer[3]		= reserved_capture_buffer3,
#endif
#ifdef BUFFER_NUM_5
         			.pp_buffer[0]		= reserved_capture_buffer0,
         			.pp_buffer[1]		= reserved_capture_buffer1,
         			.pp_buffer[2]		= reserved_capture_buffer2,
         			.pp_buffer[3]		= reserved_capture_buffer3,
         			.pp_buffer[4]		= reserved_capture_buffer4,
#endif
#ifdef BUFFER_NUM_6
         			.pp_buffer[0]		= reserved_capture_buffer0,
         			.pp_buffer[1]		= reserved_capture_buffer1,
         			.pp_buffer[2]		= reserved_capture_buffer2,
         			.pp_buffer[3]		= reserved_capture_buffer3,
         			.pp_buffer[4]		= reserved_capture_buffer4,
         			.pp_buffer[5]		= reserved_capture_buffer5,
#endif
#ifdef BUFFER_NUM_7
         			.pp_buffer[0]		= reserved_capture_buffer0,
         			.pp_buffer[1]		= reserved_capture_buffer1,
         			.pp_buffer[2]		= reserved_capture_buffer2,
         			.pp_buffer[3]		= reserved_capture_buffer3,
         			.pp_buffer[4]		= reserved_capture_buffer4,
         			.pp_buffer[5]		= reserved_capture_buffer5,
         			.pp_buffer[6]		= reserved_capture_buffer6,
#endif
#ifdef BUFFER_NUM_8
         			.pp_buffer[0]		= reserved_capture_buffer0,
         			.pp_buffer[1]		= reserved_capture_buffer1,
         			.pp_buffer[2]		= reserved_capture_buffer2,
         			.pp_buffer[3]		= reserved_capture_buffer3,
         			.pp_buffer[4]		= reserved_capture_buffer4,
         			.pp_buffer[5]		= reserved_capture_buffer5,
         			.pp_buffer[6]		= reserved_capture_buffer6,
         			.pp_buffer[7]		= reserved_capture_buffer7,
#endif
  .num_buffers = 8, },
  .p_callback = cru_callback, .p_context = NULL, .p_extend = (void*) (&g_cru0_extend_cfg), };

/** CRU status parameters */
camera_status_t g_cru0_status =
{ .state = CAMERA_STATE_IDLE,
#ifdef BUFFER_NUM_0
				.p_buffer				= NULL,
#else
  .p_buffer = (uint32_t*) reserved_capture_buffer0,
#endif
  .data_size = 1280 * 720 * CAPTURE_BYTES_PER_PIXEL };

const camera_instance_t g_cru0 =
{ .p_ctrl = &g_cru0_ctrl, .p_cfg = (cru_cfg_t*) &g_cru0_cfg, .p_api = (cru_api_t*) &g_cru_on_cru };
#define FSP_NOT_DEFINED (UINT32_MAX)
#if (FSP_NOT_DEFINED) != (FSP_NOT_DEFINED)

/* If the transfer module is DMAC, define a DMAC transfer callback. */
#include "r_dmac.h"
extern void riic_master_tx_dmac_callback(iic_master_instance_ctrl_t * p_ctrl);

void g_i2c_master0_tx_transfer_callback (dmac_callback_args_t * p_args)
{
    FSP_PARAMETER_NOT_USED(p_args);
    riic_master_tx_dmac_callback(&g_i2c_master0_ctrl);
}
#endif

#if (FSP_NOT_DEFINED) != (FSP_NOT_DEFINED)

/* If the transfer module is DMAC, define a DMAC transfer callback. */
#include "r_dmac.h"
extern void riic_master_rx_dmac_callback(iic_master_instance_ctrl_t * p_ctrl);

void g_i2c_master0_rx_transfer_callback (dmac_callback_args_t * p_args)
{
    FSP_PARAMETER_NOT_USED(p_args);
    riic_master_rx_dmac_callback(&g_i2c_master0_ctrl);
}
#endif
#undef FSP_NOT_DEFINED

iic_master_instance_ctrl_t g_i2c_master0_ctrl;
const riic_master_extended_cfg_t g_i2c_master0_extend =
{ .timeout_mode = IIC_MASTER_TIMEOUT_MODE_SHORT,
  .timeout_scl_low = IIC_MASTER_TIMEOUT_SCL_LOW_ENABLED,
  /* Actual calculated bitrate: 396825. Actual calculated duty cycle: 51%. */.clock_settings.brl_value = 25,
  .clock_settings.brh_value = 26,
  .clock_settings.cks_value = 2,
  .noise_filter_stage = 1,
  .naki_irq = RIIC0_NAKI_IRQn,
  .spi_irq = RIIC0_SPI_IRQn,
  .sti_irq = RIIC0_STI_IRQn,
  .ali_irq = RIIC0_ALI_IRQn,
  .tmoi_irq = RIIC0_TMOI_IRQn };
const i2c_master_cfg_t g_i2c_master0_cfg =
{ .channel = 0, .rate = I2C_MASTER_RATE_FAST, .slave = 0x36, .addr_mode = I2C_MASTER_ADDR_MODE_7BIT, .p_transfer_tx =
          g_i2c_master0_P_TRANSFER_TX,
  .p_transfer_rx = g_i2c_master0_P_TRANSFER_RX, .p_callback = i2c_master_callback, .p_context = NULL, .rxi_irq =
          RIIC0_RI_IRQn,
  .txi_irq = RIIC0_TI_IRQn, .tei_irq = RIIC0_TEI_IRQn, .ipl = 12, .p_extend = &g_i2c_master0_extend, };
/* Instance structure to use this module. */
const i2c_master_instance_t g_i2c_master0 =
{ .p_ctrl = &g_i2c_master0_ctrl, .p_cfg = &g_i2c_master0_cfg, .p_api = &g_i2c_master_on_iic };
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
        /* Baud rate calculated with 0.469% error. */.semr_baudrate_bits_b.abcs = 0,
          .semr_baudrate_bits_b.bgdm = 1, .semr_baudrate_bits_b.cks = 0, .brr = 53, .mddr = (uint8_t) 256, .semr_baudrate_bits_b.brme =
                  false };

/** UART extended configuration for UARTonSCIF HAL driver */
const scif_uart_extended_cfg_t g_uart0_cfg_extend =
{ .bri_ipl = 24, .bri_irq = SCIF0_BRK_IRQn, .clock = SCIF_UART_CLOCK_INT, .noise_cancel =
          SCIF_UART_NOISE_CANCELLATION_DISABLE,
  .p_baud_setting = &g_uart0_baud_setting, .rx_fifo_trigger = SCIF_UART_RX_FIFO_TRIGGER_MAX, .rts_fifo_trigger =
          SCIF_UART_RTS_TRIGGER_14,
  .uart_mode = SCIF_UART_MODE_RS232, .flow_control = SCIF_UART_FLOW_CONTROL_NONE, .rs485_setting =
  { .enable = (scif_uart_rs485_enable_t) NULL, .polarity = SCIF_UART_RS485_DE_POLARITY_HIGH, .de_control_pin =
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
