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

/* tasking Deviation List
 *
 * TASKING-1) Deviated Rule: W585
 * W585: division by zero
 *
 * Reason:
 * STBM_GPT_CONV_TICKS_TO_NS macro expands into 
 * #define STBM_GPT_CONV_TICKS_TO_NS(x, f)       (f <= 1000000000U)?(x*(1000000000U/f)):(x/(f/1000000000U))
 * where f is equal to the following expression
 * num:i(floor((node:value(./StbMLocalTimeClock/StbMClockFrequency)) div (node:value(./StbMLocalTimeClock/StbMClockPrescaler))))
 * Situation 1: when (f <= 1000000000U) and (x*(1000000000U/f)) is reached
 * f, can never be 0, because StbMClockFrequency and StbMClockPrescaler cannot be configured to 0 and the type of StbMClockFrequency and StbMClockPrescaler is integer,
 * which means that even if the worst case happens and their values are close or even more than that, equal,
 * the div operation will be evaluated to at least 1 and no division by 0 will happen.
 * Situation 2: when (f > 1000000000U) and (x/(f/1000000000U)) is reached
 * f, can never be smaller or equal with 1000000000U (check condition (f <= 1000000000U)),
 * which means that when evaluating (x/(f/1000000000U)), no division by 0 will happen.
 */




/** \addtogroup Synchronized Time Base Manager
 ** @{ */

/*==[Includes]================================================================*/

#include <StbM_Version.h>

/* to prevent duplicate declarations of symbols from Rte_StbM.h by our public headers */
#if (defined STBM_INTERNAL_USAGE)
#error STBM_INTERNAL_USAGE already defined
#endif
#define STBM_INTERNAL_USAGE
#include <StbM_Int_Cfg.h>



/* include Rte header for the RTE calls. */
/* !LINKSTO StbM.dsn.RteInclusion,1 */
#include <Rte_StbM_EcucPartition_M7.h>


/* include StbM_Externals.h header file, which contains the prototypes of all needed callbacks */
/* !LINKSTO StbM.EB.SyncTimeRecording.Used.StbM_Externals.HeaderFile.Included,1 */
/* !LINKSTO StbM.EB.OffsetTimeRecording.Used.StbM_Externals.HeaderFile.Included,1 */
/* !LINKSTO StbM.EB.StbMNotificationInterface.CALLBACK.StbM_Externals.HeaderFile.Included,1 */
/* !LINKSTO StbM.EB.StbMNotificationInterface.CALLBACK_AND_SR_INTERFACE.StbM_Externals.HeaderFile.Included,1 */
/* !LINKSTO StbM.EB.StbMNotificationCustomer.StbM_Externals.HeaderFile.Included,1 */
#include <StbM_Externals.h>




/*==[Macros]==================================================================*/

/*==[Types]===================================================================*/

/*==[Declaration of functions with internal linkage]==========================*/

/*==[Constants with internal linkage]=========================================*/

/*==[Variables with internal linkage]=========================================*/

/*==[Constants with external linkage]=========================================*/

/* !LINKSTO StbM.dsn.PrecompileTimeConfig,1 */

#define STBM_START_SEC_CONFIG_DATA_8
#include <StbM_MemMap.h>


/* Index of internal setter function */
STATIC CONST(uint8, STBM_APPL_CONST) StbM_TimeSetterIndexList_Internal[1] =
{
  2U
};

#define STBM_STOP_SEC_CONFIG_DATA_8
#include <StbM_MemMap.h>

#define STBM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include <StbM_MemMap.h>




