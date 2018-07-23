/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_motioncommanddispatcher__
#define __USER_CODE_H_motioncommanddispatcher__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void motioncommanddispatcher_startup();

void motioncommanddispatcher_PI_dispatch_motion_command(const asn1SccBase_commands_Motion2D *);

extern void motioncommanddispatcher_RI_sample(const asn1SccBase_samples_Motion2D *);

extern void motioncommanddispatcher_RI_sample1(const asn1SccBase_samples_Motion2D *);

#ifdef __cplusplus
}
#endif


#endif
