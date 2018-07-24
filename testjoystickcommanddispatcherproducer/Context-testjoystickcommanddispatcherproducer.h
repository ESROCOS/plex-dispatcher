#ifndef GENERATED_ASN1SCC_Context_testjoystickcommanddispatcherproducer_H
#define GENERATED_ASN1SCC_Context_testjoystickcommanddispatcherproducer_H
/*
Code automatically generated by asn1scc tool
*/
#include "dataview-uniq.h"
#include "asn1crt.h"

#ifdef  __cplusplus
extern "C" {
#endif



typedef struct {
    asn1SccT_Float init_val;
    asn1SccT_Float inc;
} asn1SccContext_testjoystickcommanddispatcherproducer;

flag asn1SccContext_testjoystickcommanddispatcherproducer_Equal(const asn1SccContext_testjoystickcommanddispatcherproducer* pVal1, const asn1SccContext_testjoystickcommanddispatcherproducer* pVal2);

void asn1SccContext_testjoystickcommanddispatcherproducer_Initialize(asn1SccContext_testjoystickcommanddispatcherproducer* pVal);

#define ERR_CONTEXT_TESTJOYSTICKCOMMANDDISPATCHERPRODUCER_INIT_VAL		1  /**/
#define ERR_CONTEXT_TESTJOYSTICKCOMMANDDISPATCHERPRODUCER_INC		12  /**/
flag asn1SccContext_testjoystickcommanddispatcherproducer_IsConstraintValid(const asn1SccContext_testjoystickcommanddispatcherproducer* pVal, int* pErrCode);

extern const asn1SccContext_testjoystickcommanddispatcherproducer testjoystickcommanddispatcherproducer_ctxt; 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

 


#ifdef  __cplusplus
}

#endif

#endif