/** Notification of customers configuration */
CONST(StbM_CustomerNotificationCfgType, STBM_APPL_CONST) StbM_CustomerNotificationCfg[STBM_NUMBER_OF_NOTIFICATION_CUSTOMERS] =
{
  /* GlobalTime_Slave */
  { /* StbMNotificationCustomer_0 */
        0U,  /* time base Id */
        0U,  /* customer Id */
        &Rte_Call_GlobalTime_TimeEvent_GlobalTime_Slave_StbMNotificationCustomer_0_NotifyTime,  /* customerNotificationRteCbkFctPtr */
  },
  { /* StbMNotificationCustomer_1 */
        0U,  /* time base Id */
        1U,  /* customer Id */
        &Rte_Call_GlobalTime_TimeEvent_GlobalTime_Slave_StbMNotificationCustomer_1_NotifyTime,  /* customerNotificationRteCbkFctPtr */
  },
  { /* StbMNotificationCustomer_2 */
        0U,  /* time base Id */
        2U,  /* customer Id */
        &Rte_Call_GlobalTime_TimeEvent_GlobalTime_Slave_StbMNotificationCustomer_2_NotifyTime,  /* customerNotificationRteCbkFctPtr */
  },
  { /* StbMNotificationCustomer_3 */
        0U,  /* time base Id */
        3U,  /* customer Id */
        &Rte_Call_GlobalTime_TimeEvent_GlobalTime_Slave_StbMNotificationCustomer_3_NotifyTime,  /* customerNotificationRteCbkFctPtr */
  },
  { /* StbMNotificationCustomer_4 */
        0U,  /* time base Id */
        4U,  /* customer Id */
        &Rte_Call_GlobalTime_TimeEvent_GlobalTime_Slave_StbMNotificationCustomer_4_NotifyTime,  /* customerNotificationRteCbkFctPtr */
  },
  { /* StbMNotificationCustomer_5 */
        0U,  /* time base Id */
        5U,  /* customer Id */
        &Rte_Call_GlobalTime_TimeEvent_GlobalTime_Slave_StbMNotificationCustomer_5_NotifyTime,  /* customerNotificationRteCbkFctPtr */
  },
  { /* StbMNotificationCustomer_6 */
        0U,  /* time base Id */
        6U,  /* customer Id */
        &Rte_Call_GlobalTime_TimeEvent_GlobalTime_Slave_StbMNotificationCustomer_6_NotifyTime,  /* customerNotificationRteCbkFctPtr */
  },
  { /* StbMNotificationCustomer_7 */
        0U,  /* time base Id */
        7U,  /* customer Id */
        &Rte_Call_GlobalTime_TimeEvent_GlobalTime_Slave_StbMNotificationCustomer_7_NotifyTime,  /* customerNotificationRteCbkFctPtr */
  },
  { /* StbMNotificationCustomer_8 */
        0U,  /* time base Id */
        8U,  /* customer Id */
        &Rte_Call_GlobalTime_TimeEvent_GlobalTime_Slave_StbMNotificationCustomer_8_NotifyTime,  /* customerNotificationRteCbkFctPtr */
  },
  { /* StbMNotificationCustomer_9 */
        0U,  /* time base Id */
        9U,  /* customer Id */
        &Rte_Call_GlobalTime_TimeEvent_GlobalTime_Slave_StbMNotificationCustomer_9_NotifyTime,  /* customerNotificationRteCbkFctPtr */
  },
  /* PureLocalTime */
  { /* StbMNotificationCustomer_0 */
        32U,  /* time base Id */
        0U,  /* customer Id */
        &Rte_Call_GlobalTime_TimeEvent_PureLocalTime_StbMNotificationCustomer_0_NotifyTime,  /* customerNotificationRteCbkFctPtr */
  },
  { /* StbMNotificationCustomer_1 */
        32U,  /* time base Id */
        1U,  /* customer Id */
        &Rte_Call_GlobalTime_TimeEvent_PureLocalTime_StbMNotificationCustomer_1_NotifyTime,  /* customerNotificationRteCbkFctPtr */
  },
  { /* StbMNotificationCustomer_2 */
        32U,  /* time base Id */
        2U,  /* customer Id */
        &Rte_Call_GlobalTime_TimeEvent_PureLocalTime_StbMNotificationCustomer_2_NotifyTime,  /* customerNotificationRteCbkFctPtr */
  },
  { /* StbMNotificationCustomer_3 */
        32U,  /* time base Id */
        3U,  /* customer Id */
        &Rte_Call_GlobalTime_TimeEvent_PureLocalTime_StbMNotificationCustomer_3_NotifyTime,  /* customerNotificationRteCbkFctPtr */
  },
  { /* StbMNotificationCustomer_4 */
        32U,  /* time base Id */
        4U,  /* customer Id */
        &Rte_Call_GlobalTime_TimeEvent_PureLocalTime_StbMNotificationCustomer_4_NotifyTime,  /* customerNotificationRteCbkFctPtr */
  },
  { /* StbMNotificationCustomer_5 */
        32U,  /* time base Id */
        5U,  /* customer Id */
        &Rte_Call_GlobalTime_TimeEvent_PureLocalTime_StbMNotificationCustomer_5_NotifyTime,  /* customerNotificationRteCbkFctPtr */
  },
  { /* StbMNotificationCustomer_6 */
        32U,  /* time base Id */
        6U,  /* customer Id */
        &Rte_Call_GlobalTime_TimeEvent_PureLocalTime_StbMNotificationCustomer_6_NotifyTime,  /* customerNotificationRteCbkFctPtr */
  },
  { /* StbMNotificationCustomer_7 */
        32U,  /* time base Id */
        7U,  /* customer Id */
        &Rte_Call_GlobalTime_TimeEvent_PureLocalTime_StbMNotificationCustomer_7_NotifyTime,  /* customerNotificationRteCbkFctPtr */
  },
  { /* StbMNotificationCustomer_8 */
        32U,  /* time base Id */
        8U,  /* customer Id */
        &Rte_Call_GlobalTime_TimeEvent_PureLocalTime_StbMNotificationCustomer_8_NotifyTime,  /* customerNotificationRteCbkFctPtr */
  },
  { /* StbMNotificationCustomer_9 */
        32U,  /* time base Id */
        9U,  /* customer Id */
        &Rte_Call_GlobalTime_TimeEvent_PureLocalTime_StbMNotificationCustomer_9_NotifyTime,  /* customerNotificationRteCbkFctPtr */
  },
};



