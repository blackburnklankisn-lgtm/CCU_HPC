


/**
 * \file
 *
 * \brief AUTOSAR CanTp
 *
 * This file contains the implementation of the AUTOSAR
 * module CanTp.
 *
 * \version 1.4.1
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */


/* MISRA-C:2012 Deviation List
 *
 * MISRAC2012-1) Deviated Rule: 1.3 (required)
 *    There shall be no occurrence of undefined or critical unspecified behaviour.
 *
 *    Reason:
 *    The postbuild macro TS_MAKEREF2CFG requires the usage of the
 *    C standard macro 'offsetof'.
 *    According to the C90 standard, the usage of 'offsetof' produces
 *    an undefined behaviour when the member designator parameter
 *    is a bit-field or when it is an invalid right operator of the
 *    '.' operator for the type parameter.
 *    This is not the case here as the parameter of TS_MAKEREF2CFG
 *    is always a member of TS_PB_CFG_LAYOUT_TYPE and bitfields are
 *    never used when defining the postbuild structure members.
 *
 * MISRAC2012-2) Deviated Rule: 11.4 (advisory)
 *    A cast should not be performed between a pointer type and an integral
 *    type.
 *
 *    Reason:
 *    Relocatable postbuild macro requires the cast between pointer and
 *    integral type.
 *
 * MISRAC2012-3) Deviated Rule: 11.9 (required)
 *    The macro NULL shall be the only permitted form of integer null pointer constant.
 *
 *    Reason:
 *    Macros are used in order to check the alignment for different data types.
 *
 */

/*==================[inclusions]=============================================*/

#include <CanTp_PBcfg.h>
#include <TSAutosar.h>
#include <Compiler.h>
#define TS_RELOCATABLE_CFG_ENABLE STD_ON
#define TS_PB_CFG_NAME CanTp_ConfigLayout
#define TS_PB_CFG_LAYOUT_TYPE CanTp_ConstConfigLayoutType
#include <TSPBConfig_Init.h>

/*==================[macros]=================================================*/


/*==================[type definitions]=======================================*/


/*==================[external function declarations]=========================*/


/*==================[internal function declarations]=========================*/


/*==================[external constants]=====================================*/

#define CANTP_START_SEC_CONFIG_DATA_UNSPECIFIED
#include <CanTp_MemMap.h>

