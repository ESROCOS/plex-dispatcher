/* User code: This file will not be overwritten by TASTE. */

#include "test_motioncommanddisapatcherproducer.h"
#include "Context-test-motioncommanddisapatcherproducer.h"
#include <stdio.h>

float val;
void test_motioncommanddisapatcherproducer_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
	val = test_motioncommanddisapatcherproducer_ctxt.init_val;
}

void test_motioncommanddisapatcherproducer_PI_trigger()
{
    asn1SccBase_samples_Motion2D sample;
    sample.translation = 1.0+val;
    sample.rotation = 2.0+val;
    sample.heading.rad = 3.0+val;
    val = val+test_motioncommanddisapatcherproducer_ctxt.inc;
    test_motioncommanddisapatcherproducer_RI_dispatch_motion_command(&sample);
    printf("\n");
}

