
/*******************************************************************
*
* CAUTION: This file is automatically generated by HSI.
* Version:
* DO NOT EDIT.
*
* Copyright (C) 2010-2016 Xilinx, Inc. All Rights Reserved.*
*Permission is hereby granted, free of charge, to any person obtaining a copy
*of this software and associated documentation files (the Software), to deal
*in the Software without restriction, including without limitation the rights
*to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*copies of the Software, and to permit persons to whom the Software is
*furnished to do so, subject to the following conditions:
*
*The above copyright notice and this permission notice shall be included in
*all copies or substantial portions of the Software.
*
* Use of the Software is limited solely to applications:
*(a) running on a Xilinx device, or
*(b) that interact with a Xilinx device through a bus or interconnect.
*
*THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
*XILINX BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
*WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT
*OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*
*Except as contained in this notice, the name of the Xilinx shall not be used
*in advertising or otherwise to promote the sale, use or other dealings in
*this Software without prior written authorization from Xilinx.
*

*
* Description: Driver configuration
*
*******************************************************************/

#include "xparameters.h"
#include "xv_hdmitxss.h"

/*
* List of Sub-cores included in the subsystem
* Sub-core device id will be set by its driver in xparameters.h
* Excluded sub-core device id is set to 255
* Excluded sub-core baseaddr is set to 0xFFFFFFFF
*/

#ifndef XPAR_V_HDMI_TX_SS_0_AXI_TIMER_DEVICE_ID
#define XPAR_V_HDMI_TX_SS_0_AXI_TIMER_PRESENT 0
#define XPAR_V_HDMI_TX_SS_0_AXI_TIMER_DEVICE_ID 255
#define XPAR_V_HDMI_TX_SS_0_AXI_TIMER_BASEADDR 0xFFFFFFFF
#endif

#ifndef XPAR_V_HDMI_TX_SS_0_HDCP_1_4_DEVICE_ID
#define XPAR_V_HDMI_TX_SS_0_HDCP_1_4_PRESENT 0
#define XPAR_V_HDMI_TX_SS_0_HDCP_1_4_DEVICE_ID 255
#define XPAR_V_HDMI_TX_SS_0_HDCP_1_4_BASEADDR 0xFFFFFFFF
#endif

#ifndef XPAR_V_HDMI_TX_SS_0_HDCP22_TX_SS_DEVICE_ID
#define XPAR_V_HDMI_TX_SS_0_HDCP22_PRESENT 0
#define XPAR_V_HDMI_TX_SS_0_HDCP22_DEVICE_ID 255
#define XPAR_V_HDMI_TX_SS_0_HDCP22_BASEADDR 0xFFFFFFFF
#endif

#ifndef XPAR_V_HDMI_TX_SS_0_V_HDMI_TX_DEVICE_ID
#define XPAR_V_HDMI_TX_SS_0_V_HDMI_TX_PRESENT    0
#define XPAR_V_HDMI_TX_SS_0_V_HDMI_TX_DEVICE_ID  255
#define XPAR_V_HDMI_TX_SS_0_V_HDMI_TX_BASEADDR   0xFFFFFFFF
#endif

#ifndef XPAR_V_HDMI_TX_SS_0_V_TC_DEVICE_ID
#define XPAR_V_HDMI_TX_SS_0_V_TC_PRESENT    0
#define XPAR_V_HDMI_TX_SS_0_V_TC_DEVICE_ID  255
#define XPAR_V_HDMI_TX_SS_0_V_TC_BASEADDR   0xFFFFFFFF
#endif

#ifndef XPAR_V_HDMI_TX_SS_0_AXI_GPIO_DEVICE_ID
#define XPAR_V_HDMI_TX_SS_0_AXI_GPIO_PRESENT    0
#define XPAR_V_HDMI_TX_SS_0_AXI_GPIO_DEVICE_ID  255
#define XPAR_V_HDMI_TX_SS_0_AXI_GPIO_BASEADDR   0xFFFFFFFF
#endif

#ifndef XPAR_V_HDMI_TX_SS_0_V_AXI4S_REMAP_DEVICE_ID
#define XPAR_V_HDMI_TX_SS_0_V_AXI4S_REMAP_PRESENT    0
#define XPAR_V_HDMI_TX_SS_0_V_AXI4S_REMAP_DEVICE_ID  255
#define XPAR_V_HDMI_TX_SS_0_V_AXI4S_REMAP_S_AXI_CTRL_BASEADDR   0xFFFFFFFF
#endif

XV_HdmiTxSs_Config XV_HdmiTxSs_ConfigTable[] =
{
    {
        XPAR_V_HDMI_TX_SS_0_DEVICE_ID,
        XPAR_V_HDMI_TX_SS_0_BASEADDR,
        XPAR_V_HDMI_TX_SS_0_HIGHADDR,
        XPAR_V_HDMI_TX_SS_0_INPUT_PIXELS_PER_CLOCK,
        XPAR_V_HDMI_TX_SS_0_MAX_BITS_PER_COMPONENT,

        {
            XPAR_V_HDMI_TX_SS_0_AXI_TIMER_0_PRESENT,
            XPAR_V_HDMI_TX_SS_0_AXI_TIMER_0_DEVICE_ID,
            XPAR_V_HDMI_TX_SS_0_AXI_TIMER_0_BASEADDR
        },
        {
            XPAR_V_HDMI_TX_SS_0_HDCP14_PRESENT,
            XPAR_V_HDMI_TX_SS_0_HDCP14_DEVICE_ID,
            XPAR_V_HDMI_TX_SS_0_HDCP14_BASEADDR
        },
        {
            XPAR_V_HDMI_TX_SS_0_HDCP22_PRESENT,
            XPAR_V_HDMI_TX_SS_0_HDCP22_DEVICE_ID,
            XPAR_V_HDMI_TX_SS_0_HDCP22_BASEADDR
        },
        {
            XPAR_V_HDMI_TX_SS_0_V_HDMI_TX_PRESENT,
            XPAR_V_HDMI_TX_SS_0_V_HDMI_TX_DEVICE_ID,
            XPAR_V_HDMI_TX_SS_0_V_HDMI_TX_BASEADDR
        },
        {
            XPAR_V_HDMI_TX_SS_0_V_TC_PRESENT,
            XPAR_V_HDMI_TX_SS_0_V_TC_DEVICE_ID,
            XPAR_V_HDMI_TX_SS_0_V_TC_BASEADDR
        },
        {
            XPAR_V_HDMI_TX_SS_0_AXI_GPIO_PRESENT,
            XPAR_V_HDMI_TX_SS_0_AXI_GPIO_DEVICE_ID,
            XPAR_V_HDMI_TX_SS_0_AXI_GPIO_BASEADDR
        },
        {
            XPAR_V_HDMI_TX_SS_0_V_AXI4S_REMAP_PRESENT,
            XPAR_V_HDMI_TX_SS_0_V_AXI4S_REMAP_DEVICE_ID,
            XPAR_V_HDMI_TX_SS_0_V_AXI4S_REMAP_S_AXI_CTRL_BASEADDR
        },
    }
};
