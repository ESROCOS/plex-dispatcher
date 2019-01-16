/* User code: This file will not be overwritten by TASTE. */

#include "markermux.h"
#include <stdlib.h>
#include <Context-markermux.h>
#include <iostream>

void markermux_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void markermux_PI_dispatch(const asn1SccBase_samples_RigidBodyState *IN_rbs)
{
  int id = atoi((const char *)IN_rbs->sourceframe.arr);
  bool detected = false;

  if (markermux_ctxt.marker0 == id){
      markermux_RI_update0(IN_rbs); 
      detected = true;
  }

  if (markermux_ctxt.marker1 == id){
      markermux_RI_update1(IN_rbs);
      detected = true;
  }

  if (!detected) std::cout << "[markermux] ERROR: unknown marker detected "<< id << std::endl;
}

