/* generated HAL header file - do not edit */
#ifndef HAL_DATA_H_
#define HAL_DATA_H_
#include <stdint.h>
#include "bsp_api.h"
#include "common_data.h"
#include "r_cru.h"
#include "r_cru_api.h"
#include "r_riic_master.h"
#include "r_i2c_master_api.h"
#include "r_uart_api.h"
#include "r_scif_uart.h"
FSP_HEADER
/** CRU on CRU instance */
extern const camera_instance_t g_cru0;
/** Access the CRU instance using these structures when calling API functions directly (::p_api is not used). */
extern cru_instance_ctrl_t g_cru0_ctrl;
extern const cru_cfg_t g_cru0_cfg;
extern camera_status_t g_cru0_status;
void cru_callback(camera_callback_args_t *p_args);

#define CRU_COLOR_OUTPUT_FORMAT_YUV422_YUYV_0
#if defined (CRU_COLOR_OUTPUT_FORMAT_RGB888_32BIT_0) || defined (CRU_COLOR_OUTPUT_FORMAT_ARGB8888_0) || defined (CRU_COLOR_OUTPUT_FORMAT_BGRA8888_)
            	#define CAPTURE_BYTES_PER_PIXEL (4)
            #elif defined (CRU_COLOR_OUTPUT_FORMAT_RGB888_24BIT_0)
            	#define CAPTURE_BYTES_PER_PIXEL (3)
            #elif defined (CRU_COLOR_OUTPUT_FORMAT_YUV422_YUYV_0) || defined (CRU_COLOR_OUTPUT_FORMAT_YUV422_UYVY_0)
#define CAPTURE_BYTES_PER_PIXEL (2)
#elif defined (CRU_COLOR_OUTPUT_FORMAT_YUV420_YUYV_0) || defined (CRU_COLOR_OUTPUT_FORMAT_YUV420_UYVY_0)
            	#define CAPTURE_BYTES_PER_PIXEL (1)
            #endif

#define BUFFER_NUM_8
#define STA_BUFFER_NUM_0
#define STATISTICS_ENABLE (1 - 0b1)

#ifdef BUFFER_NUM_0
            #define BUFFER0_USED
			#endif
#ifdef BUFFER_NUM_1
            #define BUFFER1_USED
            #define reserved_capture_buffer0_DEFINE_CRU
            #endif
#ifdef BUFFER_NUM_2
            #define BUFFER1_USED
            #define reserved_capture_buffer0_DEFINE_CRU
            #define BUFFER2_USED
            #define reserved_capture_buffer1_DEFINE_CRU
            #endif
#ifdef BUFFER_NUM_3
         	#define BUFFER1_USED
            #define reserved_capture_buffer0_DEFINE_CRU
            #define BUFFER2_USED
            #define reserved_capture_buffer1_DEFINE_CRU
            #define BUFFER3_USED
            #define reserved_capture_buffer2_DEFINE_CRU
            #endif
#ifdef BUFFER_NUM_4
         	#define BUFFER1_USED
            #define reserved_capture_buffer0_DEFINE_CRU
			#define BUFFER2_USED
            #define reserved_capture_buffer1_DEFINE_CRU
            #define BUFFER3_USED
            #define reserved_capture_buffer2_DEFINE_CRU
            #define BUFFER4_USED
            #define reserved_capture_buffer3_DEFINE_CRU
            #endif
#ifdef BUFFER_NUM_5
         	#define BUFFER1_USED
            #define reserved_capture_buffer0_DEFINE_CRU
			#define BUFFER2_USED
            #define reserved_capture_buffer1_DEFINE_CRU
            #define BUFFER3_USED
            #define reserved_capture_buffer2_DEFINE_CRU
            #define BUFFER4_USED
            #define reserved_capture_buffer3_DEFINE_CRU
         	#define BUFFER5_USED
            #define reserved_capture_buffer4_DEFINE_CRU
            #endif
#ifdef BUFFER_NUM_6
         	#define BUFFER1_USED
            #define reserved_capture_buffer0_DEFINE_CRU
			#define BUFFER2_USED
            #define reserved_capture_buffer1_DEFINE_CRU
            #define BUFFER3_USED
            #define reserved_capture_buffer2_DEFINE_CRU
            #define BUFFER4_USED
            #define reserved_capture_buffer3_DEFINE_CRU
         	#define BUFFER5_USED
            #define reserved_capture_buffer4_DEFINE_CRU
         	#define BUFFER6_USED
            #define reserved_capture_buffer5_DEFINE_CRU
            #endif
