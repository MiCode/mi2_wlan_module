
/*
 * Copyright (c) 2011-2012 Qualcomm Atheros, Inc.
 * All Rights Reserved. 
 * Qualcomm Atheros Confidential and Proprietary.
 *
 * Woodside Networks, Inc proprietary. All rights reserved
 * sysStartup.h: System startup header file.
 * Author:  V. K. Kandarpa
 * Date:    01/29/2002
 *
 * History:-
 * Date     Modified by         Modification Information
 * --------------------------------------------------------------------------
 *
 */

# ifndef __SYSSTARTUP_H
# define __SYSSTARTUP_H

#ifdef FEATURE_WLAN_NON_INTEGRATED_SOC
#include "halDataStruct.h"
#endif
#include "sirParams.h"

/* Defines */

/* Function */

extern void sysMACCleanup(void *);
#ifdef FEATURE_WLAN_NON_INTEGRATED_SOC
extern void sysBbtProcessMessage( tHalHandle hHal, tpHalBufDesc pBD );
#endif
extern tSirRetStatus sysBbtProcessMessageCore(struct sAniSirGlobal *, tpSirMsgQ,
                                               tANI_U32, tANI_U32);


# endif /* __SYSSTARTUP_H */
