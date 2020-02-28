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
*                                      NETWORK ICMP GENERIC LAYER
*                                 (INTERNET CONTROL MESSAGE PROTOCOL)
*
* Filename : net_icmp.h
* Version  : V3.06.00
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*********************************************************************************************************
*                                               MODULE
*********************************************************************************************************
*********************************************************************************************************
*/

#ifndef  NET_ICMP_MODULE_PRESENT
#define  NET_ICMP_MODULE_PRESENT


/*
*********************************************************************************************************
*********************************************************************************************************
*                                            INCLUDE FILES
*********************************************************************************************************
*********************************************************************************************************
*/

#include  "net_cfg_net.h"
#include  "net_err.h"
#include  "net_ip.h"


/*
*********************************************************************************************************
*********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                     EXTERNAL C LANGUAGE LINKAGE
*
* Note(s) : (1) C++ compilers MUST 'extern'ally declare ALL C function prototypes & variable/object
*               declarations for correct C language linkage.
*********************************************************************************************************
*/

#ifdef  __cplusplus
extern "C" {
#endif

/*
*********************************************************************************************************
*                                             PUBLIC API
*********************************************************************************************************
*/

CPU_BOOLEAN  NetICMP_TxEchoReq(CPU_INT08U       *p_addr_dest,
                               NET_IP_ADDR_LEN   addr_len,
                               CPU_INT32U        timeout_ms,
                               void             *p_data,
                               CPU_INT16U        data_len,
                               NET_ERR          *p_err);


/*
*********************************************************************************************************
*                                         INTERNAL FUNCTIONS
*********************************************************************************************************
*/


void  NetICMP_Init       (NET_ERR  *p_err);

void  NetICMP_LockAcquire(NET_ERR  *p_err);

void  NetICMP_LockRelease(void);

void  NetICMP_RxEchoReply(CPU_INT16U   id,
                          CPU_INT16U   seq,
                          CPU_INT08U  *p_data,
                          CPU_INT16U   data_len,
                          NET_ERR     *p_err);

/*
*********************************************************************************************************
*                                   EXTERNAL C LANGUAGE LINKAGE END
*********************************************************************************************************
*/

#ifdef  __cplusplus
}
#endif

#endif  /* NET_ICMP_MODULE_PRESENT */
