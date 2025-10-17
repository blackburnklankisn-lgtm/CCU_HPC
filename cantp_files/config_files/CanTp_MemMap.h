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

#define MEMMAP_ERROR_CANTP

/*------------------[Start of a module]--------------------------------------*/

/* Memory section macros for CanTp */

#if (defined CANTP_START_SEC_CODE)
  #ifdef MEMMAP_SECTION_OPENED
    #undef MEMMAP_ERROR_CANTP
    #error Tried to open section CANTP_START_SEC_CODE within an already open section.
  #else
    #pragma ghs section text=".code"
    #define MEMMAP_SECTION_OPENED
    #define MEMMAP_SECTION_OPENED_STARTSEC_CODE
    #undef CANTP_START_SEC_CODE
    #undef MEMMAP_ERROR_CANTP
  #endif
#elif (defined CANTP_STOP_SEC_CODE)
  #if (defined MEMMAP_SECTION_OPENED) && (defined MEMMAP_SECTION_OPENED_STARTSEC_CODE)
    #pragma ghs section text=default
    #undef MEMMAP_SECTION_OPENED
    #undef MEMMAP_SECTION_OPENED_STARTSEC_CODE
    #undef CANTP_STOP_SEC_CODE
    #undef MEMMAP_ERROR_CANTP
  #else
    #undef MEMMAP_ERROR_CANTP
    #error Tried to close section CANTP_STOP_SEC_CODE without prior opening CANTP_START_SEC_CODE.
  #endif

#elif (defined CANTP_START_SEC_CODE_CC_BLOCK)
  #ifdef MEMMAP_SECTION_OPENED
    #undef MEMMAP_ERROR_CANTP
    #error Tried to open section CANTP_START_SEC_CODE_CC_BLOCK within an already open section.
  #else
    #pragma ghs section text=".code"
    #define MEMMAP_SECTION_OPENED
    #define MEMMAP_SECTION_OPENED_STARTSEC_CODE_CC_BLOCK
    #undef CANTP_START_SEC_CODE_CC_BLOCK
    #undef MEMMAP_ERROR_CANTP
  #endif
#elif (defined CANTP_STOP_SEC_CODE_CC_BLOCK)
  #if (defined MEMMAP_SECTION_OPENED) && (defined MEMMAP_SECTION_OPENED_STARTSEC_CODE_CC_BLOCK)
    #pragma ghs section text=default
    #undef MEMMAP_SECTION_OPENED
    #undef MEMMAP_SECTION_OPENED_STARTSEC_CODE_CC_BLOCK
    #undef CANTP_STOP_SEC_CODE_CC_BLOCK
    #undef MEMMAP_ERROR_CANTP
  #else
    #undef MEMMAP_ERROR_CANTP
    #error Tried to close section CANTP_STOP_SEC_CODE_CC_BLOCK without prior opening CANTP_START_SEC_CODE_CC_BLOCK.
  #endif

#elif (defined CANTP_START_SEC_CONFIG_DATA_UNSPECIFIED)
  #ifdef MEMMAP_SECTION_OPENED
    #undef MEMMAP_ERROR_CANTP
    #error Tried to open section CANTP_START_SEC_CONFIG_DATA_UNSPECIFIED within an already open section.
  #else
    #define MEMMAP_SECTION_OPENED
    #define MEMMAP_SECTION_OPENED_STARTSEC_CONFIG_DATA_UNSPECIFIED
    #undef CANTP_START_SEC_CONFIG_DATA_UNSPECIFIED
    #undef MEMMAP_ERROR_CANTP
  #endif
#elif (defined CANTP_STOP_SEC_CONFIG_DATA_UNSPECIFIED)
  #if (defined MEMMAP_SECTION_OPENED) && (defined MEMMAP_SECTION_OPENED_STARTSEC_CONFIG_DATA_UNSPECIFIED)
    #undef MEMMAP_SECTION_OPENED
    #undef MEMMAP_SECTION_OPENED_STARTSEC_CONFIG_DATA_UNSPECIFIED
    #undef CANTP_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    #undef MEMMAP_ERROR_CANTP
  #else
    #undef MEMMAP_ERROR_CANTP
    #error Tried to close section CANTP_STOP_SEC_CONFIG_DATA_UNSPECIFIED without prior opening CANTP_START_SEC_CONFIG_DATA_UNSPECIFIED.
  #endif

