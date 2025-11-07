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

#define MEMMAP_ERROR_STBM

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for StbM */

#if (defined STBM_START_SEC_CODE)
  #ifdef MEMMAP_SECTION_OPENED
    #undef MEMMAP_ERROR_STBM
    #error Tried to open section STBM_START_SEC_CODE within an already open section.
  #else
    #pragma ghs section text=".code"
    #define MEMMAP_SECTION_OPENED
    #define MEMMAP_SECTION_OPENED_STARTSEC_CODE
    #undef STBM_START_SEC_CODE
    #undef MEMMAP_ERROR_STBM
  #endif
#elif (defined STBM_STOP_SEC_CODE)
  #if (defined MEMMAP_SECTION_OPENED) && (defined MEMMAP_SECTION_OPENED_STARTSEC_CODE)
    #pragma ghs section text=default
    #undef MEMMAP_SECTION_OPENED
    #undef MEMMAP_SECTION_OPENED_STARTSEC_CODE
    #undef STBM_STOP_SEC_CODE
    #undef MEMMAP_ERROR_STBM
  #else
    #undef MEMMAP_ERROR_STBM
    #error Tried to close section STBM_STOP_SEC_CODE without prior opening STBM_START_SEC_CODE.
  #endif

#elif (defined STBM_START_SEC_CONFIG_DATA_8)
  #ifdef MEMMAP_SECTION_OPENED
    #undef MEMMAP_ERROR_STBM
    #error Tried to open section STBM_START_SEC_CONFIG_DATA_8 within an already open section.
  #else
    #define MEMMAP_SECTION_OPENED
    #define MEMMAP_SECTION_OPENED_STARTSEC_CONFIG_DATA_8
    #undef STBM_START_SEC_CONFIG_DATA_8
    #undef MEMMAP_ERROR_STBM
  #endif
#elif (defined STBM_STOP_SEC_CONFIG_DATA_8)
  #if (defined MEMMAP_SECTION_OPENED) && (defined MEMMAP_SECTION_OPENED_STARTSEC_CONFIG_DATA_8)
    #undef MEMMAP_SECTION_OPENED
    #undef MEMMAP_SECTION_OPENED_STARTSEC_CONFIG_DATA_8
    #undef STBM_STOP_SEC_CONFIG_DATA_8
    #undef MEMMAP_ERROR_STBM
  #else
    #undef MEMMAP_ERROR_STBM
    #error Tried to close section STBM_STOP_SEC_CONFIG_DATA_8 without prior opening STBM_START_SEC_CONFIG_DATA_8.
  #endif

#elif (defined STBM_START_CONFIG_DATA_8)
  #ifdef MEMMAP_SECTION_OPENED
    #undef MEMMAP_ERROR_STBM
    #error Tried to open section STBM_START_CONFIG_DATA_8 within an already open section.
  #else
    #define MEMMAP_SECTION_OPENED
    #define MEMMAP_SECTION_OPENED_STARTCONFIG_DATA_8
    #undef STBM_START_CONFIG_DATA_8
    #undef MEMMAP_ERROR_STBM
  #endif
#elif (defined STBM_STOP_CONFIG_DATA_8)
  #if (defined MEMMAP_SECTION_OPENED) && (defined MEMMAP_SECTION_OPENED_STARTCONFIG_DATA_8)
    #undef MEMMAP_SECTION_OPENED
    #undef MEMMAP_SECTION_OPENED_STARTCONFIG_DATA_8
    #undef STBM_STOP_CONFIG_DATA_8
    #undef MEMMAP_ERROR_STBM
  #else
    #undef MEMMAP_ERROR_STBM
    #error Tried to close section STBM_STOP_CONFIG_DATA_8 without prior opening STBM_START_CONFIG_DATA_8.
  #endif

