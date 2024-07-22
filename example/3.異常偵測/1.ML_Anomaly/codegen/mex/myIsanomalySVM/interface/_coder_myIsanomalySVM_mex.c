/*
 * _coder_myIsanomalySVM_mex.c
 *
 * Code generation for function '_coder_myIsanomalySVM_mex'
 *
 */

/* Include files */
#include "_coder_myIsanomalySVM_mex.h"
#include "_coder_myIsanomalySVM_api.h"
#include "myIsanomalySVM_data.h"
#include "myIsanomalySVM_initialize.h"
#include "myIsanomalySVM_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&myIsanomalySVM_atexit);
  /* Module initialization. */
  myIsanomalySVM_initialize();
  /* Dispatch the entry-point. */
  myIsanomalySVM_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  myIsanomalySVM_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, "Big5", true);
  return emlrtRootTLSGlobal;
}

void myIsanomalySVM_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T nrhs,
                                const mxArray *prhs[3])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[2];
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs < 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooFewInputsConstants", 9, 4, 14,
                        "myIsanomalySVM", 4, 14, "myIsanomalySVM", 4, 14,
                        "myIsanomalySVM");
  }
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4,
                        14, "myIsanomalySVM");
  }
  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 14,
                        "myIsanomalySVM");
  }
  /* Call the function. */
  myIsanomalySVM_api(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

/* End of code generation (_coder_myIsanomalySVM_mex.c) */
