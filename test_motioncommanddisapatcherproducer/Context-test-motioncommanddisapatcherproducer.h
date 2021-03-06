#ifndef GENERATED_ASN1SCC_Context_test_motioncommanddisapatcherproducer_H
#define GENERATED_ASN1SCC_Context_test_motioncommanddisapatcherproducer_H
/*
Code automatically generated by asn1scc tool
*/
#include "dataview-uniq.h"
#include "asn1crt.h"

#ifdef  __cplusplus
extern "C" {
#endif


/*-- asn1SccContext_test_motioncommanddisapatcherproducer --------------------------------------------*/

typedef struct {
    asn1SccT_Float init_val;
    asn1SccT_Float inc;

} asn1SccContext_test_motioncommanddisapatcherproducer;

flag asn1SccContext_test_motioncommanddisapatcherproducer_Equal(const asn1SccContext_test_motioncommanddisapatcherproducer* pVal1, const asn1SccContext_test_motioncommanddisapatcherproducer* pVal2);

void asn1SccContext_test_motioncommanddisapatcherproducer_Initialize(asn1SccContext_test_motioncommanddisapatcherproducer* pVal);

#define ERR_CONTEXT_TEST_MOTIONCOMMANDDISAPATCHERPRODUCER_INIT_VAL		1  /**/
#define ERR_CONTEXT_TEST_MOTIONCOMMANDDISAPATCHERPRODUCER_INC		12  /**/
flag asn1SccContext_test_motioncommanddisapatcherproducer_IsConstraintValid(const asn1SccContext_test_motioncommanddisapatcherproducer* pVal, int* pErrCode);

extern const asn1SccContext_test_motioncommanddisapatcherproducer test_motioncommanddisapatcherproducer_ctxt; 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

 


#ifdef  __cplusplus
}

#endif

#endif