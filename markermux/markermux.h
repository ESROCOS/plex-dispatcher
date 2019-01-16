/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_markermux__
#define __USER_CODE_H_markermux__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void markermux_startup();

void markermux_PI_dispatch(const asn1SccBase_samples_RigidBodyState *);

extern void markermux_RI_update0(const asn1SccBase_samples_RigidBodyState *);

extern void markermux_RI_update1(const asn1SccBase_samples_RigidBodyState *);

#ifdef __cplusplus
}
#endif


#endif
