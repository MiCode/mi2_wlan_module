#if !defined( __WLAN_QCT_OS_TYPE_H )
#define __WLAN_QCT_OS_TYPE_H

/**=========================================================================
  
  \file  wlan_qct_pal_type.h
  
  \brief define basi types PAL exports. wpt = (Wlan Pal Type)
               
   Definitions for platform dependent. This is for Linux/Android
  
   Copyright 2010 (c) Qualcomm, Incorporated.  All Rights Reserved.
   
   Qualcomm Confidential and Proprietary.
  
  ========================================================================*/


typedef unsigned long wpt_uint32;

typedef signed long wpt_int32;

typedef unsigned short wpt_uint16;

typedef signed short wpt_int16;

typedef unsigned char wpt_uint8;

typedef wpt_uint8 wpt_byte;

typedef signed char wpt_int8;

typedef wpt_uint8 wpt_boolean; 

typedef unsigned long long wpt_uint64;

typedef long long wpt_int64;

#define WPT_INLINE __inline__
#define WPT_STATIC static


#endif // __WLAN_QCT_OS_TYPE_H
