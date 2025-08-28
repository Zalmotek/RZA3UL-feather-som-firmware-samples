/***********************************************************************************************************************
 * File Name    : ov5645.h
 * Description  : It contains functions and macros to set up OV5645..
 **********************************************************************************************************************/
/***********************************************************************************************************************
 * Copyright [2020-2022] Renesas Electronics Corporation and/or its affiliates.  All Rights Reserved.
 *
 * This software and documentation are supplied by Renesas Electronics Corporation and/or its affiliates and may only
 * be used with products of Renesas Electronics Corp. and its affiliates ("Renesas").  No other uses are authorized.
 * Renesas products are sold pursuant to Renesas terms and conditions of sale.  Purchasers are solely responsible for
 * the selection and use of Renesas products and Renesas assumes no liability.  No license, express or implied, to any
 * intellectual property right is granted by Renesas.  This software is protected under all applicable laws, including
 * copyright laws. Renesas reserves the right to change or discontinue this software and/or this documentation.
 * THE SOFTWARE AND DOCUMENTATION IS DELIVERED TO YOU "AS IS," AND RENESAS MAKES NO REPRESENTATIONS OR WARRANTIES, AND
 * TO THE FULLEST EXTENT PERMISSIBLE UNDER APPLICABLE LAW, DISCLAIMS ALL WARRANTIES, WHETHER EXPLICITLY OR IMPLICITLY,
 * INCLUDING WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, AND NONINFRINGEMENT, WITH RESPECT TO THE
 * SOFTWARE OR DOCUMENTATION.  RENESAS SHALL HAVE NO LIABILITY ARISING OUT OF ANY SECURITY VULNERABILITY OR BREACH.
 * TO THE MAXIMUM EXTENT PERMITTED BY LAW, IN NO EVENT WILL RENESAS BE LIABLE TO YOU IN CONNECTION WITH THE SOFTWARE OR
 * DOCUMENTATION (OR ANY PERSON OR ENTITY CLAIMING RIGHTS DERIVED FROM YOU) FOR ANY LOSS, DAMAGES, OR CLAIMS WHATSOEVER,
 * INCLUDING, WITHOUT LIMITATION, ANY DIRECT, CONSEQUENTIAL, SPECIAL, INDIRECT, PUNITIVE, OR INCIDENTAL DAMAGES; ANY
 * LOST PROFITS, OTHER ECONOMIC DAMAGE, PROPERTY DAMAGE, OR PERSONAL INJURY; AND EVEN IF RENESAS HAS BEEN ADVISED OF THE
 * POSSIBILITY OF SUCH LOSS, DAMAGES, CLAIMS OR COSTS.
 **********************************************************************************************************************/

#ifndef OV5647_H_
#define OV5647_H_
#include "hal_data.h"

typedef struct {
    uint16_t reg;
    uint8_t  val;
} reg_value_t;

/*
 * From the datasheet, "20ms after PWDN goes low or 20ms after RESETB goes
 * high if reset is inserted after PWDN goes high, host can access sensor's
 * SCCB to initialize sensor."
 */
#define PWDN_ACTIVE_DELAY_MS    20

#define MIPI_CTRL00_CLOCK_LANE_GATE     BIT(5)
#define MIPI_CTRL00_LINE_SYNC_ENABLE        BIT(4)
#define MIPI_CTRL00_BUS_IDLE            BIT(2)
#define MIPI_CTRL00_CLOCK_LANE_DISABLE      BIT(0)

#define BIT(nr) (1UL << (nr))

#define OV5647_SW_STANDBY       0x0100
#define OV5647_SW_RESET         0x0103
#define OV5647_REG_CHIPID_H     0x300a
#define OV5647_REG_CHIPID_L     0x300b
#define OV5640_REG_PAD_OUT      0x300d
#define OV5647_REG_EXP_HI       0x3500
#define OV5647_REG_EXP_MID      0x3501
#define OV5647_REG_EXP_LO       0x3502
#define OV5647_REG_AEC_AGC      0x3503
#define OV5647_REG_GAIN_HI      0x350a
#define OV5647_REG_GAIN_LO      0x350b
#define OV5647_REG_VTS_HI       0x380e
#define OV5647_REG_VTS_LO       0x380f
#define OV5647_REG_FRAME_OFF_NUMBER 0x4202
#define OV5647_REG_MIPI_CTRL00      0x4800
#define OV5647_REG_MIPI_CTRL14      0x4814
#define OV5647_REG_AWB          0x5001
#define OV5647_REG_ISPCTRL3D        0x503d