#elif (defined CANTP_START_CONFIG_DATA_UNSPECIFIED)
  #ifdef MEMMAP_SECTION_OPENED
    #undef MEMMAP_ERROR_CANTP
    #error Tried to open section CANTP_START_CONFIG_DATA_UNSPECIFIED within an already open section.
  #else
    #define MEMMAP_SECTION_OPENED
    #define MEMMAP_SECTION_OPENED_STARTCONFIG_DATA_UNSPECIFIED
    #undef CANTP_START_CONFIG_DATA_UNSPECIFIED
    #undef MEMMAP_ERROR_CANTP
  #endif
#elif (defined CANTP_STOP_CONFIG_DATA_UNSPECIFIED)
  #if (defined MEMMAP_SECTION_OPENED) && (defined MEMMAP_SECTION_OPENED_STARTCONFIG_DATA_UNSPECIFIED)
    #undef MEMMAP_SECTION_OPENED
    #undef MEMMAP_SECTION_OPENED_STARTCONFIG_DATA_UNSPECIFIED
    #undef CANTP_STOP_CONFIG_DATA_UNSPECIFIED
    #undef MEMMAP_ERROR_CANTP
  #else
    #undef MEMMAP_ERROR_CANTP
    #error Tried to close section CANTP_STOP_CONFIG_DATA_UNSPECIFIED without prior opening CANTP_START_CONFIG_DATA_UNSPECIFIED.
  #endif

#elif (defined CANTP_START_SEC_CONST_32)
  #ifdef MEMMAP_SECTION_OPENED
    #undef MEMMAP_ERROR_CANTP
    #error Tried to open section CANTP_START_SEC_CONST_32 within an already open section.
  #else
    #pragma ghs section rodata=".const_32"
    #define MEMMAP_SECTION_OPENED
    #define MEMMAP_SECTION_OPENED_STARTSEC_CONST_32
    #undef CANTP_START_SEC_CONST_32
    #undef MEMMAP_ERROR_CANTP
  #endif
#elif (defined CANTP_STOP_SEC_CONST_32)
  #if (defined MEMMAP_SECTION_OPENED) && (defined MEMMAP_SECTION_OPENED_STARTSEC_CONST_32)
    #pragma ghs section rodata=default
    #undef MEMMAP_SECTION_OPENED
    #undef MEMMAP_SECTION_OPENED_STARTSEC_CONST_32
    #undef CANTP_STOP_SEC_CONST_32
    #undef MEMMAP_ERROR_CANTP
  #else
    #undef MEMMAP_ERROR_CANTP
    #error Tried to close section CANTP_STOP_SEC_CONST_32 without prior opening CANTP_START_SEC_CONST_32.
  #endif

#elif (defined CANTP_START_SEC_CONST_ENTRY_JUMP_TABLE_UNSPECIFIED)
  #ifdef MEMMAP_SECTION_OPENED
    #undef MEMMAP_ERROR_CANTP
    #error Tried to open section CANTP_START_SEC_CONST_ENTRY_JUMP_TABLE_UNSPECIFIED within an already open section.
  #else
    #pragma ghs section rodata=".const_unspecified"
    #define MEMMAP_SECTION_OPENED
    #define MEMMAP_SECTION_OPENED_STARTSEC_CONST_ENTRY_JUMP_TABLE_UNSPECIFIED
    #undef CANTP_START_SEC_CONST_ENTRY_JUMP_TABLE_UNSPECIFIED
    #undef MEMMAP_ERROR_CANTP
  #endif
