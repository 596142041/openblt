/************************************************************************************//**
* \file         Demo\ARMCM3_LM3S_EK_LM3S6965_GCC\Prog\net.h
* \brief        Network application for the uIP TCP/IP stack.
* \ingroup      Prog_ARMCM3_LM3S_EK_LM3S6965_GCC
* \internal
*----------------------------------------------------------------------------------------
*                          C O P Y R I G H T
*----------------------------------------------------------------------------------------
*   Copyright (c) 2014  by Feaser    http://www.feaser.com    All rights reserved
*
*----------------------------------------------------------------------------------------
*                            L I C E N S E
*----------------------------------------------------------------------------------------
* This file is part of OpenBLT. OpenBLT is free software: you can redistribute it and/or
* modify it under the terms of the GNU General Public License as published by the Free
* Software Foundation, either version 3 of the License, or (at your option) any later
* version.
*
* OpenBLT is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
* PURPOSE. See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along with OpenBLT.
* If not, see <http://www.gnu.org/licenses/>.
*
* A special exception to the GPL is included to allow you to distribute a combined work 
* that includes OpenBLT without being obliged to provide the source code for any 
* proprietary components. The exception text is included at the bottom of the license
* file <license.html>.
* 
* \endinternal
****************************************************************************************/
#ifndef NET_H
#define NET_H

/****************************************************************************************
* Macro definitions
****************************************************************************************/
#ifndef UIP_APPCALL
#define UIP_APPCALL NetApp
#endif /* UIP_APPCALL */


/****************************************************************************************
* Type definitions
****************************************************************************************/
/** \brief Define the uip_tcp_appstate_t datatype. This is the state of our tcp/ip
 *         application, and the memory required for this state is allocated together
 *         with each TCP connection. One application state for each TCP connection.
 */
typedef struct net_state 
{
  unsigned char unused;
} uip_tcp_appstate_t;


/****************************************************************************************
* Function prototypes
****************************************************************************************/
void     NetInit(void);
void     NetApp(void);
void     NetTask(void);


#endif /* NET_H */
/*********************************** end of net.h **************************************/