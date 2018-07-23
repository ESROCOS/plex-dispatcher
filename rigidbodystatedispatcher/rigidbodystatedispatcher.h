/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_rigidbodystatedispatcher__
#define __USER_CODE_H_rigidbodystatedispatcher__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void rigidbodystatedispatcher_startup();

void rigidbodystatedispatcher_PI_dispatch(const asn1SccBase_samples_RigidBodyState *);

extern void rigidbodystatedispatcher_RI_sample(const asn1SccBase_samples_RigidBodyState *);

extern void rigidbodystatedispatcher_RI_sample1(const asn1SccBase_samples_RigidBodyState *);

#ifdef __cplusplus
}
#endif


#endif
