/* User code: This file will not be overwritten by TASTE. */

#include "test_rigidbodystatedisapatcherproducer.h"
#include "Context-test-rigidbodystatedisapatcherproducer.h"

/* Function static data is declared in this file : */
#include "Context-test-rigidbodystatedisapatcherproducer.h"
float val;
void test_rigidbodystatedisapatcherproducer_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
	val = test_rigidbodystatedisapatcherproducer_ctxt.init_val;
}

void test_rigidbodystatedisapatcherproducer_PI_trigger()
{
    asn1SccBase_samples_RigidBodyState sample;
    sample.position.data.arr[0] = 1.0+val;
    sample.position.data.arr[1] = 2.0+val;
    sample.position.data.arr[2] = 3.0+val;
    val = val+test_rigidbodystatedisapatcherproducer_ctxt.inc;
    test_rigidbodystatedisapatcherproducer_RI_dispatch(&sample);
    printf("\n");
}

