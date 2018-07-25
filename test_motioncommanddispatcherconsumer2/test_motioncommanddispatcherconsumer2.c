/* User code: This file will not be overwritten by TASTE. */

#include "test_motioncommanddispatcherconsumer2.h"

void test_motioncommanddispatcherconsumer2_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void test_motioncommanddispatcherconsumer2_PI_sample1(const asn1SccBase_commands_Motion2D *IN_sample)
{
    PrintBase_commands_Motion2D("consumer2", IN_sample);
}

