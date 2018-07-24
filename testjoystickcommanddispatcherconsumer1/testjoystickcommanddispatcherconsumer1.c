/* User code: This file will not be overwritten by TASTE. */

#include "testjoystickcommanddispatcherconsumer1.h"

void testjoystickcommanddispatcherconsumer1_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void testjoystickcommanddispatcherconsumer1_PI_sample(const asn1SccJoystickCommand *IN_sample)
{
    PrintJoystickCommand("consumer1", IN_sample);
}