#define REG_TERM 0xfffe
#define VAL_TERM 0xfe
#define REG_DLY  0xffff

/* OV5647 native and active pixel array size */
#define OV5647_NATIVE_WIDTH     2624U
#define OV5647_NATIVE_HEIGHT        1956U

#define OV5647_PIXEL_ARRAY_LEFT     16U
#define OV5647_PIXEL_ARRAY_TOP      16U
#define OV5647_PIXEL_ARRAY_WIDTH    2592U
#define OV5647_PIXEL_ARRAY_HEIGHT   1944U

#define OV5647_VBLANK_MIN       4
#define OV5647_VTS_MAX          32767

#define OV5647_EXPOSURE_MIN     4
#define OV5647_EXPOSURE_STEP        1
#define OV5647_EXPOSURE_DEFAULT     1000
#define OV5647_EXPOSURE_MAX     65535

static reg_value_t ov5647_reg[] = {
    {0x0100, 0x00},
    {0x3035, 0x11},
    {0x3036, 0x69},
    {0x303c, 0x11},
    {0x3821, 0x07},
    {0x3820, 0x41},
    {0x370c, 0x0f},
    {0x3612, 0x59},
    {0x3618, 0x00},
    {0x5000, 0x06},
    {0x5002, 0x40},
    {0x5003, 0x08},
    {0x5a00, 0x08},
    {0x3000, 0xff},
    {0x3001, 0xff},
    {0x3002, 0xff},
    {0x301d, 0xf0},
    {0x3a18, 0x00},
    {0x3a19, 0xf8},
    {0x3c01, 0x80},
    {0x3b07, 0x0c},
    {0x380c, 0x07},
    {0x380d, 0x68},
    {0x380e, 0x03},
    {0x380f, 0xd8},
    {0x3814, 0x31},
    {0x3815, 0x31},
    {0x3708, 0x64},
    {0x3709, 0x52},
    {0x3808, 0x05},
    {0x3809, 0x00},
    {0x380a, 0x03},
    {0x380b, 0xc0},
    {0x3800, 0x00},
    {0x3801, 0x18},
    {0x3802, 0x00},
    {0x3803, 0x0e},
    {0x3804, 0x0a},
    {0x3805, 0x27},
    {0x3806, 0x07},
    {0x3807, 0x95},
    {0x3630, 0x2e},
    {0x3632, 0xe2},
    {0x3633, 0x23},
    {0x3634, 0x44},
    {0x3620, 0x64},
    {0x3621, 0xe0},
    {0x3600, 0x37},
    {0x3704, 0xa0},
    {0x3703, 0x5a},
    {0x3715, 0x78},
    {0x3717, 0x01},
    {0x3731, 0x02},
    {0x370b, 0x60},
    {0x3705, 0x1a},
    {0x3f05, 0x02},
    {0x3f06, 0x10},
    {0x3f01, 0x0a},
    {0x3a08, 0x01},
    {0x3a09, 0x27},
    {0x3a0a, 0x00},
    {0x3a0b, 0xf6},
    {0x3a0d, 0x04},
    {0x3a0e, 0x03},
    {0x3a0f, 0x58},
    {0x3a10, 0x50},
    {0x3a1b, 0x58},
    {0x3a1e, 0x50},
    {0x3a11, 0x60},
    {0x3a1f, 0x28},
    {0x4001, 0x02},
    {0x4004, 0x02},
    {0x4000, 0x09},
    {0x4050, 0x6e},
    {0x4051, 0x8f},
    {0x4837, 0x17},
    {0x3503, 0x03},
    {0x3501, 0x44},
    {0x3502, 0x80},
    {0x350a, 0x00},
    {0x350b, 0x7f},
    {0x5001, 0x01},
    {0x5002, 0x41},
    {0x5180, 0x08},
    {0x5186, 0x04},
    {0x5187, 0x00},
    {0x5188, 0x04},
    {0x5189, 0x00},
    {0x518a, 0x04},
    {0x518b, 0x00},
    {0x5000, 0x86},
    {0x5800, 0x11},
    {0x5801, 0x0a},
    {0x5802, 0x09},
    {0x5803, 0x09},
    {0x5804, 0x0a},
    {0x5805, 0x0f},
    {0x5806, 0x07},
    {0x5807, 0x05},
    {0x5808, 0x03},
    {0x5809, 0x03},
    {0x580a, 0x05},
    {0x580b, 0x07},
    {0x580c, 0x05},
    {0x580d, 0x02},
    {0x580e, 0x00},
    {0x580f, 0x00},
    {0x5810, 0x02},
    {0x5811, 0x05},
    {0x5812, 0x05},
    {0x5813, 0x02},
    {0x5814, 0x00},
    {0x5815, 0x00},
    {0x5816, 0x01},
    {0x5817, 0x05},
    {0x5818, 0x08},
    {0x5819, 0x05},
    {0x581a, 0x03},
    {0x581b, 0x03},
    {0x581c, 0x04},
    {0x581d, 0x07},
    {0x581e, 0x10},
    {0x581f, 0x0b},
    {0x5820, 0x09},
    {0x5821, 0x09},
    {0x5822, 0x09},
    {0x5823, 0x0e},
    {0x5824, 0x28},
    {0x5825, 0x1a},
    {0x5826, 0x1a},
    {0x5827, 0x1a},
    {0x5828, 0x46},
    {0x5829, 0x2a},
    {0x582a, 0x26},
    {0x582b, 0x44},
    {0x582c, 0x26},
    {0x582d, 0x2a},
    {0x582e, 0x28},
    {0x582f, 0x42},
    {0x5830, 0x40},
    {0x5831, 0x42},
    {0x5832, 0x28},
    {0x5833, 0x0a},
    {0x5834, 0x16},
    {0x5835, 0x44},
    {0x5836, 0x26},
    {0x5837, 0x2a},
    {0x5838, 0x28},
    {0x5839, 0x0a},
    {0x583a, 0x0a},
    {0x583b, 0x0a},
    {0x583c, 0x26},
    {0x583d, 0xbe},
    {0x0100, 0x01},
    {0x3000, 0x00},
    {0x3001, 0x00},
    {0x3002, 0x00},
    {0x3017, 0xe0},
    {0x301c, 0xfc},
    {0x3636, 0x06},
    {0x3016, 0x08},
    {0x3827, 0xec},
    {0x3018, 0x44},
    {0x3035, 0x21},
    {0x3106, 0xf5},
    {0x3034, 0x18},
    {0x301c, 0xf8},
    {0x0100, 0x00},
    {0x3820, 0x41},
    {0x3821, 0x07},
    {0x3612, 0x59},
    {0x3618, 0x00},
    {0x380c, 0x09},
    {0x380d, 0xe8},
    {0x380e, 0x04},
    {0x380f, 0x50},
    {0x3814, 0x31},
    {0x3815, 0x31},
    {0x3709, 0x52},
    {0x3808, 0x05},
    {0x3809, 0x00},
    {0x380a, 0x02},
    {0x380b, 0xd0},
    {0x3801, 0x18},
    {0x3802, 0x00},
    {0x3803, 0xf8},
    {0x3804, 0x0a},
    {0x3805, 0x27},
    {0x3806, 0x06},
    {0x3807, 0xa7},
    {0x3a09, 0xbe},
    {0x3a0a, 0x01},
    {0x3a0b, 0x74},
    {0x3a0d, 0x02},
    {0x3a0e, 0x01},
    {0x4004, 0x02},
    {0x4005, 0x18},
    {0x0100, 0x01},
};

/* Function declaration */
void ov5647_write(uint16_t reg, uint8_t val);
void ov5647_write_array(reg_value_t *regs, int array_size);
void ov5647_read(uint16_t reg, uint8_t *ret);
void ov5647_config(void);

#endif /* OV5647_H_ */
