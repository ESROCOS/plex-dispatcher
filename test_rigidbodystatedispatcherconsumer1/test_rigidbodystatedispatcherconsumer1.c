/* User code: This file will not be overwritten by TASTE. */

#include "test_rigidbodystatedispatcherconsumer1.h"

void test_rigidbodystatedispatcherconsumer1_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void test_rigidbodystatedispatcherconsumer1_PI_sample(const asn1SccBase_samples_RigidBodyState *IN_sample)
{
    printf("Consumer 1, Position: %f,%f,%f\n", IN_sample->position.data.arr[0],
    	                                       IN_sample->position.data.arr[1],
    	                                       IN_sample->position.data.arr[2]);
}

