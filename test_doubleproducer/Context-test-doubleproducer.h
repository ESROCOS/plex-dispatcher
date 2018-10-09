#ifndef GENERATED_ASN1SCC_Context_test_doubleproducer_H
#define GENERATED_ASN1SCC_Context_test_doubleproducer_H
/*
Code automatically generated by asn1scc tool
*/
#include "dataview-uniq.h"
#include "asn1crt.h"

#ifdef  __cplusplus
extern "C" {
#endif


/*-- asn1SccContext_test_doubleproducer --------------------------------------------*/

typedef struct {
    asn1SccT_Float init_val;
    asn1SccT_Float inc;

} asn1SccContext_test_doubleproducer;

flag asn1SccContext_test_doubleproducer_Equal(const asn1SccContext_test_doubleproducer* pVal1, const asn1SccContext_test_doubleproducer* pVal2);

void asn1SccContext_test_doubleproducer_Initialize(asn1SccContext_test_doubleproducer* pVal);

#define ERR_CONTEXT_TEST_DOUBLEPRODUCER_INIT_VAL		1  /**/
#define ERR_CONTEXT_TEST_DOUBLEPRODUCER_INC		12  /**/
flag asn1SccContext_test_doubleproducer_IsConstraintValid(const asn1SccContext_test_doubleproducer* pVal, int* pErrCode);

extern const asn1SccContext_test_doubleproducer test_doubleproducer_ctxt; 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

 


#ifdef  __cplusplus
}

#endif

#endif