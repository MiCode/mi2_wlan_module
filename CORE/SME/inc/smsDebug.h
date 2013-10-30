/** ------------------------------------------------------------------------- * 
    ------------------------------------------------------------------------- *  

  
    \file cssDebug.h
  
    Define debug log interface for SMS.
  
   Copyright (c) 2011 Qualcomm Atheros, Inc. 
   All Rights Reserved. 
   Qualcomm Atheros Confidential and Proprietary.  

   Copyright (C) 2006 Airgo Networks, Incorporated
 
   ========================================================================== */
   
#ifndef SMS_DEBUG_H__
#define SMS_DEBUG_H__

//#include <stdio.h>
//#include <stdarg.h>

#include "utilsApi.h"
#include "sirDebug.h"

void smsLog(tpAniSirGlobal pMac, tANI_U32 loglevel, const char *pString,...); 

#endif // __HAL_DEBUG_H__
