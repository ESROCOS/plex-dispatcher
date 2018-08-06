/* User code: This file will not be overwritten by TASTE. */

#include "doubledispatcher.h"

void doubledispatcher_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void doubledispatcher_PI_dispatch(const asn1SccT_Double *IN_sample)
{
    doubledispatcher_RI_sample(IN_sample);
    doubledispatcher_RI_sample2(IN_sample);
}

