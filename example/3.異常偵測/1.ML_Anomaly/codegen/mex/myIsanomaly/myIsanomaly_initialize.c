/*
 * myIsanomaly_initialize.c
 *
 * Code generation for function 'myIsanomaly_initialize'
 *
 */

/* Include files */
#include "myIsanomaly_initialize.h"
#include "_coder_myIsanomaly_mex.h"
#include "myIsanomaly_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void myIsanomaly_once(void);

/* Function Definitions */
static void myIsanomaly_once(void)
{
  mex_InitInfAndNan();
}

void myIsanomaly_initialize(void)
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
    myIsanomaly_once();
  }
}

/* End of code generation (myIsanomaly_initialize.c) */
