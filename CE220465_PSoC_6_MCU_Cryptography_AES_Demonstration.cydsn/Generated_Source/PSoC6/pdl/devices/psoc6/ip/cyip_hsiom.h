/***************************************************************************//**
* \file cyip_hsiom.h
*
* \brief
* HSIOM IP definitions
*
* \note
* Generated 9/21/2017 by CyDeviceHeaderGenerator v1.2.0.101
* from the register map configuration rev#1007711
*
********************************************************************************
* \copyright
* Copyright 2016-2017, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#ifndef _CYIP_HSIOM_H_
#define _CYIP_HSIOM_H_

#include "cyip_headers.h"

/*******************************************************************************
*                                    HSIOM
*******************************************************************************/

#define HSIOM_PRT_SECTION_SIZE                  0x00000010UL
#define HSIOM_SECTION_SIZE                      0x00004000UL

/**
  * \brief HSIOM port registers (HSIOM_PRT)
  */
typedef struct {
  __IOM uint32_t PORT_SEL0;                     /*!< 0x00000000 Port selection 0 */
  __IOM uint32_t PORT_SEL1;                     /*!< 0x00000004 Port selection 1 */
   __IM uint32_t RESERVED[2];
} HSIOM_PRT_Type;                               /*!< Size = 16 (0x10) */

/**
  * \brief High Speed IO Matrix (HSIOM) (HSIOM)
  */
typedef struct {
        HSIOM_PRT_Type PRT[128];                /*!< 0x00000000 HSIOM port registers */
   __IM uint32_t RESERVED[1536];
  __IOM uint32_t AMUX_SPLIT_CTL[64];            /*!< 0x00002000 AMUX splitter cell control */
   __IM uint32_t RESERVED1[64];
  __IOM uint32_t MONITOR_CTL_0;                 /*!< 0x00002200 Power/Ground Monitor cell control 0 */
  __IOM uint32_t MONITOR_CTL_1;                 /*!< 0x00002204 Power/Ground Monitor cell control 1 */
  __IOM uint32_t MONITOR_CTL_2;                 /*!< 0x00002208 Power/Ground Monitor cell control 2 */
  __IOM uint32_t MONITOR_CTL_3;                 /*!< 0x0000220C Power/Ground Monitor cell control 3 */
   __IM uint32_t RESERVED2[12];
  __IOM uint32_t ALT_JTAG_EN;                   /*!< 0x00002240 Alternate JTAG IF selection register */
} HSIOM_Type;                                   /*!< Size = 8772 (0x2244) */


/* HSIOM_PRT.PORT_SEL0 */
#define HSIOM_PRT_PORT_SEL0_IO0_SEL_Pos         0UL
#define HSIOM_PRT_PORT_SEL0_IO0_SEL_Msk         0x1FUL
#define HSIOM_PRT_PORT_SEL0_IO1_SEL_Pos         8UL
#define HSIOM_PRT_PORT_SEL0_IO1_SEL_Msk         0x1F00UL
#define HSIOM_PRT_PORT_SEL0_IO2_SEL_Pos         16UL
#define HSIOM_PRT_PORT_SEL0_IO2_SEL_Msk         0x1F0000UL
#define HSIOM_PRT_PORT_SEL0_IO3_SEL_Pos         24UL
#define HSIOM_PRT_PORT_SEL0_IO3_SEL_Msk         0x1F000000UL
/* HSIOM_PRT.PORT_SEL1 */
#define HSIOM_PRT_PORT_SEL1_IO4_SEL_Pos         0UL
#define HSIOM_PRT_PORT_SEL1_IO4_SEL_Msk         0x1FUL
#define HSIOM_PRT_PORT_SEL1_IO5_SEL_Pos         8UL
#define HSIOM_PRT_PORT_SEL1_IO5_SEL_Msk         0x1F00UL
#define HSIOM_PRT_PORT_SEL1_IO6_SEL_Pos         16UL
#define HSIOM_PRT_PORT_SEL1_IO6_SEL_Msk         0x1F0000UL
#define HSIOM_PRT_PORT_SEL1_IO7_SEL_Pos         24UL
#define HSIOM_PRT_PORT_SEL1_IO7_SEL_Msk         0x1F000000UL


/* HSIOM.AMUX_SPLIT_CTL */
#define HSIOM_AMUX_SPLIT_CTL_SWITCH_AA_SL_Pos   0UL
#define HSIOM_AMUX_SPLIT_CTL_SWITCH_AA_SL_Msk   0x1UL
#define HSIOM_AMUX_SPLIT_CTL_SWITCH_AA_SR_Pos   1UL
#define HSIOM_AMUX_SPLIT_CTL_SWITCH_AA_SR_Msk   0x2UL
#define HSIOM_AMUX_SPLIT_CTL_SWITCH_AA_S0_Pos   2UL
#define HSIOM_AMUX_SPLIT_CTL_SWITCH_AA_S0_Msk   0x4UL
#define HSIOM_AMUX_SPLIT_CTL_SWITCH_BB_SL_Pos   4UL
#define HSIOM_AMUX_SPLIT_CTL_SWITCH_BB_SL_Msk   0x10UL
#define HSIOM_AMUX_SPLIT_CTL_SWITCH_BB_SR_Pos   5UL
#define HSIOM_AMUX_SPLIT_CTL_SWITCH_BB_SR_Msk   0x20UL
#define HSIOM_AMUX_SPLIT_CTL_SWITCH_BB_S0_Pos   6UL
#define HSIOM_AMUX_SPLIT_CTL_SWITCH_BB_S0_Msk   0x40UL
/* HSIOM.MONITOR_CTL_0 */
#define HSIOM_MONITOR_CTL_0_MONITOR_EN_Pos      0UL
#define HSIOM_MONITOR_CTL_0_MONITOR_EN_Msk      0xFFFFFFFFUL
/* HSIOM.MONITOR_CTL_1 */
#define HSIOM_MONITOR_CTL_1_MONITOR_EN_Pos      0UL
#define HSIOM_MONITOR_CTL_1_MONITOR_EN_Msk      0xFFFFFFFFUL
/* HSIOM.MONITOR_CTL_2 */
#define HSIOM_MONITOR_CTL_2_MONITOR_EN_Pos      0UL
#define HSIOM_MONITOR_CTL_2_MONITOR_EN_Msk      0xFFFFFFFFUL
/* HSIOM.MONITOR_CTL_3 */
#define HSIOM_MONITOR_CTL_3_MONITOR_EN_Pos      0UL
#define HSIOM_MONITOR_CTL_3_MONITOR_EN_Msk      0xFFFFFFFFUL
/* HSIOM.ALT_JTAG_EN */
#define HSIOM_ALT_JTAG_EN_ENABLE_Pos            31UL
#define HSIOM_ALT_JTAG_EN_ENABLE_Msk            0x80000000UL


#endif /* _CYIP_HSIOM_H_ */


/* [] END OF FILE */
