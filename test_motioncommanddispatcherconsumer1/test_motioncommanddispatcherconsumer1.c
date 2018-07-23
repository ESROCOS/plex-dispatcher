/* User code: This file will not be overwritten by TASTE. */

#include "test_motioncommanddispatcherconsumer1.h"

void test_motioncommanddispatcherconsumer1_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void test_motioncommanddispatcherconsumer1_PI_sample(const asn1SccBase_samples_Motion2D *IN_sample)
{
    PrintBase_commands_Motion2D("consumer1", IN_sample);
}

