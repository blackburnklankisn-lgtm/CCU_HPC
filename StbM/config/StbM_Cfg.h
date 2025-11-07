#ifndef STBM_CFG_H
#define STBM_CFG_H

/**
 * \file
 *
 * \brief AUTOSAR StbM
 *
 * This file contains the implementation of the AUTOSAR
 * module StbM.
 *
 * \version 5.0.0
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */
/** \addtogroup Synchronized Time Base Manager
 ** @{ */

/*==[Includes]================================================================*/

#include <StbM_Gen_Common.h>

/*==[Macros]==================================================================*/

#if (defined STBM_VERSION_INFO_API)
#error STBM_VERSION_INFO_API is already defined.
#endif
/** \brief Enables/Disables the StbM_GetVersionInfo API. */
#define STBM_VERSION_INFO_API                     STD_ON
/** \brief Definitions of symbolic names for all the synchronized (time base id < 16) and offset
 ** (time base id >= 16) time base identifiers */
#define StbMConf_StbMSynchronizedTimeBase_GlobalTime_Slave  0U
#define StbMConf_StbMSynchronizedTimeBase_PureLocalTime  32U

/** \brief Definitions of symbolic names for all the Notification Customers */
#define StbMConf_StbMNotificationCustomer_StbMNotificationCustomer_0  0U
#define StbMConf_StbMNotificationCustomer_StbMNotificationCustomer_1  1U
#define StbMConf_StbMNotificationCustomer_StbMNotificationCustomer_2  2U
#define StbMConf_StbMNotificationCustomer_StbMNotificationCustomer_3  3U
#define StbMConf_StbMNotificationCustomer_StbMNotificationCustomer_4  4U
#define StbMConf_StbMNotificationCustomer_StbMNotificationCustomer_5  5U
#define StbMConf_StbMNotificationCustomer_StbMNotificationCustomer_6  6U
#define StbMConf_StbMNotificationCustomer_StbMNotificationCustomer_7  7U
#define StbMConf_StbMNotificationCustomer_StbMNotificationCustomer_8  8U
#define StbMConf_StbMNotificationCustomer_StbMNotificationCustomer_9  9U
#define StbMConf_StbMNotificationCustomer_StbMNotificationCustomer_0  0U
#define StbMConf_StbMNotificationCustomer_StbMNotificationCustomer_1  1U
#define StbMConf_StbMNotificationCustomer_StbMNotificationCustomer_2  2U
#define StbMConf_StbMNotificationCustomer_StbMNotificationCustomer_3  3U
#define StbMConf_StbMNotificationCustomer_StbMNotificationCustomer_4  4U
#define StbMConf_StbMNotificationCustomer_StbMNotificationCustomer_5  5U
#define StbMConf_StbMNotificationCustomer_StbMNotificationCustomer_6  6U
#define StbMConf_StbMNotificationCustomer_StbMNotificationCustomer_7  7U
#define StbMConf_StbMNotificationCustomer_StbMNotificationCustomer_8  8U
#define StbMConf_StbMNotificationCustomer_StbMNotificationCustomer_9  9U

/*==[Types]===================================================================*/

/*==[Constants with external linkage]=========================================*/

/*==[Variables with external linkage]=========================================*/

/*==[Definition of functions with external linkage]===========================*/

/** @} doxygen end group definition */
/*==================[end of file]===========================================*/


#endif /* ifndef STBM_CFG_H */