/* Synchronized time base(s) configuration */
CONST(StbM_SyncTimeBaseCfgType, STBM_APPL_CONST) StbM_SyncTimeBaseCfg[STBM_NUMBER_OF_SYNC_TIMEBASES + STBM_NUMBER_OF_OFFSET_TIMEBASES + STBM_NUMBER_OF_PURE_TIMEBASES] =
{
  { /* GlobalTime_Slave */
    &StbM_GetCurrentVirtualLocalTime_Using_OSGetTimeStamp,  /* virtualLocalTimeGetterFctPtr */
  
    &StbM_GetCurrentTimeInternal,  /* timeGetterFctPtr */
    &StbM_TimeSetterIndexList_Internal[0],  /* timeSetterIndexPtr */
    1U, /* numberOfTimeSetter */
    STBM_TIME_BASE_USES_OS, /* timeBaseLocalTimeIdx */
  
   /* !LINKSTO StbM.dsn.Roles,1 */
    STBM_ROLE_GATEWAY,  /* role */
  
        STBM_TIMEBASE_LINKED_TO_ETHTSYN_TIMEDOMAIN, /* isTimeBaseLinkedToEthTSynTimeDomain */
  },
  { /* PureLocalTime */
    &StbM_GetCurrentVirtualLocalTime_Using_OSGetTimeStamp,  /* virtualLocalTimeGetterFctPtr */
  
    &StbM_GetCurrentTimeInternal,  /* timeGetterFctPtr */
    &StbM_TimeSetterIndexList_Internal[0],  /* timeSetterIndexPtr */
    1U, /* numberOfTimeSetter */
    STBM_TIME_BASE_USES_OS, /* timeBaseLocalTimeIdx */
  
    STBM_ROLE_MASTER,  /* only master role is supported */
  
        STBM_TIMEBASE_NOT_LINKED_TO_ETHTSYN_TIMEDOMAIN,  /* isTimeBaseLinkedToEthTSynTimeDomain */
  },
};










#if (STBM_COMMON_FEATURES_ENABLED)

#if (STBM_TIME_VALIDATION_SUPPORT == STD_ON)
/* variables for start and stop indexes, for StbM time bases linked to a CANTSYN Master time domain */
/* variables for start and stop indexes, for StbM time bases linked to a FRTSYN Master time domain */
/* variables for start and stop indexes, for StbM time bases linked to a ETHTSYN Master time domain */
/* variables for start and stop indexes, for StbM time bases linked to a ETHTSYN Pdelay Responder time domain */

/* variables for start and stop indexes, for StbM time bases linked to a CANTSYN Slave time domain */
/* variables for start and stop indexes, for StbM time bases linked to a FRTSYN Slave time domain */
/* variables for start and stop indexes, for StbM time bases linked to a ETHTSYN Slave time domain */
/* variables for start and stop indexes, for StbM time bases linked to a ETHTSYN Pdelay Initiator time domain */
#endif /* (STBM_TIME_VALIDATION_SUPPORT == STD_ON) */

