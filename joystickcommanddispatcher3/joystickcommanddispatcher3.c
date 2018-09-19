/* User code: This file will not be overwritten by TASTE. */

#include "joystickcommanddispatcher3.h"

void joystickcommanddispatcher3_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void joystickcommanddispatcher3_PI_dispatch(const asn1SccJoystickCommand *IN_sample)
{
#ifdef DEBUG
    printf("Joystick Dispatcher called\n");
#endif
  joystickcommanddispatcher3_RI_sample0(IN_sample);
  joystickcommanddispatcher3_RI_sample1(IN_sample);
  joystickcommanddispatcher3_RI_sample2(IN_sample);
}

