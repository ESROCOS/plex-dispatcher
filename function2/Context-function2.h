#ifndef GENERATED_ASN1SCC_Context_function2_H
#define GENERATED_ASN1SCC_Context_function2_H
/*
Code automatically generated by asn1scc tool
*/
#include "dataview-uniq.h"
#include "asn1crt.h"

#ifdef  __cplusplus
extern "C" {
#endif


/*-- asn1SccContext_function2 --------------------------------------------*/

typedef struct {
    asn1SccT_Float init_val;
    asn1SccT_Float inc;

} asn1SccContext_function2;

flag asn1SccContext_function2_Equal(const asn1SccContext_function2* pVal1, const asn1SccContext_function2* pVal2);

void asn1SccContext_function2_Initialize(asn1SccContext_function2* pVal);

#define ERR_CONTEXT_FUNCTION2_INIT_VAL		1  /**/
#define ERR_CONTEXT_FUNCTION2_INC		12  /**/
flag asn1SccContext_function2_IsConstraintValid(const asn1SccContext_function2* pVal, int* pErrCode);

extern const asn1SccContext_function2 function2_ctxt; 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

 


#ifdef  __cplusplus
}

#endif

#endif