#elif (defined CANTP_STOP_SEC_CONST_ENTRY_JUMP_TABLE_UNSPECIFIED)
  #if (defined MEMMAP_SECTION_OPENED) && (defined MEMMAP_SECTION_OPENED_STARTSEC_CONST_ENTRY_JUMP_TABLE_UNSPECIFIED)
    #pragma ghs section rodata=default
    #undef MEMMAP_SECTION_OPENED
    #undef MEMMAP_SECTION_OPENED_STARTSEC_CONST_ENTRY_JUMP_TABLE_UNSPECIFIED
    #undef CANTP_STOP_SEC_CONST_ENTRY_JUMP_TABLE_UNSPECIFIED
    #undef MEMMAP_ERROR_CANTP
  #else
    #undef MEMMAP_ERROR_CANTP
    #error Tried to close section CANTP_STOP_SEC_CONST_ENTRY_JUMP_TABLE_UNSPECIFIED without prior opening CANTP_START_SEC_CONST_ENTRY_JUMP_TABLE_UNSPECIFIED.
  #endif

#elif (defined CANTP_START_SEC_CONST_EXIT_JUMP_TABLE_UNSPECIFIED)
  #ifdef MEMMAP_SECTION_OPENED
    #undef MEMMAP_ERROR_CANTP
    #error Tried to open section CANTP_START_SEC_CONST_EXIT_JUMP_TABLE_UNSPECIFIED within an already open section.
  #else
    #pragma ghs section rodata=".const_unspecified"
    #define MEMMAP_SECTION_OPENED
    #define MEMMAP_SECTION_OPENED_STARTSEC_CONST_EXIT_JUMP_TABLE_UNSPECIFIED
    #undef CANTP_START_SEC_CONST_EXIT_JUMP_TABLE_UNSPECIFIED
    #undef MEMMAP_ERROR_CANTP
  #endif
#elif (defined CANTP_STOP_SEC_CONST_EXIT_JUMP_TABLE_UNSPECIFIED)
  #if (defined MEMMAP_SECTION_OPENED) && (defined MEMMAP_SECTION_OPENED_STARTSEC_CONST_EXIT_JUMP_TABLE_UNSPECIFIED)
    #pragma ghs section rodata=default
    #undef MEMMAP_SECTION_OPENED
    #undef MEMMAP_SECTION_OPENED_STARTSEC_CONST_EXIT_JUMP_TABLE_UNSPECIFIED
    #undef CANTP_STOP_SEC_CONST_EXIT_JUMP_TABLE_UNSPECIFIED
    #undef MEMMAP_ERROR_CANTP
  #else
    #undef MEMMAP_ERROR_CANTP
    #error Tried to close section CANTP_STOP_SEC_CONST_EXIT_JUMP_TABLE_UNSPECIFIED without prior opening CANTP_START_SEC_CONST_EXIT_JUMP_TABLE_UNSPECIFIED.
  #endif

#elif (defined CANTP_START_SEC_CONST_UNSPECIFIED)
  #ifdef MEMMAP_SECTION_OPENED
    #undef MEMMAP_ERROR_CANTP
    #error Tried to open section CANTP_START_SEC_CONST_UNSPECIFIED within an already open section.
  #else
    #pragma ghs section rodata=".const_unspecified"
    #define MEMMAP_SECTION_OPENED
    #define MEMMAP_SECTION_OPENED_STARTSEC_CONST_UNSPECIFIED
    #undef CANTP_START_SEC_CONST_UNSPECIFIED
    #undef MEMMAP_ERROR_CANTP
  #endif
#elif (defined CANTP_STOP_SEC_CONST_UNSPECIFIED)
  #if (defined MEMMAP_SECTION_OPENED) && (defined MEMMAP_SECTION_OPENED_STARTSEC_CONST_UNSPECIFIED)
    #pragma ghs section rodata=default
    #undef MEMMAP_SECTION_OPENED
    #undef MEMMAP_SECTION_OPENED_STARTSEC_CONST_UNSPECIFIED
    #undef CANTP_STOP_SEC_CONST_UNSPECIFIED
    #undef MEMMAP_ERROR_CANTP
  #else
    #undef MEMMAP_ERROR_CANTP
    #error Tried to close section CANTP_STOP_SEC_CONST_UNSPECIFIED without prior opening CANTP_START_SEC_CONST_UNSPECIFIED.
  #endif