/* Common time base(s) configuration */
CONST(StbM_CommonTimeBaseCfgType, STBM_APPL_CONST) StbM_CommonTimeBaseCfg[STBM_NUMBER_OF_SYNC_TIMEBASES  + STBM_NUMBER_OF_OFFSET_TIMEBASES + STBM_NUMBER_OF_PURE_TIMEBASES] =
{
  { /* GlobalTime_Slave */
#if (STBM_TIMEOUTS_USED == STD_ON)
    63U,  /* timeoutValue */
#endif /* STBM_TIMEOUTS_USED == STD_ON */
#if (STBM_TIME_BASES_THAT_SHARE_DATA_USED == STD_ON)
#if (STBM_SHARED_DATA_VERSION == STBM_SHARED_DATA_V2)
#if (STBM_SHAREDDATA_CONSUMER_TIMEBASES_USED == STD_ON)
    0U,  /* sharedDataTimeoutValue */
#endif /* (STBM_SHAREDDATA_CONSUMER_TIMEBASES_USED == STD_ON) */
#endif /* (STBM_SHARED_DATA_VERSION == STBM_SHARED_DATA_V2) */
#endif /* (STBM_TIME_BASES_THAT_SHARE_DATA_USED == STD_ON) */
#if (STBM_STATUS_NOTIFICATIONS_USED == STD_ON)
  /* !LINKSTO StbM.SWS_StbM_00279,1 */
  /* !LINKSTO StbM.ECUC_StbM_00045_Conf,1 */
    2047U,  /* statusNotificationMask */
#endif /* STBM_STATUS_NOTIFICATIONS_USED == STD_ON */

#if ((STBM_OFFSET_TIME_RECORDING_USED == STD_ON) || (STBM_SYNC_TIME_RECORDING_USED == STD_ON))
    0U, /* startIndexTrBlocks */
#endif /* ((STBM_OFFSET_TIME_RECORDING_USED == STD_ON) || (STBM_SYNC_TIME_RECORDING_USED == STD_ON)) */
#if (STBM_TIME_VALIDATION_SUPPORT == STD_ON)
    0U, /* startIndexTrBlocksTimeValidationMASTERPart */
    0U, /* startIndexTrBlocksTimeValidationMASTERPdelayPart */
    0U, /* startIndexTrBlocksTimeValidationSLAVEPart */
    0U, /* startIndexTrBlocksTimeValidationSLAVEPdelayPart */
#endif /* (STBM_TIME_VALIDATION_SUPPORT == STD_ON) */
#if (STBM_TIMELEAP_DETECTION_USED == STD_ON)
    0U,  /* timeleapFutureValueNs */
    180U,  /* timeleapFutureValueSec */
    10000000U,  /* timeleapPastValueNs */
    0U,  /* timeleapPastValueSec */
    2U,  /* clearTimeleapCount */
#endif /* STBM_TIMELEAP_DETECTION_USED == STD_ON */
#if (STBM_OFFSET_CORRECTION_USED == STD_ON)
    0U, /* offsetCorrectionAdaptIntervalNs */
    0U, /* offsetCorrectionAdaptIntervalSec */
    0U, /* offsetCorrectionAdaptIntervalNsLo */
    0U, /* offsetCorrectionAdaptIntervalNsHi */
    0U, /* offsetCorrectionJumpThresholdNs */
    0U, /* offsetCorrectionJumpThresholdSec */
#endif /* STBM_OFFSET_CORRECTION_USED == STD_ON */
#if (STBM_SLAVE_RATE_CORRECTION_USED == STD_ON)
    0U, /* rateCorrectionInterval - nanoseconds part */
    0U, /* rateCorrectionInterval - seconds part */
    0U, /* doubleTheRateCorrectionInterval - nanoseconds part */
    0U, /* doubleTheRateCorrectionInterval - seconds part */
#endif /* STBM_SLAVE_RATE_CORRECTION_USED == STD_ON */
#if ((STBM_OFFSET_TIME_RECORDING_USED == STD_ON) || (STBM_SYNC_TIME_RECORDING_USED == STD_ON))
  /* !LINKSTO StbM.SWS_StbM_00382,1 */
  /* !LINKSTO StbM.SWS_StbM_00383,1 */

    0U, /* numberOfBlocks */
#endif /* ((STBM_OFFSET_TIME_RECORDING_USED == STD_ON) || (STBM_SYNC_TIME_RECORDING_USED == STD_ON)) */
#if (STBM_TIME_VALIDATION_SUPPORT == STD_ON)
/* !LINKSTO StbM.SWS_StbM_00470.Master.ValidationRecordTable,1 */
/* !LINKSTO StbM.SWS_StbM_00470.Slave.ValidationRecordTable,1 */
/* !LINKSTO StbM.SWS_StbM_00470.PdelayResponder.ValidationRecordTable,1 */
/* !LINKSTO StbM.SWS_StbM_00470.PdelayInitiator.ValidationRecordTable,1 */
    0U, /* numberOfBlocksTimeValidation */
#endif /* (STBM_TIME_VALIDATION_SUPPORT == STD_ON) */
#if (STBM_NVM_USED == STD_ON)
    0U, /* NVRAM Block Id */
#endif /* (STBM_NVM_USED == STD_ON) */
#if (STBM_MASTER_RATE_CORRECTION_USED == STD_ON)
    STBM_RATE_DEVIATION_INVALID_VALUE, /* masterRateDeviationMax */
    STBM_INVALID_INDEX, /* masterRcArrayIndex */
#endif /* STBM_MASTER_RATE_CORRECTION_USED == STD_ON */
#if (STBM_SLAVE_RATE_CORRECTION_USED == STD_ON)
    0U, /* startIndexRcIntervals */
    0U, /* stopIndexRcIntervals */
    0U, /* intervalArrayIndex */
#endif /* STBM_SLAVE_RATE_CORRECTION_USED == STD_ON */
#if ((STBM_MASTER_RATE_CORRECTION_USED == STD_ON) || (STBM_GET_MASTERCONFIG_SUPPORTED == STD_ON))
      STBM_SYSTEM_WIDE_MASTER_DISABLED, /* systemWideMaster */
#endif /* ((STBM_MASTER_RATE_CORRECTION_USED == STD_ON) || (STBM_GET_MASTERCONFIG_SUPPORTED == STD_ON)) */

#if (STBM_TIME_BASES_THAT_SHARE_DATA_USED == STD_ON)
  
    STBM_TIME_BASE_DOES_NOT_USE_SHARED_DATA, /* timeBaseSharesDataIdx */

#if (STBM_SHARED_DATA_VERSION == STBM_SHARED_DATA_V2)
    STBM_TIME_BASE_NO_SHARED_DATA, /* timeBaseRoleSharedData */
#endif /* (STBM_SHARED_DATA_VERSION == STBM_SHARED_DATA_V2) */

#endif /* STBM_TIME_BASES_THAT_SHARE_DATA_USED == STD_ON */

#if (STBM_NOTIFICATION_OF_CUSTOMERS_USED == STD_ON)
     10U, /* number of customer notifications */
#endif /* (STBM_NOTIFICATION_OF_CUSTOMERS_USED == STD_ON) */

  },
  { /* PureLocalTime */
#if (STBM_TIMEOUTS_USED == STD_ON)
    0U,  /* timeoutValue */
#endif /* STBM_TIMEOUTS_USED == STD_ON */
#if (STBM_TIME_BASES_THAT_SHARE_DATA_USED == STD_ON)
#if (STBM_SHARED_DATA_VERSION == STBM_SHARED_DATA_V2)
#if (STBM_SHAREDDATA_CONSUMER_TIMEBASES_USED == STD_ON)
    0U,  /* sharedDataTimeoutValue */
#endif /* (STBM_SHAREDDATA_CONSUMER_TIMEBASES_USED == STD_ON) */
#endif /* (STBM_SHARED_DATA_VERSION == STBM_SHARED_DATA_V2) */
#endif /* (STBM_TIME_BASES_THAT_SHARE_DATA_USED == STD_ON) */
#if (STBM_STATUS_NOTIFICATIONS_USED == STD_ON)
  /* !LINKSTO StbM.SWS_StbM_00279,1 */
  /* !LINKSTO StbM.ECUC_StbM_00045_Conf,1 */
    0U,  /* statusNotificationMask */
#endif /* STBM_STATUS_NOTIFICATIONS_USED == STD_ON */

#if ((STBM_OFFSET_TIME_RECORDING_USED == STD_ON) || (STBM_SYNC_TIME_RECORDING_USED == STD_ON))

    0U, /* startIndexTrBlocks */
#endif /* ((STBM_OFFSET_TIME_RECORDING_USED == STD_ON) || (STBM_SYNC_TIME_RECORDING_USED == STD_ON)) */
#if (STBM_TIME_VALIDATION_SUPPORT == STD_ON)
    0U, /* startIndexTrBlocksTimeValidationMASTERPart */
    0U, /* startIndexTrBlocksTimeValidationMASTERPdelayPart */
    0U, /* startIndexTrBlocksTimeValidationSLAVEPart */
    0U, /* startIndexTrBlocksTimeValidationSLAVEPdelayPart */
#endif /* (STBM_TIME_VALIDATION_SUPPORT == STD_ON) */
#if (STBM_TIMELEAP_DETECTION_USED == STD_ON)
    0U,  /* timeleapFutureValueNs */
    0U,  /* timeleapFutureValueSec */
    0U,  /* timeleapPastValueNs */
    0U,  /* timeleapPastValueSec */
    0U,  /* clearTimeleapCount */
#endif /* STBM_TIMELEAP_DETECTION_USED == STD_ON */
#if (STBM_OFFSET_CORRECTION_USED == STD_ON)
    0U, /* offsetCorrectionAdaptIntervalNs */
    0U, /* offsetCorrectionAdaptIntervalSec */
    0U, /* offsetCorrectionAdaptIntervalNsLo */
    0U, /* offsetCorrectionAdaptIntervalNsHi */
    0U, /* offsetCorrectionJumpThresholdNs */
    0U, /* offsetCorrectionJumpThresholdSec */
#endif /* STBM_OFFSET_CORRECTION_USED == STD_ON */
#if (STBM_SLAVE_RATE_CORRECTION_USED == STD_ON)
    0U, /* rateCorrectionInterval - nanoseconds part */
    0U, /* rateCorrectionInterval - seconds part */
    0U, /* doubleTheRateCorrectionInterval - nanoseconds part */
    0U, /* doubleTheRateCorrectionInterval - seconds part */
#endif /* STBM_SLAVE_RATE_CORRECTION_USED == STD_ON */
#if ((STBM_OFFSET_TIME_RECORDING_USED == STD_ON) || (STBM_SYNC_TIME_RECORDING_USED == STD_ON))
  /* !LINKSTO StbM.SWS_StbM_00382,1 */
  /* !LINKSTO StbM.SWS_StbM_00383,1 */

    0U, /* numberOfBlocks */
#endif /* ((STBM_OFFSET_TIME_RECORDING_USED == STD_ON) || (STBM_SYNC_TIME_RECORDING_USED == STD_ON)) */
#if (STBM_TIME_VALIDATION_SUPPORT == STD_ON)
/* !LINKSTO StbM.SWS_StbM_00470.Master.ValidationRecordTable,1 */
/* !LINKSTO StbM.SWS_StbM_00470.Slave.ValidationRecordTable,1 */
/* !LINKSTO StbM.SWS_StbM_00470.PdelayResponder.ValidationRecordTable,1 */
/* !LINKSTO StbM.SWS_StbM_00470.PdelayInitiator.ValidationRecordTable,1 */
    0U, /* numberOfBlocksTimeValidation */
#endif /* (STBM_TIME_VALIDATION_SUPPORT == STD_ON) */
#if (STBM_NVM_USED == STD_ON)
    0U, /* NVRAM Block Id */
#endif /* (STBM_NVM_USED == STD_ON) */
#if (STBM_MASTER_RATE_CORRECTION_USED == STD_ON)
    STBM_RATE_DEVIATION_INVALID_VALUE, /* masterRateDeviationMax */
    STBM_INVALID_INDEX, /* masterRcArrayIndex */
#endif /* STBM_MASTER_RATE_CORRECTION_USED == STD_ON */
#if (STBM_SLAVE_RATE_CORRECTION_USED == STD_ON)
    0U, /* startIndexRcIntervals */
    0U, /* stopIndexRcIntervals */
    0U, /* intervalArrayIndex */
#endif /* STBM_SLAVE_RATE_CORRECTION_USED == STD_ON */
#if ((STBM_MASTER_RATE_CORRECTION_USED == STD_ON) || (STBM_GET_MASTERCONFIG_SUPPORTED == STD_ON))
      STBM_SYSTEM_WIDE_MASTER_DISABLED, /* systemWideMaster */
#endif /* ((STBM_MASTER_RATE_CORRECTION_USED == STD_ON) || (STBM_GET_MASTERCONFIG_SUPPORTED == STD_ON)) */

#if (STBM_TIME_BASES_THAT_SHARE_DATA_USED == STD_ON)
  
    STBM_TIME_BASE_DOES_NOT_USE_SHARED_DATA, /* timeBaseSharesDataIdx */

#if (STBM_SHARED_DATA_VERSION == STBM_SHARED_DATA_V2)
    STBM_TIME_BASE_NO_SHARED_DATA, /* timeBaseRoleSharedData */
#endif /* (STBM_SHARED_DATA_VERSION == STBM_SHARED_DATA_V2) */

#endif /* STBM_TIME_BASES_THAT_SHARE_DATA_USED == STD_ON */

#if (STBM_NOTIFICATION_OF_CUSTOMERS_USED == STD_ON)
     10U, /* number of customer notifications */
#endif /* (STBM_NOTIFICATION_OF_CUSTOMERS_USED == STD_ON) */

  },
};
#endif /* STBM_COMMON_FEATURES_ENABLED */

