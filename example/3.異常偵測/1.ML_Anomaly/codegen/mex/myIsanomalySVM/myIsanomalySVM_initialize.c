/*
 * myIsanomalySVM_initialize.c
 *
 * Code generation for function 'myIsanomalySVM_initialize'
 *
 */

/* Include files */
#include "myIsanomalySVM_initialize.h"
#include "_coder_myIsanomalySVM_mex.h"
#include "myIsanomalySVM_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void myIsanomalySVM_once(void);

/* Function Definitions */
static void myIsanomalySVM_once(void)
{
  mex_InitInfAndNan();
}

void myIsanomalySVM_initialize(void)
{
  static const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    myIsanomalySVM_once();
  }
}

/* End of code generation (myIsanomalySVM_initialize.c) */
