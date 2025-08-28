/***********************************************************************************************************************
 * File Name    : ov5645.c
 * Description  : Initialization of OV5645.
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

#include "ov5647.h"
#include "Wire.h"

void ov5647_write(uint16_t reg, uint8_t val) {
    beginTransmission(0x36);
    write((reg >> 8));
    write((reg & 0xff));
    write(val);
    endTransmission(1);
}

void ov5647_write_array(reg_value_t *regs, int array_size) {
    for (int i = 0; i < array_size; i++) {
        ov5647_write(regs[i].reg, regs[i].val);
    }
}

void ov5647_read(uint16_t reg, uint8_t *ret) {
    beginTransmission(0x36);
    write((reg >> 8));
    write((reg & 0xff));
    endTransmission(1);

    requestFrom(0x36, 1);
    //R_BSP_SoftwareDelay(1, BSP_DELAY_UNITS_MILLISECONDS);
    while (available()) {
        *ret = read();
    }
}

void ov5647_config(void) {
    R_BSP_PinWrite((bsp_io_port_pin_t) BSP_IO_PORT_07_PIN_03, BSP_IO_LEVEL_LOW); /* CAM1_PWR */
       R_BSP_PinWrite((bsp_io_port_pin_t) BSP_IO_PORT_07_PIN_02, BSP_IO_LEVEL_LOW); /* CAM1_RST */

       /* 1 msec wait */
       R_BSP_SoftwareDelay(1, BSP_DELAY_UNITS_MILLISECONDS);

       R_BSP_PinWrite((bsp_io_port_pin_t) BSP_IO_PORT_07_PIN_03, BSP_IO_LEVEL_HIGH); /* CAM1_PWR */
       R_BSP_PinWrite((bsp_io_port_pin_t) BSP_IO_PORT_07_PIN_02, BSP_IO_LEVEL_LOW);  /* CAM1_RST */

       /* 20 msec wait */
       R_BSP_SoftwareDelay(20, BSP_DELAY_UNITS_MILLISECONDS);

       R_BSP_PinWrite((bsp_io_port_pin_t) BSP_IO_PORT_07_PIN_03, BSP_IO_LEVEL_HIGH); /* CAM1_PWR */
       R_BSP_PinWrite((bsp_io_port_pin_t) BSP_IO_PORT_07_PIN_02, BSP_IO_LEVEL_HIGH); /* CAM1_RST */

       /* 20 msec wait */
       R_BSP_SoftwareDelay(20, BSP_DELAY_UNITS_MILLISECONDS);

    ov5647_write_array(ov5647_reg, 256);
}