#ifdef BUFFER_NUM_7
         	#define BUFFER1_USED
            #define reserved_capture_buffer0_DEFINE_CRU
			#define BUFFER2_USED
            #define reserved_capture_buffer1_DEFINE_CRU
            #define BUFFER3_USED
            #define reserved_capture_buffer2_DEFINE_CRU
            #define BUFFER4_USED
            #define reserved_capture_buffer3_DEFINE_CRU
         	#define BUFFER5_USED
            #define reserved_capture_buffer4_DEFINE_CRU
         	#define BUFFER6_USED
            #define reserved_capture_buffer5_DEFINE_CRU
         	#define BUFFER7_USED
            #define reserved_capture_buffer6_DEFINE_CRU
            #endif
#ifdef BUFFER_NUM_8
#define BUFFER1_USED
#define reserved_capture_buffer0_DEFINE_CRU
#define BUFFER2_USED
#define reserved_capture_buffer1_DEFINE_CRU
#define BUFFER3_USED
#define reserved_capture_buffer2_DEFINE_CRU
#define BUFFER4_USED
#define reserved_capture_buffer3_DEFINE_CRU
#define BUFFER5_USED
#define reserved_capture_buffer4_DEFINE_CRU
#define BUFFER6_USED
#define reserved_capture_buffer5_DEFINE_CRU
#define BUFFER7_USED
#define reserved_capture_buffer6_DEFINE_CRU
#define BUFFER8_USED
#define reserved_capture_buffer7_DEFINE_CRU
#endif

#ifdef BUFFER0_USED
			#endif
