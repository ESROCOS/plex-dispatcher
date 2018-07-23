/* User code: This file will not be overwritten by TASTE. */

#include "rigidbodystatedispatcher.h"

void rigidbodystatedispatcher_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void rigidbodystatedispatcher_PI_dispatch(const asn1SccBase_samples_RigidBodyState *IN_sample)
{
    /* Write your code here! */
    rigidbodystatedispatcher_RI_sample(IN_sample);
    rigidbodystatedispatcher_RI_sample1(IN_sample);
}

