/*
* Copyright (c) 2012 Qualcomm Atheros, Inc.
* All Rights Reserved.
* Qualcomm Atheros Confidential and Proprietary.
*/

/******************************************************************************
*
* Name:  wlan_hdd_packet_filtering.h
*
* Description: Packet Filter Definitions.
*
* Copyright (c) 2011 QUALCOMM Incorporated. All Rights Reserved.
* QUALCOMM Proprietary and Confidential.
*
******************************************************************************/

#ifndef __WLAN_HDD_PACKET_FILTERING_H__
#define __WLAN_HDD_PACKET_FILTERING_H__

typedef struct
{
    v_U8_t       mcastBcastFilterSetting;
}tMcBcFilterCfg, *tpMcBcFilterCfg;


#ifdef WLAN_FEATURE_PACKET_FILTERING
#define HDD_MAX_CMP_PER_PACKET_FILTER     5     

typedef enum
{
  HDD_FILTER_PROTO_TYPE_INVALID = 0,
  HDD_FILTER_PROTO_TYPE_MAC = 1,
  HDD_FILTER_PROTO_TYPE_ARP = 2,
  HDD_FILTER_PROTO_TYPE_IPV4 =3 ,
  HDD_FILTER_PROTO_TYPE_IPV6 = 4,
  HDD_FILTER_PROTO_TYPE_UDP = 5,
  HDD_FILTER_PROTO_TYPE_MAX
} eProtoLayer;

typedef enum
{
  HDD_RCV_FILTER_INVALID = 0,
  HDD_RCV_FILTER_SET = 1,
  HDD_RCV_FILTER_CLEAR = 2,
  HDD_RCV_FILTER_MAX
}eFilterAction;

typedef enum 
{
  HDD_FILTER_CMP_TYPE_INVALID = 0,
  HDD_FILTER_CMP_TYPE_EQUAL = 1,
  HDD_FILTER_CMP_TYPE_MASK_EQUAL = 2,
  HDD_FILTER_CMP_TYPE_NOT_EQUAL = 3,
  HDD_FILTER_CMP_TYPE_MASK_NOT_EQUAL = 4,
  HDD_FILTER_CMP_TYPE_MAX
}eCompareFlag;

struct PacketFilterParamsCfg
{
    v_U8_t              protocolLayer;
    v_U8_t              cmpFlag;   
    v_U8_t              dataOffset;
    v_U8_t              dataLength;
    v_U8_t              compareData[8];
    v_U8_t              dataMask[8];
};

typedef struct
{
    v_U8_t            filterAction;    
    v_U8_t            filterId;
    v_U8_t            numParams;
    struct PacketFilterParamsCfg paramsData [HDD_MAX_CMP_PER_PACKET_FILTER];
}tPacketFilterCfg, *tpPacketFilterCfg;

#endif
#endif // __WLAN_HDD_PACKET_FILTERING_H__