#elif (defined STBM_START_SEC_CONFIG_DATA_UNSPECIFIED)
  #ifdef MEMMAP_SECTION_OPENED
    #undef MEMMAP_ERROR_STBM
    #error Tried to open section STBM_START_SEC_CONFIG_DATA_UNSPECIFIED within an already open section.
  #else
    #define MEMMAP_SECTION_OPENED
    #define MEMMAP_SECTION_OPENED_STARTSEC_CONFIG_DATA_UNSPECIFIED
    #undef STBM_START_SEC_CONFIG_DATA_UNSPECIFIED
    #undef MEMMAP_ERROR_STBM
  #endif
#elif (defined STBM_STOP_SEC_CONFIG_DATA_UNSPECIFIED)
  #if (defined MEMMAP_SECTION_OPENED) && (defined MEMMAP_SECTION_OPENED_STARTSEC_CONFIG_DATA_UNSPECIFIED)
    #undef MEMMAP_SECTION_OPENED
    #undef MEMMAP_SECTION_OPENED_STARTSEC_CONFIG_DATA_UNSPECIFIED
    #undef STBM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    #undef MEMMAP_ERROR_STBM
  #else
    #undef MEMMAP_ERROR_STBM
    #error Tried to close section STBM_STOP_SEC_CONFIG_DATA_UNSPECIFIED without prior opening STBM_START_SEC_CONFIG_DATA_UNSPECIFIED.
  #endif

#elif (defined STBM_START_CONFIG_DATA_UNSPECIFIED)
  #ifdef MEMMAP_SECTION_OPENED
    #undef MEMMAP_ERROR_STBM
    #error Tried to open section STBM_START_CONFIG_DATA_UNSPECIFIED within an already open section.
  #else
    #define MEMMAP_SECTION_OPENED
    #define MEMMAP_SECTION_OPENED_STARTCONFIG_DATA_UNSPECIFIED
    #undef STBM_START_CONFIG_DATA_UNSPECIFIED
    #undef MEMMAP_ERROR_STBM
  #endif
#elif (defined STBM_STOP_CONFIG_DATA_UNSPECIFIED)
  #if (defined MEMMAP_SECTION_OPENED) && (defined MEMMAP_SECTION_OPENED_STARTCONFIG_DATA_UNSPECIFIED)
    #undef MEMMAP_SECTION_OPENED
    #undef MEMMAP_SECTION_OPENED_STARTCONFIG_DATA_UNSPECIFIED
    #undef STBM_STOP_CONFIG_DATA_UNSPECIFIED
    #undef MEMMAP_ERROR_STBM
  #else
    #undef MEMMAP_ERROR_STBM
    #error Tried to close section STBM_STOP_CONFIG_DATA_UNSPECIFIED without prior opening STBM_START_CONFIG_DATA_UNSPECIFIED.
  #endif

#elif (defined STBM_START_SEC_CONST_UNSPECIFIED)
  #ifdef MEMMAP_SECTION_OPENED
    #undef MEMMAP_ERROR_STBM
    #error Tried to open section STBM_START_SEC_CONST_UNSPECIFIED within an already open section.
  #else
    #pragma ghs section rodata=".const_unspecified"
    #define MEMMAP_SECTION_OPENED
    #define MEMMAP_SECTION_OPENED_STARTSEC_CONST_UNSPECIFIED
    #undef STBM_START_SEC_CONST_UNSPECIFIED
    #undef MEMMAP_ERROR_STBM
  #endif
#elif (defined STBM_STOP_SEC_CONST_UNSPECIFIED)
  #if (defined MEMMAP_SECTION_OPENED) && (defined MEMMAP_SECTION_OPENED_STARTSEC_CONST_UNSPECIFIED)
    #pragma ghs section rodata=default
    #undef MEMMAP_SECTION_OPENED
    #undef MEMMAP_SECTION_OPENED_STARTSEC_CONST_UNSPECIFIED
    #undef STBM_STOP_SEC_CONST_UNSPECIFIED
    #undef MEMMAP_ERROR_STBM
  #else
    #undef MEMMAP_ERROR_STBM
    #error Tried to close section STBM_STOP_SEC_CONST_UNSPECIFIED without prior opening STBM_START_SEC_CONST_UNSPECIFIED.
  #endif

