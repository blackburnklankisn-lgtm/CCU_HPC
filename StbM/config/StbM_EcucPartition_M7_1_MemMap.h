/**
 * \file
 *
 * \brief AUTOSAR MemMap
 *
 * This file contains the implementation of the AUTOSAR
 * module MemMap.
 *
 * \version 1.3.13
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

/*==================[inclusions]=============================================*/

#define MEMMAP_ERROR_STBM_ECUCPARTITION_M7_1

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for StbM_EcucPartition_M7_1 */

#if (defined StbM_EcucPartition_M7_1_START_SEC_CODE)
  #ifdef MEMMAP_SECTION_OPENED
    #undef MEMMAP_ERROR_STBM_ECUCPARTITION_M7_1
    #error Tried to open section StbM_EcucPartition_M7_1_START_SEC_CODE within an already open section.
  #else
    #pragma ghs section text=".code"
    #define MEMMAP_SECTION_OPENED
    #define MEMMAP_SECTION_OPENED_STARTSEC_CODE
    #undef StbM_EcucPartition_M7_1_START_SEC_CODE
    #undef MEMMAP_ERROR_STBM_ECUCPARTITION_M7_1
  #endif
#elif (defined StbM_EcucPartition_M7_1_STOP_SEC_CODE)
  #if (defined MEMMAP_SECTION_OPENED) && (defined MEMMAP_SECTION_OPENED_STARTSEC_CODE)
    #pragma ghs section text=default
    #undef MEMMAP_SECTION_OPENED
    #undef MEMMAP_SECTION_OPENED_STARTSEC_CODE
    #undef StbM_EcucPartition_M7_1_STOP_SEC_CODE
    #undef MEMMAP_ERROR_STBM_ECUCPARTITION_M7_1
  #else
    #undef MEMMAP_ERROR_STBM_ECUCPARTITION_M7_1
    #error Tried to close section StbM_EcucPartition_M7_1_STOP_SEC_CODE without prior opening StbM_EcucPartition_M7_1_START_SEC_CODE.
  #endif

#endif

#ifdef MEMMAP_ERROR_STBM_ECUCPARTITION_M7_1
  #undef MEMMAP_ERROR_STBM_ECUCPARTITION_M7_1
  #error MEMMAP_ERROR_STBM_ECUCPARTITION_M7_1 the included memory section was not defined within the SWC-IMPLEMENTATION of StbM_EcucPartition_M7_1.
#endif
