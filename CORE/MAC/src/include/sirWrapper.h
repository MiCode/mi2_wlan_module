/*
 * Airgo Networks, Inc proprietary. All rights reserved.
 * This file sirWrapper.h contains the common definitions used by all
 * Firmware modules.
 *
 * Author:      Susan Tsao
 * Date:        09/24/2007
 * History:-
 * Date         Modified by    Modification Information
 * --------------------------------------------------------------------
 */

#ifndef __SIR_WRAPPER_H_
#define __SIR_WRAPPER_H_

#if defined VOSS_ENABLED
#include "VossWrapper.h"
#elif defined ANI_OS_TYPE_OSX
#include "OSXWrapper.h"
#else   // ANI_OS_TYPE undefined
#error Unknown or missing ANI_OS_TYPE macro
#endif  // ANI_OS_TYPE




#endif //__SIR_WRAPPER_H_

