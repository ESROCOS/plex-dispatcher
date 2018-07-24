/* User code: This file will not be overwritten by TASTE. */

#include "testjoystickcommanddispatcherproducer.h"

/* Function static data is declared in this file : */
#include "Context-testjoystickcommanddispatcherproducer.h"
float val;
void testjoystickcommanddispatcherproducer_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
	val = testjoystickcommanddispatcherproducer_ctxt.init_val;
}

void testjoystickcommanddispatcherproducer_PI_trigger()
{
    asn1SccJoystickCommand sample;
    sample.deviceIdentifier.nCount = snprintf(sample.deviceIdentifier.arr,
                                              maxSize_JoystickString,
                                              "my_device" );
    sample.axes.names.nCount = 1;
    sample.axes.names.arr[0].nCount = snprintf(sample.axes.names.arr[0].arr,
                                               maxSize_JoystickString,
                                               "my_axis" );
    sample.axes.elements.nCount = 1;
    sample.axes.elements.arr[0] = 0.1;
    sample.buttons.names.nCount = 1;
    sample.buttons.names.arr[0].nCount = 
    	snprintf(sample.buttons.names.arr[0].arr,
                 maxSize_JoystickString,
                 "my_button" );
    sample.buttons.elements.nCount = 1;
    sample.buttons.elements.arr[0] = 2;
    testjoystickcommanddispatcherproducer_RI_dispatch(&sample);
    printf("\n");
}