#elif (defined STBM_START_SEC_VAR_CLEARED_32)
  #ifdef MEMMAP_SECTION_OPENED
    #undef MEMMAP_ERROR_STBM
    #error Tried to open section STBM_START_SEC_VAR_CLEARED_32 within an already open section.
  #else
    #pragma ghs section bss=".var_cleared_32"
    #define MEMMAP_SECTION_OPENED
    #define MEMMAP_SECTION_OPENED_STARTSEC_VAR_CLEARED_32
    #undef STBM_START_SEC_VAR_CLEARED_32
    #undef MEMMAP_ERROR_STBM
  #endif
#elif (defined STBM_STOP_SEC_VAR_CLEARED_32)
  #if (defined MEMMAP_SECTION_OPENED) && (defined MEMMAP_SECTION_OPENED_STARTSEC_VAR_CLEARED_32)
    #pragma ghs section bss=default
    #undef MEMMAP_SECTION_OPENED
    #undef MEMMAP_SECTION_OPENED_STARTSEC_VAR_CLEARED_32
    #undef STBM_STOP_SEC_VAR_CLEARED_32
    #undef MEMMAP_ERROR_STBM
  #else
    #undef MEMMAP_ERROR_STBM
    #error Tried to close section STBM_STOP_SEC_VAR_CLEARED_32 without prior opening STBM_START_SEC_VAR_CLEARED_32.
  #endif

#elif (defined STBM_START_SEC_VAR_CLEARED_8)
  #ifdef MEMMAP_SECTION_OPENED
    #undef MEMMAP_ERROR_STBM
    #error Tried to open section STBM_START_SEC_VAR_CLEARED_8 within an already open section.
  #else
    #pragma ghs section bss=".var_cleared_8"
    #define MEMMAP_SECTION_OPENED
    #define MEMMAP_SECTION_OPENED_STARTSEC_VAR_CLEARED_8
    #undef STBM_START_SEC_VAR_CLEARED_8
    #undef MEMMAP_ERROR_STBM
  #endif
#elif (defined STBM_STOP_SEC_VAR_CLEARED_8)
  #if (defined MEMMAP_SECTION_OPENED) && (defined MEMMAP_SECTION_OPENED_STARTSEC_VAR_CLEARED_8)
    #pragma ghs section bss=default
    #undef MEMMAP_SECTION_OPENED
    #undef MEMMAP_SECTION_OPENED_STARTSEC_VAR_CLEARED_8
    #undef STBM_STOP_SEC_VAR_CLEARED_8
    #undef MEMMAP_ERROR_STBM
  #else
    #undef MEMMAP_ERROR_STBM
    #error Tried to close section STBM_STOP_SEC_VAR_CLEARED_8 without prior opening STBM_START_SEC_VAR_CLEARED_8.
  #endif

#elif (defined STBM_START_SEC_VAR_CLEARED_TIME_DATA_UNSPECIFIED)
  #ifdef MEMMAP_SECTION_OPENED
    #undef MEMMAP_ERROR_STBM
    #error Tried to open section STBM_START_SEC_VAR_CLEARED_TIME_DATA_UNSPECIFIED within an already open section.
  #else
    #pragma ghs section bss=".var_cleared_unspecified"
    #define MEMMAP_SECTION_OPENED
    #define MEMMAP_SECTION_OPENED_STARTSEC_VAR_CLEARED_TIME_DATA_UNSPECIFIED
    #undef STBM_START_SEC_VAR_CLEARED_TIME_DATA_UNSPECIFIED
    #undef MEMMAP_ERROR_STBM
  #endif