/* Deviation MISRAC2012-1, MISRAC2012-2, MISRAC2012-3 <START> */
CanTp_ConstConfigLayoutType CanTp_ConfigLayout = {
    { /* RootCfg */
        UINT32_C( 2147485970 ), /* PlatformSignature */
        UINT32_C( 3958107115 ), /* LcfgSignature */
        UINT32_C( 1952036603 ), /* CfgSignature */
        UINT32_C( 1190202044 ), /* PublicInfoSignature */
        TS_MAKEREF2CFG( RxNPduLookupTable[0] ), /* RxNPduLookupTablePtr */
        TS_MAKEREF2CFG( RxNPduTable[0] ), /* RxNPduTablePtr */
        TS_MAKEREF2CFG( RxNSduConfig[0] ), /* RxNSduConfigPtr */
        TS_MAKEREF2CFG( TxNSduConfig[0] ), /* TxNSduConfigPtr */
        TS_MAKEREF2CFG( MfCtrConfig[0] ), /* MfCtrConfigPtr */
        TS_MAKEREF2CFG( TxNPduToTpChannel[0] ), /* TxNPduToTpChannelPtr */
        UINT16_C( 57 ), /* NumberRxNPdus */
        UINT16_C( 69 ), /* NumberTxNSdus */
        UINT16_C( 57 ), /* NumberRxNSdus */
        UINT16_C( 69 ), /* NumberTxConfNPdus */
        UINT8_C( 126 ), /* NumberOfChannels */
        UINT8_C( 69 ) /* NumberOfTxChannels */
    },
    { /* RxNPduLookupTable */
        UINT16_C( 0 ), /* RxNPduLookupTable[0] */
        UINT16_C( 2 ), /* RxNPduLookupTable[1] */
        UINT16_C( 4 ), /* RxNPduLookupTable[2] */
        UINT16_C( 6 ), /* RxNPduLookupTable[3] */
        UINT16_C( 8 ), /* RxNPduLookupTable[4] */
        UINT16_C( 10 ), /* RxNPduLookupTable[5] */
        UINT16_C( 12 ), /* RxNPduLookupTable[6] */
        UINT16_C( 14 ), /* RxNPduLookupTable[7] */
        UINT16_C( 16 ), /* RxNPduLookupTable[8] */
        UINT16_C( 18 ), /* RxNPduLookupTable[9] */
        UINT16_C( 20 ), /* RxNPduLookupTable[10] */
        UINT16_C( 22 ), /* RxNPduLookupTable[11] */
        UINT16_C( 24 ), /* RxNPduLookupTable[12] */
        UINT16_C( 26 ), /* RxNPduLookupTable[13] */
        UINT16_C( 28 ), /* RxNPduLookupTable[14] */
        UINT16_C( 30 ), /* RxNPduLookupTable[15] */
        UINT16_C( 32 ), /* RxNPduLookupTable[16] */
        UINT16_C( 34 ), /* RxNPduLookupTable[17] */
        UINT16_C( 36 ), /* RxNPduLookupTable[18] */
        UINT16_C( 38 ), /* RxNPduLookupTable[19] */
        UINT16_C( 40 ), /* RxNPduLookupTable[20] */
        UINT16_C( 42 ), /* RxNPduLookupTable[21] */
        UINT16_C( 44 ), /* RxNPduLookupTable[22] */
        UINT16_C( 46 ), /* RxNPduLookupTable[23] */
        UINT16_C( 48 ), /* RxNPduLookupTable[24] */
        UINT16_C( 50 ), /* RxNPduLookupTable[25] */
        UINT16_C( 52 ), /* RxNPduLookupTable[26] */
        UINT16_C( 54 ), /* RxNPduLookupTable[27] */
        UINT16_C( 56 ), /* RxNPduLookupTable[28] */
        UINT16_C( 58 ), /* RxNPduLookupTable[29] */
        UINT16_C( 60 ), /* RxNPduLookupTable[30] */
        UINT16_C( 62 ), /* RxNPduLookupTable[31] */
        UINT16_C( 64 ), /* RxNPduLookupTable[32] */
        UINT16_C( 66 ), /* RxNPduLookupTable[33] */
        UINT16_C( 68 ), /* RxNPduLookupTable[34] */
        UINT16_C( 70 ), /* RxNPduLookupTable[35] */
        UINT16_C( 72 ), /* RxNPduLookupTable[36] */
        UINT16_C( 74 ), /* RxNPduLookupTable[37] */
        UINT16_C( 76 ), /* RxNPduLookupTable[38] */
        UINT16_C( 78 ), /* RxNPduLookupTable[39] */
        UINT16_C( 80 ), /* RxNPduLookupTable[40] */
        UINT16_C( 82 ), /* RxNPduLookupTable[41] */
        UINT16_C( 84 ), /* RxNPduLookupTable[42] */
        UINT16_C( 86 ), /* RxNPduLookupTable[43] */
        UINT16_C( 88 ), /* RxNPduLookupTable[44] */
        UINT16_C( 90 ), /* RxNPduLookupTable[45] */
        UINT16_C( 92 ), /* RxNPduLookupTable[46] */
        UINT16_C( 94 ), /* RxNPduLookupTable[47] */
        UINT16_C( 96 ), /* RxNPduLookupTable[48] */
        UINT16_C( 98 ), /* RxNPduLookupTable[49] */
        UINT16_C( 100 ), /* RxNPduLookupTable[50] */
        UINT16_C( 102 ), /* RxNPduLookupTable[51] */
        UINT16_C( 104 ), /* RxNPduLookupTable[52] */
        UINT16_C( 106 ), /* RxNPduLookupTable[53] */
        UINT16_C( 108 ), /* RxNPduLookupTable[54] */
        UINT16_C( 110 ), /* RxNPduLookupTable[55] */
        UINT16_C( 112 ), /* RxNPduLookupTable[56] */
        UINT16_C( 114 ) /* RxNPduLookupTable[57] */
    },
    { /* RxNPduTable */
        { /* RxNPduTable[0] */
            UINT16_C( 1 ), /* Next */
            UINT16_C( 0 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[1] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 0 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[2] */
            UINT16_C( 3 ), /* Next */
            UINT16_C( 1 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[3] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 1 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[4] */
            UINT16_C( 5 ), /* Next */
            UINT16_C( 2 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[5] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 2 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[6] */
            UINT16_C( 7 ), /* Next */
            UINT16_C( 3 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[7] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 3 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[8] */
            UINT16_C( 9 ), /* Next */
            UINT16_C( 4 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[9] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 4 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[10] */
            UINT16_C( 11 ), /* Next */
            UINT16_C( 5 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[11] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 5 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[12] */
            UINT16_C( 13 ), /* Next */
            UINT16_C( 6 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[13] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 6 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[14] */
            UINT16_C( 15 ), /* Next */
            UINT16_C( 7 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[15] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 7 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[16] */
            UINT16_C( 17 ), /* Next */
            UINT16_C( 8 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[17] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 8 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[18] */
            UINT16_C( 19 ), /* Next */
            UINT16_C( 9 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[19] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 9 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[20] */
            UINT16_C( 21 ), /* Next */
            UINT16_C( 10 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[21] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 10 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[22] */
            UINT16_C( 23 ), /* Next */
            UINT16_C( 11 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[23] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 11 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[24] */
            UINT16_C( 25 ), /* Next */
            UINT16_C( 12 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[25] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 12 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[26] */
            UINT16_C( 27 ), /* Next */
            UINT16_C( 13 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[27] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 13 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[28] */
            UINT16_C( 29 ), /* Next */
            UINT16_C( 14 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[29] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 14 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[30] */
            UINT16_C( 31 ), /* Next */
            UINT16_C( 15 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[31] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 15 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[32] */
            UINT16_C( 33 ), /* Next */
            UINT16_C( 16 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[33] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 16 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[34] */
            UINT16_C( 35 ), /* Next */
            UINT16_C( 17 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[35] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 17 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[36] */
            UINT16_C( 37 ), /* Next */
            UINT16_C( 18 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[37] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 18 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[38] */
            UINT16_C( 39 ), /* Next */
            UINT16_C( 19 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[39] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 19 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[40] */
            UINT16_C( 41 ), /* Next */
            UINT16_C( 20 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[41] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 20 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[42] */
            UINT16_C( 43 ), /* Next */
            UINT16_C( 21 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[43] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 21 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[44] */
            UINT16_C( 45 ), /* Next */
            UINT16_C( 22 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[45] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 22 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[46] */
            UINT16_C( 47 ), /* Next */
            UINT16_C( 23 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[47] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 23 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[48] */
            UINT16_C( 49 ), /* Next */
            UINT16_C( 24 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[49] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 24 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[50] */
            UINT16_C( 51 ), /* Next */
            UINT16_C( 25 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[51] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 25 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[52] */
            UINT16_C( 53 ), /* Next */
            UINT16_C( 26 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[53] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 26 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[54] */
            UINT16_C( 55 ), /* Next */
            UINT16_C( 27 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[55] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 27 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[56] */
            UINT16_C( 57 ), /* Next */
            UINT16_C( 28 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[57] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 28 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[58] */
            UINT16_C( 59 ), /* Next */
            UINT16_C( 29 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[59] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 29 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[60] */
            UINT16_C( 61 ), /* Next */
            UINT16_C( 30 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[61] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 30 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[62] */
            UINT16_C( 63 ), /* Next */
            UINT16_C( 31 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[63] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 31 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[64] */
            UINT16_C( 65 ), /* Next */
            UINT16_C( 32 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[65] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 32 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[66] */
            UINT16_C( 67 ), /* Next */
            UINT16_C( 33 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[67] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 33 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[68] */
            UINT16_C( 69 ), /* Next */
            UINT16_C( 34 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[69] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 34 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[70] */
            UINT16_C( 71 ), /* Next */
            UINT16_C( 35 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[71] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 35 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[72] */
            UINT16_C( 73 ), /* Next */
            UINT16_C( 36 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[73] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 36 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[74] */
            UINT16_C( 75 ), /* Next */
            UINT16_C( 37 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[75] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 37 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[76] */
            UINT16_C( 77 ), /* Next */
            UINT16_C( 38 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[77] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 38 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[78] */
            UINT16_C( 79 ), /* Next */
            UINT16_C( 39 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[79] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 39 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[80] */
            UINT16_C( 81 ), /* Next */
            UINT16_C( 40 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[81] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 40 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[82] */
            UINT16_C( 83 ), /* Next */
            UINT16_C( 41 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[83] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 41 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[84] */
            UINT16_C( 85 ), /* Next */
            UINT16_C( 42 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[85] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 42 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[86] */
            UINT16_C( 87 ), /* Next */
            UINT16_C( 43 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[87] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 43 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[88] */
            UINT16_C( 89 ), /* Next */
            UINT16_C( 44 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[89] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 44 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[90] */
            UINT16_C( 91 ), /* Next */
            UINT16_C( 45 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[91] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 45 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[92] */
            UINT16_C( 93 ), /* Next */
            UINT16_C( 46 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[93] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 46 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[94] */
            UINT16_C( 95 ), /* Next */
            UINT16_C( 47 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[95] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 47 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[96] */
            UINT16_C( 97 ), /* Next */
            UINT16_C( 48 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[97] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 48 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[98] */
            UINT16_C( 99 ), /* Next */
            UINT16_C( 49 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[99] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 49 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[100] */
            UINT16_C( 101 ), /* Next */
            UINT16_C( 50 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[101] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 50 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[102] */
            UINT16_C( 103 ), /* Next */
            UINT16_C( 51 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[103] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 51 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[104] */
            UINT16_C( 105 ), /* Next */
            UINT16_C( 52 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[105] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 52 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[106] */
            UINT16_C( 107 ), /* Next */
            UINT16_C( 53 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[107] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 53 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[108] */
            UINT16_C( 109 ), /* Next */
            UINT16_C( 54 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[109] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 54 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[110] */
            UINT16_C( 111 ), /* Next */
            UINT16_C( 55 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[111] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 55 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        },
        { /* RxNPduTable[112] */
            UINT16_C( 113 ), /* Next */
            UINT16_C( 56 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 1 ) /* Direction */
        },
        { /* RxNPduTable[113] */
            UINT16_C( 0 ), /* Next */
            UINT16_C( 56 ), /* Index */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* N_SA_AE */
            UINT8_C( 0 ) /* Direction */
        }
    },
    { /* RxNSduConfig */
        { /* RxNSduConfig[0] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 0 ), /* NPduConfIdFc */
            UINT16_C( 143 ), /* LSduIdFc */
            UINT16_C( 0 ), /* IPduId */
            UINT16_C( 0 ), /* NPduIdxF */
            UINT8_C( 69 ), /* Channel */
            UINT8_C( 0 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[1] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 1 ), /* NPduConfIdFc */
            UINT16_C( 144 ), /* LSduIdFc */
            UINT16_C( 1 ), /* IPduId */
            UINT16_C( 1 ), /* NPduIdxF */
            UINT8_C( 70 ), /* Channel */
            UINT8_C( 1 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[2] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 2 ), /* NPduConfIdFc */
            UINT16_C( 145 ), /* LSduIdFc */
            UINT16_C( 2 ), /* IPduId */
            UINT16_C( 2 ), /* NPduIdxF */
            UINT8_C( 71 ), /* Channel */
            UINT8_C( 2 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[3] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 3 ), /* NPduConfIdFc */
            UINT16_C( 146 ), /* LSduIdFc */
            UINT16_C( 3 ), /* IPduId */
            UINT16_C( 3 ), /* NPduIdxF */
            UINT8_C( 72 ), /* Channel */
            UINT8_C( 3 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[4] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 4 ), /* NPduConfIdFc */
            UINT16_C( 147 ), /* LSduIdFc */
            UINT16_C( 4 ), /* IPduId */
            UINT16_C( 4 ), /* NPduIdxF */
            UINT8_C( 73 ), /* Channel */
            UINT8_C( 4 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[5] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 5 ), /* NPduConfIdFc */
            UINT16_C( 148 ), /* LSduIdFc */
            UINT16_C( 5 ), /* IPduId */
            UINT16_C( 5 ), /* NPduIdxF */
            UINT8_C( 74 ), /* Channel */
            UINT8_C( 5 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[6] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 6 ), /* NPduConfIdFc */
            UINT16_C( 149 ), /* LSduIdFc */
            UINT16_C( 6 ), /* IPduId */
            UINT16_C( 6 ), /* NPduIdxF */
            UINT8_C( 75 ), /* Channel */
            UINT8_C( 6 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[7] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 7 ), /* NPduConfIdFc */
            UINT16_C( 150 ), /* LSduIdFc */
            UINT16_C( 7 ), /* IPduId */
            UINT16_C( 7 ), /* NPduIdxF */
            UINT8_C( 76 ), /* Channel */
            UINT8_C( 7 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[8] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 8 ), /* NPduConfIdFc */
            UINT16_C( 151 ), /* LSduIdFc */
            UINT16_C( 8 ), /* IPduId */
            UINT16_C( 8 ), /* NPduIdxF */
            UINT8_C( 77 ), /* Channel */
            UINT8_C( 8 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[9] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 9 ), /* NPduConfIdFc */
            UINT16_C( 152 ), /* LSduIdFc */
            UINT16_C( 9 ), /* IPduId */
            UINT16_C( 9 ), /* NPduIdxF */
            UINT8_C( 78 ), /* Channel */
            UINT8_C( 9 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[10] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 10 ), /* NPduConfIdFc */
            UINT16_C( 153 ), /* LSduIdFc */
            UINT16_C( 10 ), /* IPduId */
            UINT16_C( 10 ), /* NPduIdxF */
            UINT8_C( 79 ), /* Channel */
            UINT8_C( 10 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[11] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 11 ), /* NPduConfIdFc */
            UINT16_C( 154 ), /* LSduIdFc */
            UINT16_C( 11 ), /* IPduId */
            UINT16_C( 11 ), /* NPduIdxF */
            UINT8_C( 80 ), /* Channel */
            UINT8_C( 11 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[12] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 12 ), /* NPduConfIdFc */
            UINT16_C( 155 ), /* LSduIdFc */
            UINT16_C( 12 ), /* IPduId */
            UINT16_C( 12 ), /* NPduIdxF */
            UINT8_C( 81 ), /* Channel */
            UINT8_C( 12 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[13] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 13 ), /* NPduConfIdFc */
            UINT16_C( 156 ), /* LSduIdFc */
            UINT16_C( 13 ), /* IPduId */
            UINT16_C( 13 ), /* NPduIdxF */
            UINT8_C( 82 ), /* Channel */
            UINT8_C( 13 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[14] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 14 ), /* NPduConfIdFc */
            UINT16_C( 157 ), /* LSduIdFc */
            UINT16_C( 14 ), /* IPduId */
            UINT16_C( 14 ), /* NPduIdxF */
            UINT8_C( 83 ), /* Channel */
            UINT8_C( 14 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[15] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 15 ), /* NPduConfIdFc */
            UINT16_C( 158 ), /* LSduIdFc */
            UINT16_C( 15 ), /* IPduId */
            UINT16_C( 15 ), /* NPduIdxF */
            UINT8_C( 84 ), /* Channel */
            UINT8_C( 15 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[16] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 16 ), /* NPduConfIdFc */
            UINT16_C( 159 ), /* LSduIdFc */
            UINT16_C( 16 ), /* IPduId */
            UINT16_C( 16 ), /* NPduIdxF */
            UINT8_C( 85 ), /* Channel */
            UINT8_C( 16 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[17] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 17 ), /* NPduConfIdFc */
            UINT16_C( 160 ), /* LSduIdFc */
            UINT16_C( 17 ), /* IPduId */
            UINT16_C( 17 ), /* NPduIdxF */
            UINT8_C( 86 ), /* Channel */
            UINT8_C( 17 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[18] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 18 ), /* NPduConfIdFc */
            UINT16_C( 161 ), /* LSduIdFc */
            UINT16_C( 18 ), /* IPduId */
            UINT16_C( 18 ), /* NPduIdxF */
            UINT8_C( 87 ), /* Channel */
            UINT8_C( 18 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[19] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 19 ), /* NPduConfIdFc */
            UINT16_C( 162 ), /* LSduIdFc */
            UINT16_C( 19 ), /* IPduId */
            UINT16_C( 19 ), /* NPduIdxF */
            UINT8_C( 88 ), /* Channel */
            UINT8_C( 19 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[20] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 20 ), /* NPduConfIdFc */
            UINT16_C( 163 ), /* LSduIdFc */
            UINT16_C( 20 ), /* IPduId */
            UINT16_C( 20 ), /* NPduIdxF */
            UINT8_C( 89 ), /* Channel */
            UINT8_C( 20 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[21] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 21 ), /* NPduConfIdFc */
            UINT16_C( 164 ), /* LSduIdFc */
            UINT16_C( 21 ), /* IPduId */
            UINT16_C( 21 ), /* NPduIdxF */
            UINT8_C( 90 ), /* Channel */
            UINT8_C( 21 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[22] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 22 ), /* NPduConfIdFc */
            UINT16_C( 165 ), /* LSduIdFc */
            UINT16_C( 22 ), /* IPduId */
            UINT16_C( 22 ), /* NPduIdxF */
            UINT8_C( 91 ), /* Channel */
            UINT8_C( 22 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[23] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 23 ), /* NPduConfIdFc */
            UINT16_C( 166 ), /* LSduIdFc */
            UINT16_C( 23 ), /* IPduId */
            UINT16_C( 23 ), /* NPduIdxF */
            UINT8_C( 92 ), /* Channel */
            UINT8_C( 23 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[24] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 24 ), /* NPduConfIdFc */
            UINT16_C( 167 ), /* LSduIdFc */
            UINT16_C( 24 ), /* IPduId */
            UINT16_C( 24 ), /* NPduIdxF */
            UINT8_C( 93 ), /* Channel */
            UINT8_C( 24 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[25] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 25 ), /* NPduConfIdFc */
            UINT16_C( 168 ), /* LSduIdFc */
            UINT16_C( 25 ), /* IPduId */
            UINT16_C( 25 ), /* NPduIdxF */
            UINT8_C( 94 ), /* Channel */
            UINT8_C( 25 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[26] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 26 ), /* NPduConfIdFc */
            UINT16_C( 169 ), /* LSduIdFc */
            UINT16_C( 26 ), /* IPduId */
            UINT16_C( 26 ), /* NPduIdxF */
            UINT8_C( 95 ), /* Channel */
            UINT8_C( 26 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[27] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 27 ), /* NPduConfIdFc */
            UINT16_C( 170 ), /* LSduIdFc */
            UINT16_C( 27 ), /* IPduId */
            UINT16_C( 27 ), /* NPduIdxF */
            UINT8_C( 96 ), /* Channel */
            UINT8_C( 27 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[28] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 28 ), /* NPduConfIdFc */
            UINT16_C( 171 ), /* LSduIdFc */
            UINT16_C( 28 ), /* IPduId */
            UINT16_C( 28 ), /* NPduIdxF */
            UINT8_C( 97 ), /* Channel */
            UINT8_C( 28 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[29] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 29 ), /* NPduConfIdFc */
            UINT16_C( 172 ), /* LSduIdFc */
            UINT16_C( 29 ), /* IPduId */
            UINT16_C( 29 ), /* NPduIdxF */
            UINT8_C( 98 ), /* Channel */
            UINT8_C( 29 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[30] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 30 ), /* NPduConfIdFc */
            UINT16_C( 173 ), /* LSduIdFc */
            UINT16_C( 30 ), /* IPduId */
            UINT16_C( 30 ), /* NPduIdxF */
            UINT8_C( 99 ), /* Channel */
            UINT8_C( 30 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[31] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 31 ), /* NPduConfIdFc */
            UINT16_C( 174 ), /* LSduIdFc */
            UINT16_C( 31 ), /* IPduId */
            UINT16_C( 31 ), /* NPduIdxF */
            UINT8_C( 100 ), /* Channel */
            UINT8_C( 31 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[32] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 32 ), /* NPduConfIdFc */
            UINT16_C( 175 ), /* LSduIdFc */
            UINT16_C( 32 ), /* IPduId */
            UINT16_C( 32 ), /* NPduIdxF */
            UINT8_C( 101 ), /* Channel */
            UINT8_C( 32 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[33] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 33 ), /* NPduConfIdFc */
            UINT16_C( 176 ), /* LSduIdFc */
            UINT16_C( 33 ), /* IPduId */
            UINT16_C( 33 ), /* NPduIdxF */
            UINT8_C( 102 ), /* Channel */
            UINT8_C( 33 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[34] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 34 ), /* NPduConfIdFc */
            UINT16_C( 177 ), /* LSduIdFc */
            UINT16_C( 34 ), /* IPduId */
            UINT16_C( 34 ), /* NPduIdxF */
            UINT8_C( 103 ), /* Channel */
            UINT8_C( 34 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[35] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 35 ), /* NPduConfIdFc */
            UINT16_C( 178 ), /* LSduIdFc */
            UINT16_C( 35 ), /* IPduId */
            UINT16_C( 35 ), /* NPduIdxF */
            UINT8_C( 104 ), /* Channel */
            UINT8_C( 35 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[36] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 36 ), /* NPduConfIdFc */
            UINT16_C( 179 ), /* LSduIdFc */
            UINT16_C( 36 ), /* IPduId */
            UINT16_C( 36 ), /* NPduIdxF */
            UINT8_C( 105 ), /* Channel */
            UINT8_C( 36 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[37] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 37 ), /* NPduConfIdFc */
            UINT16_C( 180 ), /* LSduIdFc */
            UINT16_C( 37 ), /* IPduId */
            UINT16_C( 37 ), /* NPduIdxF */
            UINT8_C( 106 ), /* Channel */
            UINT8_C( 37 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[38] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 38 ), /* NPduConfIdFc */
            UINT16_C( 181 ), /* LSduIdFc */
            UINT16_C( 38 ), /* IPduId */
            UINT16_C( 38 ), /* NPduIdxF */
            UINT8_C( 107 ), /* Channel */
            UINT8_C( 38 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[39] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 39 ), /* NPduConfIdFc */
            UINT16_C( 182 ), /* LSduIdFc */
            UINT16_C( 39 ), /* IPduId */
            UINT16_C( 39 ), /* NPduIdxF */
            UINT8_C( 108 ), /* Channel */
            UINT8_C( 39 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[40] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 40 ), /* NPduConfIdFc */
            UINT16_C( 183 ), /* LSduIdFc */
            UINT16_C( 40 ), /* IPduId */
            UINT16_C( 40 ), /* NPduIdxF */
            UINT8_C( 109 ), /* Channel */
            UINT8_C( 40 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[41] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 41 ), /* NPduConfIdFc */
            UINT16_C( 184 ), /* LSduIdFc */
            UINT16_C( 41 ), /* IPduId */
            UINT16_C( 41 ), /* NPduIdxF */
            UINT8_C( 110 ), /* Channel */
            UINT8_C( 41 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[42] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 42 ), /* NPduConfIdFc */
            UINT16_C( 185 ), /* LSduIdFc */
            UINT16_C( 42 ), /* IPduId */
            UINT16_C( 42 ), /* NPduIdxF */
            UINT8_C( 111 ), /* Channel */
            UINT8_C( 42 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[43] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 43 ), /* NPduConfIdFc */
            UINT16_C( 186 ), /* LSduIdFc */
            UINT16_C( 43 ), /* IPduId */
            UINT16_C( 43 ), /* NPduIdxF */
            UINT8_C( 112 ), /* Channel */
            UINT8_C( 43 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[44] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 44 ), /* NPduConfIdFc */
            UINT16_C( 187 ), /* LSduIdFc */
            UINT16_C( 44 ), /* IPduId */
            UINT16_C( 44 ), /* NPduIdxF */
            UINT8_C( 113 ), /* Channel */
            UINT8_C( 44 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[45] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 45 ), /* NPduConfIdFc */
            UINT16_C( 188 ), /* LSduIdFc */
            UINT16_C( 45 ), /* IPduId */
            UINT16_C( 45 ), /* NPduIdxF */
            UINT8_C( 114 ), /* Channel */
            UINT8_C( 45 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[46] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 46 ), /* NPduConfIdFc */
            UINT16_C( 189 ), /* LSduIdFc */
            UINT16_C( 46 ), /* IPduId */
            UINT16_C( 46 ), /* NPduIdxF */
            UINT8_C( 115 ), /* Channel */
            UINT8_C( 46 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[47] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 47 ), /* NPduConfIdFc */
            UINT16_C( 190 ), /* LSduIdFc */
            UINT16_C( 47 ), /* IPduId */
            UINT16_C( 47 ), /* NPduIdxF */
            UINT8_C( 116 ), /* Channel */
            UINT8_C( 47 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[48] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 48 ), /* NPduConfIdFc */
            UINT16_C( 191 ), /* LSduIdFc */
            UINT16_C( 48 ), /* IPduId */
            UINT16_C( 48 ), /* NPduIdxF */
            UINT8_C( 117 ), /* Channel */
            UINT8_C( 48 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[49] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 49 ), /* NPduConfIdFc */
            UINT16_C( 192 ), /* LSduIdFc */
            UINT16_C( 49 ), /* IPduId */
            UINT16_C( 49 ), /* NPduIdxF */
            UINT8_C( 118 ), /* Channel */
            UINT8_C( 49 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[50] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 50 ), /* NPduConfIdFc */
            UINT16_C( 193 ), /* LSduIdFc */
            UINT16_C( 50 ), /* IPduId */
            UINT16_C( 50 ), /* NPduIdxF */
            UINT8_C( 119 ), /* Channel */
            UINT8_C( 50 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[51] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 51 ), /* NPduConfIdFc */
            UINT16_C( 194 ), /* LSduIdFc */
            UINT16_C( 51 ), /* IPduId */
            UINT16_C( 51 ), /* NPduIdxF */
            UINT8_C( 120 ), /* Channel */
            UINT8_C( 51 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[52] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 52 ), /* NPduConfIdFc */
            UINT16_C( 195 ), /* LSduIdFc */
            UINT16_C( 52 ), /* IPduId */
            UINT16_C( 52 ), /* NPduIdxF */
            UINT8_C( 121 ), /* Channel */
            UINT8_C( 52 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[53] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 53 ), /* NPduConfIdFc */
            UINT16_C( 196 ), /* LSduIdFc */
            UINT16_C( 53 ), /* IPduId */
            UINT16_C( 53 ), /* NPduIdxF */
            UINT8_C( 122 ), /* Channel */
            UINT8_C( 53 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[54] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 54 ), /* NPduConfIdFc */
            UINT16_C( 197 ), /* LSduIdFc */
            UINT16_C( 54 ), /* IPduId */
            UINT16_C( 54 ), /* NPduIdxF */
            UINT8_C( 123 ), /* Channel */
            UINT8_C( 54 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[55] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 55 ), /* NPduConfIdFc */
            UINT16_C( 198 ), /* LSduIdFc */
            UINT16_C( 55 ), /* IPduId */
            UINT16_C( 55 ), /* NPduIdxF */
            UINT8_C( 124 ), /* Channel */
            UINT8_C( 55 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        },
        { /* RxNSduConfig[56] */
            UINT16_C( 14 ), /* N_Ar */
            UINT16_C( 14 ), /* N_Br */
            UINT16_C( 30 ), /* N_Cr */
            UINT16_C( 56 ), /* NPduConfIdFc */
            UINT16_C( 199 ), /* LSduIdFc */
            UINT16_C( 56 ), /* IPduId */
            UINT16_C( 56 ), /* NPduIdxF */
            UINT8_C( 125 ), /* Channel */
            UINT8_C( 56 ), /* Tx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* FcCanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* WftMax */
            UINT8_C( 16 ), /* BS */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 0 ), /* STmin */
            UINT8_C( 64 ) /* NPduLength */
        }
    },
    { /* TxNSduConfig */
        { /* TxNSduConfig[0] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 0 ), /* NPduIdFc */
            UINT16_C( 0 ), /* NPduConfIdxF */
            UINT16_C( 143 ), /* LSduIdxF */
            UINT16_C( 0 ), /* IPduConfId */
            UINT8_C( 0 ), /* Channel */
            UINT8_C( 69 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[1] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 1 ), /* NPduIdFc */
            UINT16_C( 1 ), /* NPduConfIdxF */
            UINT16_C( 144 ), /* LSduIdxF */
            UINT16_C( 1 ), /* IPduConfId */
            UINT8_C( 1 ), /* Channel */
            UINT8_C( 70 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[2] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 2 ), /* NPduIdFc */
            UINT16_C( 2 ), /* NPduConfIdxF */
            UINT16_C( 145 ), /* LSduIdxF */
            UINT16_C( 2 ), /* IPduConfId */
            UINT8_C( 2 ), /* Channel */
            UINT8_C( 71 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[3] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 3 ), /* NPduIdFc */
            UINT16_C( 3 ), /* NPduConfIdxF */
            UINT16_C( 146 ), /* LSduIdxF */
            UINT16_C( 3 ), /* IPduConfId */
            UINT8_C( 3 ), /* Channel */
            UINT8_C( 72 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[4] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 4 ), /* NPduIdFc */
            UINT16_C( 4 ), /* NPduConfIdxF */
            UINT16_C( 147 ), /* LSduIdxF */
            UINT16_C( 4 ), /* IPduConfId */
            UINT8_C( 4 ), /* Channel */
            UINT8_C( 73 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[5] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 5 ), /* NPduIdFc */
            UINT16_C( 5 ), /* NPduConfIdxF */
            UINT16_C( 148 ), /* LSduIdxF */
            UINT16_C( 5 ), /* IPduConfId */
            UINT8_C( 5 ), /* Channel */
            UINT8_C( 74 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[6] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 6 ), /* NPduIdFc */
            UINT16_C( 6 ), /* NPduConfIdxF */
            UINT16_C( 149 ), /* LSduIdxF */
            UINT16_C( 6 ), /* IPduConfId */
            UINT8_C( 6 ), /* Channel */
            UINT8_C( 75 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[7] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 7 ), /* NPduIdFc */
            UINT16_C( 7 ), /* NPduConfIdxF */
            UINT16_C( 150 ), /* LSduIdxF */
            UINT16_C( 7 ), /* IPduConfId */
            UINT8_C( 7 ), /* Channel */
            UINT8_C( 76 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[8] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 8 ), /* NPduIdFc */
            UINT16_C( 8 ), /* NPduConfIdxF */
            UINT16_C( 151 ), /* LSduIdxF */
            UINT16_C( 8 ), /* IPduConfId */
            UINT8_C( 8 ), /* Channel */
            UINT8_C( 77 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[9] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 9 ), /* NPduIdFc */
            UINT16_C( 9 ), /* NPduConfIdxF */
            UINT16_C( 152 ), /* LSduIdxF */
            UINT16_C( 9 ), /* IPduConfId */
            UINT8_C( 9 ), /* Channel */
            UINT8_C( 78 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[10] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 10 ), /* NPduIdFc */
            UINT16_C( 10 ), /* NPduConfIdxF */
            UINT16_C( 153 ), /* LSduIdxF */
            UINT16_C( 10 ), /* IPduConfId */
            UINT8_C( 10 ), /* Channel */
            UINT8_C( 79 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[11] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 11 ), /* NPduIdFc */
            UINT16_C( 11 ), /* NPduConfIdxF */
            UINT16_C( 154 ), /* LSduIdxF */
            UINT16_C( 11 ), /* IPduConfId */
            UINT8_C( 11 ), /* Channel */
            UINT8_C( 80 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[12] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 12 ), /* NPduIdFc */
            UINT16_C( 12 ), /* NPduConfIdxF */
            UINT16_C( 155 ), /* LSduIdxF */
            UINT16_C( 12 ), /* IPduConfId */
            UINT8_C( 12 ), /* Channel */
            UINT8_C( 81 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[13] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 13 ), /* NPduIdFc */
            UINT16_C( 13 ), /* NPduConfIdxF */
            UINT16_C( 156 ), /* LSduIdxF */
            UINT16_C( 13 ), /* IPduConfId */
            UINT8_C( 13 ), /* Channel */
            UINT8_C( 82 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[14] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 14 ), /* NPduIdFc */
            UINT16_C( 14 ), /* NPduConfIdxF */
            UINT16_C( 157 ), /* LSduIdxF */
            UINT16_C( 14 ), /* IPduConfId */
            UINT8_C( 14 ), /* Channel */
            UINT8_C( 83 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[15] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 15 ), /* NPduIdFc */
            UINT16_C( 15 ), /* NPduConfIdxF */
            UINT16_C( 158 ), /* LSduIdxF */
            UINT16_C( 15 ), /* IPduConfId */
            UINT8_C( 15 ), /* Channel */
            UINT8_C( 84 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[16] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 16 ), /* NPduIdFc */
            UINT16_C( 16 ), /* NPduConfIdxF */
            UINT16_C( 159 ), /* LSduIdxF */
            UINT16_C( 16 ), /* IPduConfId */
            UINT8_C( 16 ), /* Channel */
            UINT8_C( 85 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[17] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 17 ), /* NPduIdFc */
            UINT16_C( 17 ), /* NPduConfIdxF */
            UINT16_C( 160 ), /* LSduIdxF */
            UINT16_C( 17 ), /* IPduConfId */
            UINT8_C( 17 ), /* Channel */
            UINT8_C( 86 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[18] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 18 ), /* NPduIdFc */
            UINT16_C( 18 ), /* NPduConfIdxF */
            UINT16_C( 161 ), /* LSduIdxF */
            UINT16_C( 18 ), /* IPduConfId */
            UINT8_C( 18 ), /* Channel */
            UINT8_C( 87 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[19] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 19 ), /* NPduIdFc */
            UINT16_C( 19 ), /* NPduConfIdxF */
            UINT16_C( 162 ), /* LSduIdxF */
            UINT16_C( 19 ), /* IPduConfId */
            UINT8_C( 19 ), /* Channel */
            UINT8_C( 88 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[20] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 20 ), /* NPduIdFc */
            UINT16_C( 20 ), /* NPduConfIdxF */
            UINT16_C( 163 ), /* LSduIdxF */
            UINT16_C( 20 ), /* IPduConfId */
            UINT8_C( 20 ), /* Channel */
            UINT8_C( 89 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[21] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 21 ), /* NPduIdFc */
            UINT16_C( 21 ), /* NPduConfIdxF */
            UINT16_C( 164 ), /* LSduIdxF */
            UINT16_C( 21 ), /* IPduConfId */
            UINT8_C( 21 ), /* Channel */
            UINT8_C( 90 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[22] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 22 ), /* NPduIdFc */
            UINT16_C( 22 ), /* NPduConfIdxF */
            UINT16_C( 165 ), /* LSduIdxF */
            UINT16_C( 22 ), /* IPduConfId */
            UINT8_C( 22 ), /* Channel */
            UINT8_C( 91 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[23] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 23 ), /* NPduIdFc */
            UINT16_C( 23 ), /* NPduConfIdxF */
            UINT16_C( 166 ), /* LSduIdxF */
            UINT16_C( 23 ), /* IPduConfId */
            UINT8_C( 23 ), /* Channel */
            UINT8_C( 92 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[24] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 24 ), /* NPduIdFc */
            UINT16_C( 24 ), /* NPduConfIdxF */
            UINT16_C( 167 ), /* LSduIdxF */
            UINT16_C( 24 ), /* IPduConfId */
            UINT8_C( 24 ), /* Channel */
            UINT8_C( 93 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[25] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 25 ), /* NPduIdFc */
            UINT16_C( 25 ), /* NPduConfIdxF */
            UINT16_C( 168 ), /* LSduIdxF */
            UINT16_C( 25 ), /* IPduConfId */
            UINT8_C( 25 ), /* Channel */
            UINT8_C( 94 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[26] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 26 ), /* NPduIdFc */
            UINT16_C( 26 ), /* NPduConfIdxF */
            UINT16_C( 169 ), /* LSduIdxF */
            UINT16_C( 26 ), /* IPduConfId */
            UINT8_C( 26 ), /* Channel */
            UINT8_C( 95 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[27] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 27 ), /* NPduIdFc */
            UINT16_C( 27 ), /* NPduConfIdxF */
            UINT16_C( 170 ), /* LSduIdxF */
            UINT16_C( 27 ), /* IPduConfId */
            UINT8_C( 27 ), /* Channel */
            UINT8_C( 96 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[28] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 28 ), /* NPduIdFc */
            UINT16_C( 28 ), /* NPduConfIdxF */
            UINT16_C( 171 ), /* LSduIdxF */
            UINT16_C( 28 ), /* IPduConfId */
            UINT8_C( 28 ), /* Channel */
            UINT8_C( 97 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[29] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 29 ), /* NPduIdFc */
            UINT16_C( 29 ), /* NPduConfIdxF */
            UINT16_C( 172 ), /* LSduIdxF */
            UINT16_C( 29 ), /* IPduConfId */
            UINT8_C( 29 ), /* Channel */
            UINT8_C( 98 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[30] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 30 ), /* NPduIdFc */
            UINT16_C( 30 ), /* NPduConfIdxF */
            UINT16_C( 173 ), /* LSduIdxF */
            UINT16_C( 30 ), /* IPduConfId */
            UINT8_C( 30 ), /* Channel */
            UINT8_C( 99 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[31] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 31 ), /* NPduIdFc */
            UINT16_C( 31 ), /* NPduConfIdxF */
            UINT16_C( 174 ), /* LSduIdxF */
            UINT16_C( 31 ), /* IPduConfId */
            UINT8_C( 31 ), /* Channel */
            UINT8_C( 100 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[32] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 32 ), /* NPduIdFc */
            UINT16_C( 32 ), /* NPduConfIdxF */
            UINT16_C( 175 ), /* LSduIdxF */
            UINT16_C( 32 ), /* IPduConfId */
            UINT8_C( 32 ), /* Channel */
            UINT8_C( 101 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[33] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 33 ), /* NPduIdFc */
            UINT16_C( 33 ), /* NPduConfIdxF */
            UINT16_C( 176 ), /* LSduIdxF */
            UINT16_C( 33 ), /* IPduConfId */
            UINT8_C( 33 ), /* Channel */
            UINT8_C( 102 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[34] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 34 ), /* NPduIdFc */
            UINT16_C( 34 ), /* NPduConfIdxF */
            UINT16_C( 177 ), /* LSduIdxF */
            UINT16_C( 34 ), /* IPduConfId */
            UINT8_C( 34 ), /* Channel */
            UINT8_C( 103 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[35] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 35 ), /* NPduIdFc */
            UINT16_C( 35 ), /* NPduConfIdxF */
            UINT16_C( 178 ), /* LSduIdxF */
            UINT16_C( 35 ), /* IPduConfId */
            UINT8_C( 35 ), /* Channel */
            UINT8_C( 104 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[36] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 36 ), /* NPduIdFc */
            UINT16_C( 36 ), /* NPduConfIdxF */
            UINT16_C( 179 ), /* LSduIdxF */
            UINT16_C( 36 ), /* IPduConfId */
            UINT8_C( 36 ), /* Channel */
            UINT8_C( 105 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[37] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 37 ), /* NPduIdFc */
            UINT16_C( 37 ), /* NPduConfIdxF */
            UINT16_C( 180 ), /* LSduIdxF */
            UINT16_C( 37 ), /* IPduConfId */
            UINT8_C( 37 ), /* Channel */
            UINT8_C( 106 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[38] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 38 ), /* NPduIdFc */
            UINT16_C( 38 ), /* NPduConfIdxF */
            UINT16_C( 181 ), /* LSduIdxF */
            UINT16_C( 38 ), /* IPduConfId */
            UINT8_C( 38 ), /* Channel */
            UINT8_C( 107 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[39] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 39 ), /* NPduIdFc */
            UINT16_C( 39 ), /* NPduConfIdxF */
            UINT16_C( 182 ), /* LSduIdxF */
            UINT16_C( 39 ), /* IPduConfId */
            UINT8_C( 39 ), /* Channel */
            UINT8_C( 108 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[40] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 40 ), /* NPduIdFc */
            UINT16_C( 40 ), /* NPduConfIdxF */
            UINT16_C( 183 ), /* LSduIdxF */
            UINT16_C( 40 ), /* IPduConfId */
            UINT8_C( 40 ), /* Channel */
            UINT8_C( 109 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[41] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 41 ), /* NPduIdFc */
            UINT16_C( 41 ), /* NPduConfIdxF */
            UINT16_C( 184 ), /* LSduIdxF */
            UINT16_C( 41 ), /* IPduConfId */
            UINT8_C( 41 ), /* Channel */
            UINT8_C( 110 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[42] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 42 ), /* NPduIdFc */
            UINT16_C( 42 ), /* NPduConfIdxF */
            UINT16_C( 185 ), /* LSduIdxF */
            UINT16_C( 42 ), /* IPduConfId */
            UINT8_C( 42 ), /* Channel */
            UINT8_C( 111 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[43] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 43 ), /* NPduIdFc */
            UINT16_C( 43 ), /* NPduConfIdxF */
            UINT16_C( 186 ), /* LSduIdxF */
            UINT16_C( 43 ), /* IPduConfId */
            UINT8_C( 43 ), /* Channel */
            UINT8_C( 112 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[44] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 44 ), /* NPduIdFc */
            UINT16_C( 44 ), /* NPduConfIdxF */
            UINT16_C( 187 ), /* LSduIdxF */
            UINT16_C( 44 ), /* IPduConfId */
            UINT8_C( 44 ), /* Channel */
            UINT8_C( 113 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[45] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 45 ), /* NPduIdFc */
            UINT16_C( 45 ), /* NPduConfIdxF */
            UINT16_C( 188 ), /* LSduIdxF */
            UINT16_C( 45 ), /* IPduConfId */
            UINT8_C( 45 ), /* Channel */
            UINT8_C( 114 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[46] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 46 ), /* NPduIdFc */
            UINT16_C( 46 ), /* NPduConfIdxF */
            UINT16_C( 189 ), /* LSduIdxF */
            UINT16_C( 46 ), /* IPduConfId */
            UINT8_C( 46 ), /* Channel */
            UINT8_C( 115 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[47] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 47 ), /* NPduIdFc */
            UINT16_C( 47 ), /* NPduConfIdxF */
            UINT16_C( 190 ), /* LSduIdxF */
            UINT16_C( 47 ), /* IPduConfId */
            UINT8_C( 47 ), /* Channel */
            UINT8_C( 116 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[48] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 48 ), /* NPduIdFc */
            UINT16_C( 48 ), /* NPduConfIdxF */
            UINT16_C( 191 ), /* LSduIdxF */
            UINT16_C( 48 ), /* IPduConfId */
            UINT8_C( 48 ), /* Channel */
            UINT8_C( 117 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[49] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 49 ), /* NPduIdFc */
            UINT16_C( 49 ), /* NPduConfIdxF */
            UINT16_C( 192 ), /* LSduIdxF */
            UINT16_C( 49 ), /* IPduConfId */
            UINT8_C( 49 ), /* Channel */
            UINT8_C( 118 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[50] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 50 ), /* NPduIdFc */
            UINT16_C( 50 ), /* NPduConfIdxF */
            UINT16_C( 193 ), /* LSduIdxF */
            UINT16_C( 50 ), /* IPduConfId */
            UINT8_C( 50 ), /* Channel */
            UINT8_C( 119 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[51] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 51 ), /* NPduIdFc */
            UINT16_C( 51 ), /* NPduConfIdxF */
            UINT16_C( 194 ), /* LSduIdxF */
            UINT16_C( 51 ), /* IPduConfId */
            UINT8_C( 51 ), /* Channel */
            UINT8_C( 120 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[52] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 52 ), /* NPduIdFc */
            UINT16_C( 52 ), /* NPduConfIdxF */
            UINT16_C( 195 ), /* LSduIdxF */
            UINT16_C( 52 ), /* IPduConfId */
            UINT8_C( 52 ), /* Channel */
            UINT8_C( 121 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[53] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 53 ), /* NPduIdFc */
            UINT16_C( 53 ), /* NPduConfIdxF */
            UINT16_C( 196 ), /* LSduIdxF */
            UINT16_C( 53 ), /* IPduConfId */
            UINT8_C( 53 ), /* Channel */
            UINT8_C( 122 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[54] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 54 ), /* NPduIdFc */
            UINT16_C( 54 ), /* NPduConfIdxF */
            UINT16_C( 197 ), /* LSduIdxF */
            UINT16_C( 54 ), /* IPduConfId */
            UINT8_C( 54 ), /* Channel */
            UINT8_C( 123 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[55] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 55 ), /* NPduIdFc */
            UINT16_C( 55 ), /* NPduConfIdxF */
            UINT16_C( 198 ), /* LSduIdxF */
            UINT16_C( 55 ), /* IPduConfId */
            UINT8_C( 55 ), /* Channel */
            UINT8_C( 124 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[56] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 30 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 56 ), /* NPduIdFc */
            UINT16_C( 56 ), /* NPduConfIdxF */
            UINT16_C( 199 ), /* LSduIdxF */
            UINT16_C( 56 ), /* IPduConfId */
            UINT8_C( 56 ), /* Channel */
            UINT8_C( 125 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 0 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 0 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[57] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 0 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 65535 ), /* NPduIdFc */
            UINT16_C( 57 ), /* NPduConfIdxF */
            UINT16_C( 200 ), /* LSduIdxF */
            UINT16_C( 57 ), /* IPduConfId */
            UINT8_C( 57 ), /* Channel */
            UINT8_C( 255 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 1 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 3 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 1 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[58] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 0 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 65535 ), /* NPduIdFc */
            UINT16_C( 58 ), /* NPduConfIdxF */
            UINT16_C( 201 ), /* LSduIdxF */
            UINT16_C( 58 ), /* IPduConfId */
            UINT8_C( 58 ), /* Channel */
            UINT8_C( 255 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 1 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 1 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[59] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 0 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 65535 ), /* NPduIdFc */
            UINT16_C( 59 ), /* NPduConfIdxF */
            UINT16_C( 202 ), /* LSduIdxF */
            UINT16_C( 59 ), /* IPduConfId */
            UINT8_C( 59 ), /* Channel */
            UINT8_C( 255 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 1 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 1 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[60] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 0 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 65535 ), /* NPduIdFc */
            UINT16_C( 60 ), /* NPduConfIdxF */
            UINT16_C( 203 ), /* LSduIdxF */
            UINT16_C( 60 ), /* IPduConfId */
            UINT8_C( 60 ), /* Channel */
            UINT8_C( 255 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 1 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 3 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 1 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[61] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 0 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 65535 ), /* NPduIdFc */
            UINT16_C( 61 ), /* NPduConfIdxF */
            UINT16_C( 204 ), /* LSduIdxF */
            UINT16_C( 61 ), /* IPduConfId */
            UINT8_C( 61 ), /* Channel */
            UINT8_C( 255 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 1 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 3 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 1 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[62] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 0 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 65535 ), /* NPduIdFc */
            UINT16_C( 62 ), /* NPduConfIdxF */
            UINT16_C( 205 ), /* LSduIdxF */
            UINT16_C( 62 ), /* IPduConfId */
            UINT8_C( 62 ), /* Channel */
            UINT8_C( 255 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 1 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 3 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 1 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[63] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 0 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 65535 ), /* NPduIdFc */
            UINT16_C( 63 ), /* NPduConfIdxF */
            UINT16_C( 206 ), /* LSduIdxF */
            UINT16_C( 63 ), /* IPduConfId */
            UINT8_C( 63 ), /* Channel */
            UINT8_C( 255 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 1 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 1 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[64] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 0 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 65535 ), /* NPduIdFc */
            UINT16_C( 64 ), /* NPduConfIdxF */
            UINT16_C( 207 ), /* LSduIdxF */
            UINT16_C( 64 ), /* IPduConfId */
            UINT8_C( 64 ), /* Channel */
            UINT8_C( 255 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 1 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 1 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[65] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 0 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 65535 ), /* NPduIdFc */
            UINT16_C( 65 ), /* NPduConfIdxF */
            UINT16_C( 208 ), /* LSduIdxF */
            UINT16_C( 65 ), /* IPduConfId */
            UINT8_C( 65 ), /* Channel */
            UINT8_C( 255 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 1 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 1 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[66] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 0 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 65535 ), /* NPduIdFc */
            UINT16_C( 66 ), /* NPduConfIdxF */
            UINT16_C( 209 ), /* LSduIdxF */
            UINT16_C( 66 ), /* IPduConfId */
            UINT8_C( 66 ), /* Channel */
            UINT8_C( 255 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 1 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 1 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[67] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 0 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 65535 ), /* NPduIdFc */
            UINT16_C( 67 ), /* NPduConfIdxF */
            UINT16_C( 210 ), /* LSduIdxF */
            UINT16_C( 67 ), /* IPduConfId */
            UINT8_C( 67 ), /* Channel */
            UINT8_C( 255 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 1 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 2 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 1 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        },
        { /* TxNSduConfig[68] */
            UINT16_C( 14 ), /* N_As */
            UINT16_C( 0 ), /* N_Bs */
            UINT16_C( 14 ), /* N_Cs */
            UINT16_C( 65535 ), /* NPduIdFc */
            UINT16_C( 68 ), /* NPduConfIdxF */
            UINT16_C( 211 ), /* LSduIdxF */
            UINT16_C( 68 ), /* IPduConfId */
            UINT8_C( 68 ), /* Channel */
            UINT8_C( 255 ), /* Rx_Channel */
            UINT8_C( 0 ), /* AddressingFormat */
            UINT8_C( 1 ), /* Tatype */
            UINT8_C( 1 ), /* PaddingActivation */
            UINT8_C( 3 ), /* CanIdType */
            UINT8_C( 0 ), /* N_TA_AE */
            UINT8_C( 1 ), /* ChannelMode */
            UINT8_C( 64 ), /* LSduMaxLength */
            BOOLEAN_C( 1 ) /* CanTpTc */
        }
    },
    { /* MfCtrConfig */
        { /* MfCtrConfig[0] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[1] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[2] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[3] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[4] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[5] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[6] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[7] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[8] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[9] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[10] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[11] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[12] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[13] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[14] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[15] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[16] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[17] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[18] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[19] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[20] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[21] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[22] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[23] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[24] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[25] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[26] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[27] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[28] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[29] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[30] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[31] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[32] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[33] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[34] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[35] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[36] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[37] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[38] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[39] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[40] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[41] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[42] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[43] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[44] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[45] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[46] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[47] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[48] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[49] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[50] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[51] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[52] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[53] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[54] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[55] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[56] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[57] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[58] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[59] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[60] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[61] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[62] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[63] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[64] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[65] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[66] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[67] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        },
        { /* MfCtrConfig[68] */
            UINT32_C( 5000000 ), /* Resolution */
            UINT8_C( 1 ) /* CallbackType */
        }
    },
    { /* TxNPduToTpChannel */
        { /* TxNPduToTpChannel[0] */
            UINT8_C( 0 ), /* Tx_Chan */
            UINT8_C( 69 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[1] */
            UINT8_C( 1 ), /* Tx_Chan */
            UINT8_C( 70 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[2] */
            UINT8_C( 2 ), /* Tx_Chan */
            UINT8_C( 71 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[3] */
            UINT8_C( 3 ), /* Tx_Chan */
            UINT8_C( 72 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[4] */
            UINT8_C( 4 ), /* Tx_Chan */
            UINT8_C( 73 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[5] */
            UINT8_C( 5 ), /* Tx_Chan */
            UINT8_C( 74 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[6] */
            UINT8_C( 6 ), /* Tx_Chan */
            UINT8_C( 75 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[7] */
            UINT8_C( 7 ), /* Tx_Chan */
            UINT8_C( 76 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[8] */
            UINT8_C( 8 ), /* Tx_Chan */
            UINT8_C( 77 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[9] */
            UINT8_C( 9 ), /* Tx_Chan */
            UINT8_C( 78 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[10] */
            UINT8_C( 10 ), /* Tx_Chan */
            UINT8_C( 79 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[11] */
            UINT8_C( 11 ), /* Tx_Chan */
            UINT8_C( 80 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[12] */
            UINT8_C( 12 ), /* Tx_Chan */
            UINT8_C( 81 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[13] */
            UINT8_C( 13 ), /* Tx_Chan */
            UINT8_C( 82 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[14] */
            UINT8_C( 14 ), /* Tx_Chan */
            UINT8_C( 83 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[15] */
            UINT8_C( 15 ), /* Tx_Chan */
            UINT8_C( 84 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[16] */
            UINT8_C( 16 ), /* Tx_Chan */
            UINT8_C( 85 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[17] */
            UINT8_C( 17 ), /* Tx_Chan */
            UINT8_C( 86 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[18] */
            UINT8_C( 18 ), /* Tx_Chan */
            UINT8_C( 87 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[19] */
            UINT8_C( 19 ), /* Tx_Chan */
            UINT8_C( 88 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[20] */
            UINT8_C( 20 ), /* Tx_Chan */
            UINT8_C( 89 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[21] */
            UINT8_C( 21 ), /* Tx_Chan */
            UINT8_C( 90 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[22] */
            UINT8_C( 22 ), /* Tx_Chan */
            UINT8_C( 91 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[23] */
            UINT8_C( 23 ), /* Tx_Chan */
            UINT8_C( 92 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[24] */
            UINT8_C( 24 ), /* Tx_Chan */
            UINT8_C( 93 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[25] */
            UINT8_C( 25 ), /* Tx_Chan */
            UINT8_C( 94 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[26] */
            UINT8_C( 26 ), /* Tx_Chan */
            UINT8_C( 95 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[27] */
            UINT8_C( 27 ), /* Tx_Chan */
            UINT8_C( 96 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[28] */
            UINT8_C( 28 ), /* Tx_Chan */
            UINT8_C( 97 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[29] */
            UINT8_C( 29 ), /* Tx_Chan */
            UINT8_C( 98 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[30] */
            UINT8_C( 30 ), /* Tx_Chan */
            UINT8_C( 99 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[31] */
            UINT8_C( 31 ), /* Tx_Chan */
            UINT8_C( 100 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[32] */
            UINT8_C( 32 ), /* Tx_Chan */
            UINT8_C( 101 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[33] */
            UINT8_C( 33 ), /* Tx_Chan */
            UINT8_C( 102 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[34] */
            UINT8_C( 34 ), /* Tx_Chan */
            UINT8_C( 103 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[35] */
            UINT8_C( 35 ), /* Tx_Chan */
            UINT8_C( 104 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[36] */
            UINT8_C( 36 ), /* Tx_Chan */
            UINT8_C( 105 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[37] */
            UINT8_C( 37 ), /* Tx_Chan */
            UINT8_C( 106 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[38] */
            UINT8_C( 38 ), /* Tx_Chan */
            UINT8_C( 107 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[39] */
            UINT8_C( 39 ), /* Tx_Chan */
            UINT8_C( 108 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[40] */
            UINT8_C( 40 ), /* Tx_Chan */
            UINT8_C( 109 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[41] */
            UINT8_C( 41 ), /* Tx_Chan */
            UINT8_C( 110 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[42] */
            UINT8_C( 42 ), /* Tx_Chan */
            UINT8_C( 111 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[43] */
            UINT8_C( 43 ), /* Tx_Chan */
            UINT8_C( 112 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[44] */
            UINT8_C( 44 ), /* Tx_Chan */
            UINT8_C( 113 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[45] */
            UINT8_C( 45 ), /* Tx_Chan */
            UINT8_C( 114 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[46] */
            UINT8_C( 46 ), /* Tx_Chan */
            UINT8_C( 115 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[47] */
            UINT8_C( 47 ), /* Tx_Chan */
            UINT8_C( 116 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[48] */
            UINT8_C( 48 ), /* Tx_Chan */
            UINT8_C( 117 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[49] */
            UINT8_C( 49 ), /* Tx_Chan */
            UINT8_C( 118 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[50] */
            UINT8_C( 50 ), /* Tx_Chan */
            UINT8_C( 119 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[51] */
            UINT8_C( 51 ), /* Tx_Chan */
            UINT8_C( 120 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[52] */
            UINT8_C( 52 ), /* Tx_Chan */
            UINT8_C( 121 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[53] */
            UINT8_C( 53 ), /* Tx_Chan */
            UINT8_C( 122 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[54] */
            UINT8_C( 54 ), /* Tx_Chan */
            UINT8_C( 123 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[55] */
            UINT8_C( 55 ), /* Tx_Chan */
            UINT8_C( 124 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[56] */
            UINT8_C( 56 ), /* Tx_Chan */
            UINT8_C( 125 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[57] */
            UINT8_C( 57 ), /* Tx_Chan */
            UINT8_C( 255 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[58] */
            UINT8_C( 58 ), /* Tx_Chan */
            UINT8_C( 255 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[59] */
            UINT8_C( 59 ), /* Tx_Chan */
            UINT8_C( 255 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[60] */
            UINT8_C( 60 ), /* Tx_Chan */
            UINT8_C( 255 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[61] */
            UINT8_C( 61 ), /* Tx_Chan */
            UINT8_C( 255 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[62] */
            UINT8_C( 62 ), /* Tx_Chan */
            UINT8_C( 255 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[63] */
            UINT8_C( 63 ), /* Tx_Chan */
            UINT8_C( 255 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[64] */
            UINT8_C( 64 ), /* Tx_Chan */
            UINT8_C( 255 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[65] */
            UINT8_C( 65 ), /* Tx_Chan */
            UINT8_C( 255 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[66] */
            UINT8_C( 66 ), /* Tx_Chan */
            UINT8_C( 255 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[67] */
            UINT8_C( 67 ), /* Tx_Chan */
            UINT8_C( 255 ) /* Rx_Chan */
        },
        { /* TxNPduToTpChannel[68] */
            UINT8_C( 68 ), /* Tx_Chan */
            UINT8_C( 255 ) /* Rx_Chan */
        }
    }
};

/* Deviation MISRAC2012-1, MISRAC2012-2, MISRAC2012-3 <STOP> */

#define CANTP_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include <CanTp_MemMap.h>

/*==================[internal constants]=====================================*/


/*==================[external data]==========================================*/


/*==================[internal data]==========================================*/


/*==================[external function definitions]==========================*/


/*==================[internal function definitions]==========================*/


/*==================[end of file]============================================*/

