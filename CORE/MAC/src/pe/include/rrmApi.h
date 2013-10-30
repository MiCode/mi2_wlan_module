/*
 * Copyright (c) 2011-2012 Qualcomm Atheros, Inc. 
 * All Rights Reserved. 
 * Qualcomm Atheros Confidential and Proprietary. 
 * */
/**=========================================================================
  
  \file  rrmApi.h
  
  \brief RRM APIs
  
   Copyright 2008 (c) Qualcomm, Incorporated.  All Rights Reserved.
   
   Qualcomm Confidential and Proprietary.
  
  ========================================================================*/

/* $Header$ */

#ifndef __RRM_API_H__
#define __RRM_API_H__


extern tSirRetStatus rrmInitialize(tpAniSirGlobal pMac);

extern tSirRetStatus rrmCleanup(tpAniSirGlobal pMac);


extern tSirRetStatus rrmProcessLinkMeasurementRequest( tpAniSirGlobal pMac, 
                                  tANI_U8 *pRxPacketInfo,
                                  tDot11fLinkMeasurementRequest *pLinkReq,
                                  tpPESession pSessionEntry );

extern tSirRetStatus rrmProcessRadioMeasurementRequest( tpAniSirGlobal pMac, 
                                  tSirMacAddr peer,
                                  tDot11fRadioMeasurementRequest *pRRMReq,
                                  tpPESession pSessionEntry );

extern tSirRetStatus rrmProcessNeighborReportResponse( tpAniSirGlobal pMac, 
                                  tDot11fNeighborReportResponse *pNeighborRep,
                                  tpPESession pSessionEntry );

extern void rrmProcessMessage(tpAniSirGlobal pMac, 
                                  tpSirMsgQ pMsg);

extern tSirRetStatus rrmSendSetMaxTxPowerReq ( tpAniSirGlobal pMac, 
                                  tPowerdBm txPower, 
                                  tpPESession pSessionEntry );

extern tPowerdBm rrmGetMgmtTxPower ( tpAniSirGlobal pMac, 
                                  tpPESession pSessionEntry );

extern void rrmCacheMgmtTxPower ( tpAniSirGlobal pMac, 
                                  tPowerdBm txPower, 
                                  tpPESession pSessionEntry );

extern tpRRMCaps rrmGetCapabilities ( tpAniSirGlobal pMac,
                                  tpPESession pSessionEntry );

extern void rrmUpdateConfig ( tpAniSirGlobal pMac,
                                  tpPESession pSessionEntry );

extern void rrmGetStartTSF ( tpAniSirGlobal pMac, 
                                  tANI_U32 *pStartTSF );

extern void rrmUpdateStartTSF ( tpAniSirGlobal pMac, 
                                  tANI_U32 startTSF[2] );

extern tSirRetStatus rrmSetMaxTxPowerRsp ( tpAniSirGlobal pMac, 
                                  tpSirMsgQ limMsgQ );

extern tSirRetStatus
rrmProcessNeighborReportReq( tpAniSirGlobal pMac,
                            tpSirNeighborReportReqInd pNeighborReq );
extern tSirRetStatus
rrmProcessBeaconReportXmit( tpAniSirGlobal pMac,
                            tpSirBeaconReportXmitInd pBcnReport);
#endif
