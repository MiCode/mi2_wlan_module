/*
 * Copyright (c) 2011-2012 Qualcomm Atheros, Inc. 
 * All Rights Reserved. 
 * Qualcomm Atheros Confidential and Proprietary. 
 *
 * Airgo Networks, Inc proprietary. All rights reserved.
 * This file schDebug.h contains some debug macros.
 *
 * Author:      Sandesh Goel
 * Date:        02/25/02
 * History:-
 * Date            Modified by    Modification Information
 * --------------------------------------------------------------------
 *
 */

#ifndef __SCH_DEBUG_H__
#define __SCH_DEBUG_H__

#include "utilsApi.h"
#ifdef FEATURE_WLAN_NON_INTEGRATED_SOC
#include "halCommonApi.h"
#endif
#include "sirDebug.h"



void schLog(tpAniSirGlobal pMac, tANI_U32 loglevel, const char *pString,...) ;

// -------------------------------------------------------------
/**
 *
 */

#ifdef SCH_DEBUG_STATS
inline void schClass::schTrace(tSchTrace event, tANI_U32 arg)
{
    if (gSchFreezeDump) return;
    if ((tANI_U32)event >= traceLevel) return;

    traceBuf[curTrace].event = event;
    traceBuf[curTrace].arg = arg;
    traceBuf[curTrace].timestamp = halGetTsfLow(pMac);
    curTrace = (curTrace+1)%SCH_TRACE_BUF_SIZE;
}
#endif

#endif