#elif (defined CANTP_START_SEC_VAR_CLEARED_16)
  #ifdef MEMMAP_SECTION_OPENED
    #undef MEMMAP_ERROR_CANTP
    #error Tried to open section CANTP_START_SEC_VAR_CLEARED_16 within an already open section.
  #else
    #pragma ghs section bss=".var_cleared_16"
    #define MEMMAP_SECTION_OPENED
    #define MEMMAP_SECTION_OPENED_STARTSEC_VAR_CLEARED_16
    #undef CANTP_START_SEC_VAR_CLEARED_16
    #undef MEMMAP_ERROR_CANTP
  #endif
#elif (defined CANTP_STOP_SEC_VAR_CLEARED_16)
  #if (defined MEMMAP_SECTION_OPENED) && (defined MEMMAP_SECTION_OPENED_STARTSEC_VAR_CLEARED_16)
    #pragma ghs section bss=default
    #undef MEMMAP_SECTION_OPENED
    #undef MEMMAP_SECTION_OPENED_STARTSEC_VAR_CLEARED_16
    #undef CANTP_STOP_SEC_VAR_CLEARED_16
    #undef MEMMAP_ERROR_CANTP
  #else
    #undef MEMMAP_ERROR_CANTP
    #error Tried to close section CANTP_STOP_SEC_VAR_CLEARED_16 without prior opening CANTP_START_SEC_VAR_CLEARED_16.
  #endif

#elif (defined CANTP_START_SEC_VAR_CLEARED_8)
  #ifdef MEMMAP_SECTION_OPENED
    #undef MEMMAP_ERROR_CANTP
    #error Tried to open section CANTP_START_SEC_VAR_CLEARED_8 within an already open section.
  #else
    #pragma ghs section bss=".var_cleared_8"
    #define MEMMAP_SECTION_OPENED
    #define MEMMAP_SECTION_OPENED_STARTSEC_VAR_CLEARED_8
    #undef CANTP_START_SEC_VAR_CLEARED_8
    #undef MEMMAP_ERROR_CANTP
  #endif
#elif (defined CANTP_STOP_SEC_VAR_CLEARED_8)
  #if (defined MEMMAP_SECTION_OPENED) && (defined MEMMAP_SECTION_OPENED_STARTSEC_VAR_CLEARED_8)
    #pragma ghs section bss=default
    #undef MEMMAP_SECTION_OPENED
    #undef MEMMAP_SECTION_OPENED_STARTSEC_VAR_CLEARED_8
    #undef CANTP_STOP_SEC_VAR_CLEARED_8
    #undef MEMMAP_ERROR_CANTP
  #else
    #undef MEMMAP_ERROR_CANTP
    #error Tried to close section CANTP_STOP_SEC_VAR_CLEARED_8 without prior opening CANTP_START_SEC_VAR_CLEARED_8.
  #endif

#elif (defined CANTP_START_SEC_VAR_CLEARED_UNSPECIFIED)
  #ifdef MEMMAP_SECTION_OPENED
    #undef MEMMAP_ERROR_CANTP
    #error Tried to open section CANTP_START_SEC_VAR_CLEARED_UNSPECIFIED within an already open section.
  #else
    #pragma ghs section bss=".var_cleared_unspecified"
    #define MEMMAP_SECTION_OPENED
    #define MEMMAP_SECTION_OPENED_STARTSEC_VAR_CLEARED_UNSPECIFIED
    #undef CANTP_START_SEC_VAR_CLEARED_UNSPECIFIED
    #undef MEMMAP_ERROR_CANTP
  #endif
#elif (defined CANTP_STOP_SEC_VAR_CLEARED_UNSPECIFIED)
  #if (defined MEMMAP_SECTION_OPENED) && (defined MEMMAP_SECTION_OPENED_STARTSEC_VAR_CLEARED_UNSPECIFIED)
    #pragma ghs section bss=default
    #undef MEMMAP_SECTION_OPENED
    #undef MEMMAP_SECTION_OPENED_STARTSEC_VAR_CLEARED_UNSPECIFIED
    #undef CANTP_STOP_SEC_VAR_CLEARED_UNSPECIFIED
    #undef MEMMAP_ERROR_CANTP
  #else
    #undef MEMMAP_ERROR_CANTP
    #error Tried to close section CANTP_STOP_SEC_VAR_CLEARED_UNSPECIFIED without prior opening CANTP_START_SEC_VAR_CLEARED_UNSPECIFIED.
  #endif

