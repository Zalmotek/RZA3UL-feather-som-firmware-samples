/***********************************************************************************************************************
 * File Name    : cru_ep.c
 * Description  : Contains CRU functions definition.
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

#include "common_utils.h"
#include "cru_ep.h"

/*******************************************************************************************************************//**
 * @addtogroup r_cru_ep
 * @{
 **********************************************************************************************************************/
/*
 * Private global variables
 */
static uint8_t cap_write_num;
static uint8_t cap_read_num;

/*******************************************************************************************************************//**
 * @brief       Interrupt Callback function of CRU.
 * @param[in]   p_args
 * @retval      None
 **********************************************************************************************************************/
void cru_callback(camera_callback_args_t * p_args)
{
    if( p_args->event == CRU_INTERRUPT_ENABLE_FRAME_END )
    {
        cap_write_num++;
        if(cap_write_num >= g_cru0_cfg.buffer_cfg.num_buffers)
        {
            cap_write_num = 0;
        }
    }
}

/*****************************************************************************************************************
 *  @brief       Initializes the CRU modules and enables interrupts.
 *  @param[in]   None
 *  @retval      FSP_SUCCESS               Initializes the CRU modules.
 *  @retval      FSP_ERR_ASSERTION         Pointer to the control block is NULL.
 *  @retval      FSP_ERR_ALREADY_OPEN      CRU module is already open
 *  @retval      FSP_ERR_INVALID_ARGUMENT  Invalid argument error
 *  @retval      FSP_ERR_INVALID_ALIGNMENT Input buffer alignment
 ****************************************************************************************************************/
fsp_err_t cru_open (void)
{
    fsp_err_t err   = FSP_SUCCESS;

    cap_write_num = 0;
    cap_read_num = 0;
    
    err = g_cru_on_cru.open(g_cru0.p_ctrl, g_cru0.p_cfg);
    if (FSP_SUCCESS != err)
    {
        //APP_ERR_PRINT("** R_CRU_Open API failed **\r\n");
        return err;
    }
    return err;
}

fsp_err_t cru_close (void)
{
    fsp_err_t err   = FSP_SUCCESS;

    cap_write_num = 0;
    cap_read_num = 0;

    err = g_cru_on_cru.close(g_cru0.p_ctrl);
    if (FSP_SUCCESS != err)
    {
        //APP_ERR_PRINT("** R_CRU_CloseAPI failed **\r\n");
        return err;
    }
    return err;
}

/*****************************************************************************************************************
 *  @brief       Start a capture. It is only possible when CRU is open.
 *  @param[in]   None
 *  @retval      FSP_SUCCESS          start a capture.
 *  @retval      FSP_ERR_ASSERTION    Pointer to the control block is NULL.
 *  @retval      FSP_ERR_INVALID_MODE CRU module is not CAMERA_STATE_IN_PROGRESS
 ****************************************************************************************************************/
fsp_err_t cru_start (void)
{
    fsp_err_t err   = FSP_SUCCESS;

    err = g_cru_on_cru.captureStart(g_cru0.p_ctrl);
    if (FSP_SUCCESS != err)
    {
        //APP_ERR_PRINT("** R_CRU_CaptureStart API failed **\r\n");
        return err;
    }
    return err;
}

/*****************************************************************************************************************
 *  @brief       Get the address of a buffer with captured images that have not been read.
 *  @param[in]   buff
 *  @retval      FSP_SUCCESS          start a capture.
 *  @retval      FSP_ERR_NOT_FOUND    The requested item could not be found
 ****************************************************************************************************************/
fsp_err_t cru_get_buffer (uint8_t **buff)
{
    fsp_err_t err   = FSP_SUCCESS;

    if(cap_read_num != cap_write_num)
    {
        *buff = g_cru0.p_cfg->buffer_cfg.pp_buffer[cap_read_num];
        cap_read_num++;
        if(cap_read_num >= g_cru0.p_cfg->buffer_cfg.num_buffers)
        {
            cap_read_num = 0;
        }
    }
    else
    {
        *buff = NULL;
        err = FSP_ERR_NOT_FOUND;
    }
    return err;
}

/*****************************************************************************************************************
 *  @brief       Get the latest image buffer address captured by CRU.
 *  @param[in]   buff
 *  @retval      FSP_SUCCESS              stop a capture.
 *  @retval      FSP_ERR_ASSERTION        Pointer to the control block is NULL.
 *  @retval      FSP_ERR_INVALID_MODE     CRU module is not CAMERA_STATE_BUSY
 ****************************************************************************************************************/
fsp_err_t cru_get_status (uint8_t **buff)
{
    fsp_err_t err   = FSP_SUCCESS;

    err = g_cru_on_cru.statusGet(g_cru0.p_ctrl, &(g_cru0_status));
    if (FSP_SUCCESS != err)
    {
        //APP_ERR_PRINT("** R_CRU_StatusGet API failed **\r\n");
        return err;
    }
    *buff = (uint8_t *)g_cru0_status.p_buffer;

    return err;
}

/*******************************************************************************************************************//**
 * @} (end addtogroup r_cru_ep)
 **********************************************************************************************************************/
