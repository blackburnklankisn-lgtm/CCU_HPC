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
#ifndef STBM_EXTERNALS_H
#define STBM_EXTERNALS_H

/** \addtogroup Synchronized Time Base Manager
 ** @{ */
 
/*==[Includes]================================================================*/



#include <StbM_Int_Cfg.h>
#include <TSAutosar.h>

/*==[Macros]==================================================================*/

/*==[Types]===================================================================*/

/*==[Declaration of functions with internal linkage]==========================*/

/*==[Constants with internal linkage]=========================================*/

/*==[Variables with internal linkage]=========================================*/

/*==[Constants with external linkage]=========================================*/

/*==[Variables with external linkage]=========================================*/

/*==[Definition of functions with external linkage]===========================*/



#define STBM_START_SEC_CODE
#include <StbM_MemMap.h>

/* GlobalTime_Slave */

  extern Std_ReturnType StbM_StatusNotificationCallbackGlobalTime_SlaveGlobalTime_Slave(uint32 eventNotification);



  /* Customer Notification Callback not needed for StbMNotificationCustomer_0 time base */
  /* Customer Notification Callback not needed for StbMNotificationCustomer_1 time base */
  /* Customer Notification Callback not needed for StbMNotificationCustomer_2 time base */
  /* Customer Notification Callback not needed for StbMNotificationCustomer_3 time base */
  /* Customer Notification Callback not needed for StbMNotificationCustomer_4 time base */
  /* Customer Notification Callback not needed for StbMNotificationCustomer_5 time base */
  /* Customer Notification Callback not needed for StbMNotificationCustomer_6 time base */
  /* Customer Notification Callback not needed for StbMNotificationCustomer_7 time base */
  /* Customer Notification Callback not needed for StbMNotificationCustomer_8 time base */
  /* Customer Notification Callback not needed for StbMNotificationCustomer_9 time base */
/* PureLocalTime */

  extern Std_ReturnType StbM_StatusNotificationCallbackPureLocalTimePureLocalTime(uint32 eventNotification);



  /* Customer Notification Callback not needed for StbMNotificationCustomer_0 time base */
  /* Customer Notification Callback not needed for StbMNotificationCustomer_1 time base */
  /* Customer Notification Callback not needed for StbMNotificationCustomer_2 time base */
  /* Customer Notification Callback not needed for StbMNotificationCustomer_3 time base */
  /* Customer Notification Callback not needed for StbMNotificationCustomer_4 time base */
  /* Customer Notification Callback not needed for StbMNotificationCustomer_5 time base */
  /* Customer Notification Callback not needed for StbMNotificationCustomer_6 time base */
  /* Customer Notification Callback not needed for StbMNotificationCustomer_7 time base */
  /* Customer Notification Callback not needed for StbMNotificationCustomer_8 time base */
  /* Customer Notification Callback not needed for StbMNotificationCustomer_9 time base */

#define STBM_STOP_SEC_CODE
#include <StbM_MemMap.h>


/*==[Definition of functions with internal linkage]===========================*/

/** @} doxygen end group definition */

#endif /* ifndef STBM_EXTERNALS_H */
/*==================[end of file]===========================================*/