#ifdef BUFFER1_USED
#ifndef reserved_capture_buffer0_DEFINE_LCDC
extern uint8_t reserved_capture_buffer0[1280 * 720 * CAPTURE_BYTES_PER_PIXEL];
#endif
#endif
#ifdef BUFFER2_USED
#ifndef reserved_capture_buffer1_DEFINE_LCDC
extern uint8_t reserved_capture_buffer1[1280 * 720 * CAPTURE_BYTES_PER_PIXEL];
#endif
#endif
#ifdef BUFFER3_USED
#ifndef reserved_capture_buffer2_DEFINE_LCDC
extern uint8_t reserved_capture_buffer2[1280 * 720 * CAPTURE_BYTES_PER_PIXEL];
#endif
#endif
#ifdef BUFFER4_USED
#ifndef reserved_capture_buffer3_DEFINE_LCDC
extern uint8_t reserved_capture_buffer3[1280 * 720 * CAPTURE_BYTES_PER_PIXEL];
#endif
#endif
#ifdef BUFFER5_USED
#ifndef reserved_capture_buffer4_DEFINE_LCDC
extern uint8_t reserved_capture_buffer4[1280 * 720 * CAPTURE_BYTES_PER_PIXEL];
#endif
#endif
#ifdef BUFFER6_USED
#ifndef reserved_capture_buffer5_DEFINE_LCDC
extern uint8_t reserved_capture_buffer5[1280 * 720 * CAPTURE_BYTES_PER_PIXEL];
#endif
#endif
#ifdef BUFFER7_USED
#ifndef reserved_capture_buffer6_DEFINE_LCDC
extern uint8_t reserved_capture_buffer6[1280 * 720 * CAPTURE_BYTES_PER_PIXEL];
#endif
#endif
#ifdef BUFFER8_USED
#ifndef reserved_capture_buffer7_DEFINE_LCDC
extern uint8_t reserved_capture_buffer7[1280 * 720 * CAPTURE_BYTES_PER_PIXEL];
#endif
#endif
#if STATISTICS_ENABLE
			#ifdef STA_BUFFER_NUM_0
			#endif
			#ifdef STA_BUFFER_NUM_1
			extern uint8_t reserved_sta_buffer0[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			#endif
            #ifdef STA_BUFFER_NUM_2
            extern uint8_t reserved_sta_buffer0[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer1[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			#endif
			#ifdef STA_BUFFER_NUM_3
			extern uint8_t reserved_sta_buffer0[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer1[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer2[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			#endif
			#ifdef STA_BUFFER_NUM_4
			extern uint8_t reserved_sta_buffer0[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer1[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer2[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer3[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			#endif
			#ifdef STA_BUFFER_NUM_5
			extern uint8_t reserved_sta_buffer0[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer1[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer2[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer3[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer4[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			#endif
			#ifdef STA_BUFFER_NUM_6
			extern uint8_t reserved_sta_buffer0[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer1[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer2[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer3[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer4[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer5[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			#endif
			#ifdef STA_BUFFER_NUM_7
			extern uint8_t reserved_sta_buffer0[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer1[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer2[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer3[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer4[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer5[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer6[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			#endif
			#ifdef STA_BUFFER_NUM_8
			extern uint8_t reserved_sta_buffer0[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer1[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer2[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer3[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer4[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer5[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer6[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
			extern uint8_t reserved_sta_buffer7[(1280 >> (4+0)) * (720 >> (4+0)) * 4];
            #endif
#endif
#define CRU_TIMING_125
#if defined CRU_TIMING_CUSTOM
            #define CRU_T_INIT (0x137B9)
            #define CRU_TCLK_MISS (0x4)
            #define CRU_TCLK_SETTLE (0x12)
            #define CRU_THS_SETTLE (0x12)
            #define CRU_TCLK_PREPARE (0xA)
            #define CRU_THS_PREPARE (0xA)
            #elif defined CRU_TIMING_OVER_360
            #define CRU_T_INIT (79801)
            #define CRU_TCLK_MISS (4)
            #define CRU_TCLK_SETTLE (18)
            #define CRU_THS_SETTLE (12)
            #define CRU_TCLK_PREPARE (10)
            #define CRU_THS_PREPARE (10)
            #elif defined CRU_TIMING_360
            #define CRU_T_INIT (79801)
            #define CRU_TCLK_MISS (4)
            #define CRU_TCLK_SETTLE (18)
            #define CRU_THS_SETTLE (12)
            #define CRU_TCLK_PREPARE (10)
            #define CRU_THS_PREPARE (10)
            #elif defined CRU_TIMING_250
            #define CRU_T_INIT (79801)
            #define CRU_TCLK_MISS (4)
            #define CRU_TCLK_SETTLE (18)
            #define CRU_THS_SETTLE (12)
            #define CRU_TCLK_PREPARE (10)
            #define CRU_THS_PREPARE (10)
            #elif defined CRU_TIMING_125
#define CRU_T_INIT (79801)
#define CRU_TCLK_MISS (4)
#define CRU_TCLK_SETTLE (18)
#define CRU_THS_SETTLE (11)
#define CRU_TCLK_PREPARE (10)
#define CRU_THS_PREPARE (9)
#elif defined CRU_TIMING_80
            #define CRU_T_INIT (79801)
            #define CRU_TCLK_MISS (4)
            #define CRU_TCLK_SETTLE (18)
            #define CRU_THS_SETTLE (10)
            #define CRU_TCLK_PREPARE (9)
            #define CRU_THS_PREPARE (9)
            #endif
/* I2C Master on RIIC Instance. */
extern const i2c_master_instance_t g_i2c_master0;

/** Access the I2C Master instance using these structures when calling API functions directly (::p_api is not used). */
extern iic_master_instance_ctrl_t g_i2c_master0_ctrl;
extern const i2c_master_cfg_t g_i2c_master0_cfg;

void i2c_master_callback(i2c_master_callback_args_t *p_args);

#define FSP_NOT_DEFINED (1)
#if (FSP_NOT_DEFINED == FSP_NOT_DEFINED)
#define g_i2c_master0_P_TRANSFER_TX (NULL)
#else
    #define g_i2c_master0_P_TRANSFER_TX (&FSP_NOT_DEFINED)
#endif
#if (FSP_NOT_DEFINED == FSP_NOT_DEFINED)
#define g_i2c_master0_P_TRANSFER_RX (NULL)
#else
    #define g_i2c_master0_P_TRANSFER_RX (&FSP_NOT_DEFINED)
#endif
#undef FSP_NOT_DEFINED
/** UART on SCIF Instance. */
extern const uart_instance_t g_uart0;

/** Access the UART instance using these structures when calling API functions directly (::p_api is not used). */
extern scif_uart_instance_ctrl_t g_uart0_ctrl;
extern const uart_cfg_t g_uart0_cfg;
extern const scif_uart_extended_cfg_t g_uart0_cfg_extend;

void uart_callback_0(uart_callback_args_t *p_args);

#define FSP_NOT_DEFINED (1)
#if (FSP_NOT_DEFINED == FSP_NOT_DEFINED)
#define g_uart0_P_TRANSFER_TX (NULL)
#else
    #define g_uart0_P_TRANSFER_TX (&FSP_NOT_DEFINED)
#endif
#if (FSP_NOT_DEFINED == FSP_NOT_DEFINED)
#define g_uart0_P_TRANSFER_RX (NULL)
#else
    #define g_uart0_P_TRANSFER_RX (&FSP_NOT_DEFINED)
#endif
#undef FSP_NOT_DEFINED
void hal_entry(void);
void g_hal_init(void);
FSP_FOOTER
#endif /* HAL_DATA_H_ */