/* List of all "set global time" functions of adjacent layer */
CONST(StbM_TimeSetterFctPtrType, STBM_APPL_CONST) StbM_TimeSetterFctPtrList[STBM_NUMBER_OF_ADJACENT_MODULES] =
{
  NULL_PTR,  /* EthTSyn*/
  NULL_PTR,  /* CanTSyn*/
  &StbM_SetGlobalTimeOffset  /* internal setter function to adjust time value */
};

/* Function pointer array for all the callback functions of all time bases */
/* !LINKSTO StbM.SWS_StbM_00277.ToApplication.SR_INTERFACE,1 */
/* !LINKSTO StbM.SWS_StbM_00277.ToCDD.CALLBACK,1 */
/* !LINKSTO StbM.SWS_StbM_00277.ToCDDAndApplication.CALLBACK_AND_SR_INTERFACE,1 */
/* !LINKSTO StbM.SWS_StbM_00277.NoNotification,1 */
/* !LINKSTO StbM.SWS_StbM_00299,1 */
/* !LINKSTO StbM.SWS_StbM_00285,1 */
/* !LINKSTO StbM.SWS_StbM_00322,1 */
/* !LINKSTO StbM.SWS_StbM_00323,1 */
/* !LINKSTO StbM.SWS_StbM_00328,1 */
/* !LINKSTO StbM.SWS_StbM_00329,1 */
/* !LINKSTO StbM.ECUC_StbM_00046_Conf,1 */
CONST(StbM_CallbacksFctPtrType, STBM_APPL_CONST) StbM_CallbacksPtrList[STBM_NUMBER_OF_SYNC_TIMEBASES + STBM_NUMBER_OF_OFFSET_TIMEBASES + STBM_NUMBER_OF_PURE_TIMEBASES] =
{
  { /* GlobalTime_Slave */
#if (STBM_STATUS_NOTIFICATIONS_USED == STD_ON)
    &StbM_StatusNotificationCallbackGlobalTime_SlaveGlobalTime_Slave,  /* statusNotificationCbkFctPtr */
    &Rte_Write_GlobalTime_StatusEvent_GlobalTime_Slave_eventNotification,  /* statusNotificationRteCbkFctPtr */
#endif /* (STBM_STATUS_NOTIFICATIONS_USED == STD_ON) */

#if (STBM_SYNC_TIME_RECORDING_USED == STD_ON)
    NULL_PTR,  /* syncTimeRecordBlockCbkFctPtr */
#endif /* (STBM_SYNC_TIME_RECORDING_USED == STD_ON) */

#if (STBM_OFFSET_TIME_RECORDING_USED == STD_ON)
    NULL_PTR,  /* offsetTimeRecordBlockCbkFctPtr */
#endif /* (STBM_OFFSET_TIME_RECORDING_USED == STD_ON) */


#if ((STBM_SYNC_TIME_RECORDING_USED == STD_ON) && (STBM_RTE_USED == STD_ON))
    NULL_PTR,  /* syncTimeRecordBlockRteCbkFctPtr */
#endif /* ((STBM_SYNC_TIME_RECORDING_USED == STD_ON) && (STBM_RTE_USED == STD_ON)) */

#if ((STBM_OFFSET_TIME_RECORDING_USED == STD_ON) && (STBM_RTE_USED == STD_ON))
    NULL_PTR,  /* offsetTimeRecordBlockRteCbkFctPtr */
#endif /* ((STBM_OFFSET_TIME_RECORDING_USED == STD_ON) && (STBM_RTE_USED == STD_ON)) */


#if (STBM_TIME_VALIDATION_SUPPORT == STD_ON)
  /* Call GetConnectedBusTSynModule macro, in order to see what modules are connected to this Time Base */
  #if (STBM_HAS_AT_LEAST_ONE_CANTSYN_MASTER_LINKED == STD_ON)
    NULL_PTR,
  #endif /* (STBM_HAS_AT_LEAST_ONE_CANTSYN_MASTER_LINKED == STD_ON) */
  #if (STBM_HAS_AT_LEAST_ONE_FRTSYN_MASTER_LINKED == STD_ON)
    NULL_PTR,
  #endif /* (STBM_HAS_AT_LEAST_ONE_FRTSYN_MASTER_LINKED == STD_ON) */
  #if (STBM_HAS_AT_LEAST_ONE_ETHTSYN_LINKED_TO_A_TIMEBASE_WHICH_HAS_TIMEVALIDATION_ENABLED == STD_ON)
    NULL_PTR,
    NULL_PTR,
  #endif /* (STBM_HAS_AT_LEAST_ONE_ETHTSYN_LINKED_TO_A_TIMEBASE_WHICH_HAS_TIMEVALIDATION_ENABLED == STD_ON) */
  #if (STBM_HAS_AT_LEAST_ONE_CANTSYN_SLAVE_LINKED == STD_ON)
    NULL_PTR,
  #endif /* (STBM_HAS_AT_LEAST_ONE_CANTSYN_SLAVE_LINKED == STD_ON) */
  #if (STBM_HAS_AT_LEAST_ONE_FRTSYN_SLAVE_LINKED == STD_ON)
    NULL_PTR,
  #endif /* (STBM_HAS_AT_LEAST_ONE_FRTSYN_SLAVE_LINKED == STD_ON) */
  #if (STBM_HAS_AT_LEAST_ONE_ETHTSYN_LINKED_TO_A_TIMEBASE_WHICH_HAS_TIMEVALIDATION_ENABLED == STD_ON)
    NULL_PTR,
    NULL_PTR,
  #endif /* (STBM_HAS_AT_LEAST_ONE_ETHTSYN_LINKED_TO_A_TIMEBASE_WHICH_HAS_TIMEVALIDATION_ENABLED == STD_ON) */
#endif /* (STBM_TIME_VALIDATION_SUPPORT == STD_ON) */

  },
  { /* PureLocalTime */
#if (STBM_STATUS_NOTIFICATIONS_USED == STD_ON)
    &StbM_StatusNotificationCallbackPureLocalTimePureLocalTime,  /* statusNotificationCbkFctPtr */
    &Rte_Write_GlobalTime_StatusEvent_PureLocalTime_eventNotification,  /* statusNotificationRteCbkFctPtr */
#endif /* (STBM_STATUS_NOTIFICATIONS_USED == STD_ON) */

#if (STBM_SYNC_TIME_RECORDING_USED == STD_ON)
    NULL_PTR,  /* syncTimeRecordBlockCbkFctPtr */
#endif /* (STBM_SYNC_TIME_RECORDING_USED == STD_ON) */

#if (STBM_OFFSET_TIME_RECORDING_USED == STD_ON)
    NULL_PTR,  /* offsetTimeRecordBlockCbkFctPtr */
#endif /* (STBM_OFFSET_TIME_RECORDING_USED == STD_ON) */


#if ((STBM_SYNC_TIME_RECORDING_USED == STD_ON) && (STBM_RTE_USED == STD_ON))
    NULL_PTR,  /* syncTimeRecordBlockRteCbkFctPtr */
#endif /* ((STBM_SYNC_TIME_RECORDING_USED == STD_ON) && (STBM_RTE_USED == STD_ON)) */

#if ((STBM_OFFSET_TIME_RECORDING_USED == STD_ON) && (STBM_RTE_USED == STD_ON))
    NULL_PTR,  /* offsetTimeRecordBlockRteCbkFctPtr */
#endif /* ((STBM_OFFSET_TIME_RECORDING_USED == STD_ON) && (STBM_RTE_USED == STD_ON)) */


#if (STBM_TIME_VALIDATION_SUPPORT == STD_ON)
  /* Call GetConnectedBusTSynModule macro, in order to see what modules are connected to this Time Base */
  #if (STBM_HAS_AT_LEAST_ONE_CANTSYN_MASTER_LINKED == STD_ON)
    NULL_PTR,
  #endif /* (STBM_HAS_AT_LEAST_ONE_CANTSYN_MASTER_LINKED == STD_ON) */
  #if (STBM_HAS_AT_LEAST_ONE_FRTSYN_MASTER_LINKED == STD_ON)
    NULL_PTR,
  #endif /* (STBM_HAS_AT_LEAST_ONE_FRTSYN_MASTER_LINKED == STD_ON) */
  #if (STBM_HAS_AT_LEAST_ONE_ETHTSYN_LINKED_TO_A_TIMEBASE_WHICH_HAS_TIMEVALIDATION_ENABLED == STD_ON)
    NULL_PTR,
    NULL_PTR,
  #endif /* (STBM_HAS_AT_LEAST_ONE_ETHTSYN_LINKED_TO_A_TIMEBASE_WHICH_HAS_TIMEVALIDATION_ENABLED == STD_ON) */
  #if (STBM_HAS_AT_LEAST_ONE_CANTSYN_SLAVE_LINKED == STD_ON)
    NULL_PTR,
  #endif /* (STBM_HAS_AT_LEAST_ONE_CANTSYN_SLAVE_LINKED == STD_ON) */
  #if (STBM_HAS_AT_LEAST_ONE_FRTSYN_SLAVE_LINKED == STD_ON)
    NULL_PTR,
  #endif /* (STBM_HAS_AT_LEAST_ONE_FRTSYN_SLAVE_LINKED == STD_ON) */
  #if (STBM_HAS_AT_LEAST_ONE_ETHTSYN_LINKED_TO_A_TIMEBASE_WHICH_HAS_TIMEVALIDATION_ENABLED == STD_ON)
    NULL_PTR,
    NULL_PTR,
  #endif /* (STBM_HAS_AT_LEAST_ONE_ETHTSYN_LINKED_TO_A_TIMEBASE_WHICH_HAS_TIMEVALIDATION_ENABLED == STD_ON) */
#endif /* (STBM_TIME_VALIDATION_SUPPORT == STD_ON) */

  },
};



#define STBM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include <StbM_MemMap.h>

/*==[Variables with external linkage]=========================================*/

/*==[Definition of functions with external linkage]===========================*/







/*==[Definition of functions with internal linkage]===========================*/

/** @} doxygen end group definition */
/*==================[end of file]===========================================*/

