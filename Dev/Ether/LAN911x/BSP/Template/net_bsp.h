/*
*********************************************************************************************************
*                                              uC/TCP-IP
*                                      The Embedded TCP/IP Suite
*
*                    Copyright 2004-2020 Silicon Laboratories Inc. www.silabs.com
*
*                                 SPDX-License-Identifier: APACHE-2.0
*
*               This software is subject to an open source license and is distributed by
*                Silicon Laboratories Inc. pursuant to the terms of the Apache License,
*                    Version 2.0 available at www.apache.org/licenses/LICENSE-2.0.
*
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                            NETWORK BOARD SUPPORT PACKAGE (BSP) FUNCTIONS
*
*                                               LAN911x
*
* Filename : net_bsp.h
* Version  : V3.06.00
*********************************************************************************************************
* Note(s)  : (1) To provide the required Board Support Package functionality, insert the appropriate
*                board-specific code to perform the stated actions wherever '$$$$' comments are found.
*
*                #### This note MAY be entirely removed for specific board support packages.
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                               EXTERNS
*********************************************************************************************************
*/

#ifdef   NET_BSP_MODULE
#define  NET_BSP_EXT
#else
#define  NET_BSP_EXT  extern
#endif


/*
*********************************************************************************************************
*                                               DEFINES
*********************************************************************************************************
*/

#define  NET_BSP_ISR_TYPE_UNKNOWN       0
#define  NET_BSP_ISR_TYPE_RX            1                       /* BSP specific ISR type codes for the generic ISR ...  */
#define  NET_BSP_ISR_TYPE_TX            2                       /* ... handler located in the hardware driver           */


/*
*********************************************************************************************************
*                                             DATA TYPES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                          GLOBAL VARIABLES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                        CONFIGURATION ERRORS
*********************************************************************************************************
*/