#elif (defined STBM_STOP_SEC_VAR_CLEARED_TIME_DATA_UNSPECIFIED)
  #if (defined MEMMAP_SECTION_OPENED) && (defined MEMMAP_SECTION_OPENED_STARTSEC_VAR_CLEARED_TIME_DATA_UNSPECIFIED)
    #pragma ghs section bss=default
    #undef MEMMAP_SECTION_OPENED
    #undef MEMMAP_SECTION_OPENED_STARTSEC_VAR_CLEARED_TIME_DATA_UNSPECIFIED
    #undef STBM_STOP_SEC_VAR_CLEARED_TIME_DATA_UNSPECIFIED
    #undef MEMMAP_ERROR_STBM
  #else
    #undef MEMMAP_ERROR_STBM
    #error Tried to close section STBM_STOP_SEC_VAR_CLEARED_TIME_DATA_UNSPECIFIED without prior opening STBM_START_SEC_VAR_CLEARED_TIME_DATA_UNSPECIFIED.
  #endif

#elif (defined STBM_START_SEC_VAR_CLEARED_UNSPECIFIED)
  #ifdef MEMMAP_SECTION_OPENED
    #undef MEMMAP_ERROR_STBM
    #error Tried to open section STBM_START_SEC_VAR_CLEARED_UNSPECIFIED within an already open section.
  #else
    #pragma ghs section bss=".var_cleared_unspecified"
    #define MEMMAP_SECTION_OPENED
    #define MEMMAP_SECTION_OPENED_STARTSEC_VAR_CLEARED_UNSPECIFIED
    #undef STBM_START_SEC_VAR_CLEARED_UNSPECIFIED
    #undef MEMMAP_ERROR_STBM
  #endif
#elif (defined STBM_STOP_SEC_VAR_CLEARED_UNSPECIFIED)
  #if (defined MEMMAP_SECTION_OPENED) && (defined MEMMAP_SECTION_OPENED_STARTSEC_VAR_CLEARED_UNSPECIFIED)
    #pragma ghs section bss=default
    #undef MEMMAP_SECTION_OPENED
    #undef MEMMAP_SECTION_OPENED_STARTSEC_VAR_CLEARED_UNSPECIFIED
    #undef STBM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
    #undef MEMMAP_ERROR_STBM
  #else
    #undef MEMMAP_ERROR_STBM
    #error Tried to close section STBM_STOP_SEC_VAR_CLEARED_UNSPECIFIED without prior opening STBM_START_SEC_VAR_CLEARED_UNSPECIFIED.
  #endif

#elif (defined STBM_START_SEC_VAR_INIT_8)
  #ifdef MEMMAP_SECTION_OPENED
    #undef MEMMAP_ERROR_STBM
    #error Tried to open section STBM_START_SEC_VAR_INIT_8 within an already open section.
  #else
    #define MEMMAP_SECTION_OPENED
    #define MEMMAP_SECTION_OPENED_STARTSEC_VAR_INIT_8
    #undef STBM_START_SEC_VAR_INIT_8
    #undef MEMMAP_ERROR_STBM
  #endif
#elif (defined STBM_STOP_SEC_VAR_INIT_8)
  #if (defined MEMMAP_SECTION_OPENED) && (defined MEMMAP_SECTION_OPENED_STARTSEC_VAR_INIT_8)
    #undef MEMMAP_SECTION_OPENED
    #undef MEMMAP_SECTION_OPENED_STARTSEC_VAR_INIT_8
    #undef STBM_STOP_SEC_VAR_INIT_8
    #undef MEMMAP_ERROR_STBM
  #else
    #undef MEMMAP_ERROR_STBM
    #error Tried to close section STBM_STOP_SEC_VAR_INIT_8 without prior opening STBM_START_SEC_VAR_INIT_8.
  #endif

#endif

#if ((!defined MEMMAP_ERROR_STBM) && (defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR
#elif ((defined MEMMAP_ERROR_STBM) && (!defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR_STBM
  #error MEMMAP_ERROR_STBM the included memory section was not defined within the BSW-IMPLEMENTATION of StbM.
#endif
