/* User code: This file will not be overwritten by TASTE. */

#include "motioncommanddispatcher.h"

void motioncommanddispatcher_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void motioncommanddispatcher_PI_dispatch_motion_command(const asn1SccBase_commands_Motion2D *IN_sample)
{
    /* Write your code here! */
    motioncommanddispatcher_RI_sample(IN_sample);
    motioncommanddispatcher_RI_sample1(IN_sample);
}

