/* User code: This file will not be overwritten by TASTE. */

#include "test_rigidbodystatedispatcherconsumer2.h"

void test_rigidbodystatedispatcherconsumer2_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void test_rigidbodystatedispatcherconsumer2_PI_sample1(const asn1SccBase_samples_RigidBodyState *IN_sample)
{
    printf("Consumer 2, Position: %f,%f,%f\n", IN_sample->position.data.arr[0],
    	                                       IN_sample->position.data.arr[1],
    	                                       IN_sample->position.data.arr[2]);
}