#elif (defined CANTP_START_SEC_VAR_INIT_JUMP_TABLE_SHARED_UNSPECIFIED)
  #ifdef MEMMAP_SECTION_OPENED
    #undef MEMMAP_ERROR_CANTP
    #error Tried to open section CANTP_START_SEC_VAR_INIT_JUMP_TABLE_SHARED_UNSPECIFIED within an already open section.
  #else
    #pragma ghs section data=".var_init_unspecified"
    #pragma ghs section bss=".var_cleared_unspecified"
    #define MEMMAP_SECTION_OPENED
    #define MEMMAP_SECTION_OPENED_STARTSEC_VAR_INIT_JUMP_TABLE_SHARED_UNSPECIFIED
    #undef CANTP_START_SEC_VAR_INIT_JUMP_TABLE_SHARED_UNSPECIFIED
    #undef MEMMAP_ERROR_CANTP
  #endif
#elif (defined CANTP_STOP_SEC_VAR_INIT_JUMP_TABLE_SHARED_UNSPECIFIED)
  #if (defined MEMMAP_SECTION_OPENED) && (defined MEMMAP_SECTION_OPENED_STARTSEC_VAR_INIT_JUMP_TABLE_SHARED_UNSPECIFIED)
    #pragma ghs section data=default
    #pragma ghs section bss=default
    #undef MEMMAP_SECTION_OPENED
    #undef MEMMAP_SECTION_OPENED_STARTSEC_VAR_INIT_JUMP_TABLE_SHARED_UNSPECIFIED
    #undef CANTP_STOP_SEC_VAR_INIT_JUMP_TABLE_SHARED_UNSPECIFIED
    #undef MEMMAP_ERROR_CANTP
  #else
    #undef MEMMAP_ERROR_CANTP
    #error Tried to close section CANTP_STOP_SEC_VAR_INIT_JUMP_TABLE_SHARED_UNSPECIFIED without prior opening CANTP_START_SEC_VAR_INIT_JUMP_TABLE_SHARED_UNSPECIFIED.
  #endif

#elif (defined CANTP_START_SEC_VAR_INIT_UNSPECIFIED)
  #ifdef MEMMAP_SECTION_OPENED
    #undef MEMMAP_ERROR_CANTP
    #error Tried to open section CANTP_START_SEC_VAR_INIT_UNSPECIFIED within an already open section.
  #else
    #define MEMMAP_SECTION_OPENED
    #define MEMMAP_SECTION_OPENED_STARTSEC_VAR_INIT_UNSPECIFIED
    #undef CANTP_START_SEC_VAR_INIT_UNSPECIFIED
    #undef MEMMAP_ERROR_CANTP
  #endif
#elif (defined CANTP_STOP_SEC_VAR_INIT_UNSPECIFIED)
  #if (defined MEMMAP_SECTION_OPENED) && (defined MEMMAP_SECTION_OPENED_STARTSEC_VAR_INIT_UNSPECIFIED)
    #undef MEMMAP_SECTION_OPENED
    #undef MEMMAP_SECTION_OPENED_STARTSEC_VAR_INIT_UNSPECIFIED
    #undef CANTP_STOP_SEC_VAR_INIT_UNSPECIFIED
    #undef MEMMAP_ERROR_CANTP
  #else
    #undef MEMMAP_ERROR_CANTP
    #error Tried to close section CANTP_STOP_SEC_VAR_INIT_UNSPECIFIED without prior opening CANTP_START_SEC_VAR_INIT_UNSPECIFIED.
  #endif

#endif

#if ((!defined MEMMAP_ERROR_CANTP) && (defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR
#elif ((defined MEMMAP_ERROR_CANTP) && (!defined MEMMAP_ERROR))
  #undef MEMMAP_ERROR_CANTP
  #error MEMMAP_ERROR_CANTP the included memory section was not defined within the BSW-IMPLEMENTATION of CanTp.
#endif
