/* User code: This file will not be overwritten by TASTE. */

#include "joystickcommanddispatcher.h"

void joystickcommanddispatcher_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void joystickcommanddispatcher_PI_dispatch(const asn1SccJoystickCommand *IN_sample)
{
    joystickcommanddispatcher_RI_sample(IN_sample);
    joystickcommanddispatcher_RI_sample1(IN_sample);
}
