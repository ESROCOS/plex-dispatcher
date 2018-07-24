/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_joystickcommanddispatcher__
#define __USER_CODE_H_joystickcommanddispatcher__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void joystickcommanddispatcher_startup();

void joystickcommanddispatcher_PI_dispatch(const asn1SccJoystickCommand *);

extern void joystickcommanddispatcher_RI_sample(const asn1SccJoystickCommand *);

extern void joystickcommanddispatcher_RI_sample1(const asn1SccJoystickCommand *);

#ifdef __cplusplus
}
#endif


#endif
