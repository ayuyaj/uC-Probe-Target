/*
*********************************************************************************************************
*                                       uC/Probe Communication
*
*                    Copyright 2007-2020 Silicon Laboratories Inc. www.silabs.com
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
*                                              uC/Probe
*
*                                      Communication: RS-232
*                                   Port for the Freescale CF52259
*
* Filename : probe_rs232c.h
* Version  : V2.30
*********************************************************************************************************
*/

#ifndef  __PROBE_RS232C_H__
#define  __PROBE_RS232C_H__


/*
*********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*/

void    ProbeRS232_RxTxISR       (void);                        /* Code to process Rx or Tx interrupts                  */


#endif
