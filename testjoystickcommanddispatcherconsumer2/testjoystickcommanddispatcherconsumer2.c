/* User code: This file will not be overwritten by TASTE. */

#include "testjoystickcommanddispatcherconsumer2.h"

void testjoystickcommanddispatcherconsumer2_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void testjoystickcommanddispatcherconsumer2_PI_sample1(const asn1SccJoystickCommand *IN_sample)
{
    PrintJoystickCommand("consumer2", IN_sample);
}

