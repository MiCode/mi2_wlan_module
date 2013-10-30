/*
 * Copyright (c) 2011-2012 Qualcomm Atheros, Inc. 
 * All Rights Reserved. 
 * Qualcomm Atheros Confidential and Proprietary. 
 * This file limDebug.h contains log function called by LIM module.
 *
 * Author:      Chandra Modumudi
 * Date:        02/11/02
 * History:-
 * Date         Modified by    Modification Information
 * --------------------------------------------------------------------
 * 
 */

#ifndef __LIM_DEBUG_H__
#define __LIM_DEBUG_H__

#include "utilsApi.h"
#include "sirDebug.h"


void limLog(tpAniSirGlobal pMac, tANI_U32 loglevel, const char *pString,...) ;

#endif
