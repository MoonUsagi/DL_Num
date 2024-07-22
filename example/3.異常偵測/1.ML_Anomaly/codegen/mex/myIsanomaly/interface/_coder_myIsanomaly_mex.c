/*
 * _coder_myIsanomaly_mex.c
 *
 * Code generation for function '_coder_myIsanomaly_mex'
 *
 */

/* Include files */
#include "_coder_myIsanomaly_mex.h"
#include "_coder_myIsanomaly_api.h"
#include "myIsanomaly.h"
#include "myIsanomaly_data.h"
#include "myIsanomaly_initialize.h"
#include "myIsanomaly_terminate.h"
#include "myIsanomaly_types.h"
#include "rt_nonfinite.h"
#include "omp.h"

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  static jmp_buf emlrtJBEnviron;
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  myIsanomalyStackData *myIsanomalyStackDataGlobal = NULL;
  myIsanomalyStackDataGlobal = (myIsanomalyStackData *)emlrtMxCalloc(
      (size_t)1, (size_t)1U * sizeof(myIsanomalyStackData));
  mexAtExit(&myIsanomaly_atexit);
  /* Initialize the memory manager. */
  omp_init_lock(&emlrtLockGlobal);
  omp_init_nest_lock(&myIsanomaly_nestLockGlobal);
  /* Module initialization. */
  myIsanomaly_initialize();
  st.tls = emlrtRootTLSGlobal;
  emlrtSetJmpBuf(&st, &emlrtJBEnviron);
  if (setjmp(emlrtJBEnviron) == 0) {
    /* Dispatch the entry-point. */
    myIsanomaly_mexFunction(myIsanomalyStackDataGlobal, nlhs, plhs, nrhs, prhs);
    /* Module termination. */
    myIsanomaly_terminate();
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&myIsanomaly_nestLockGlobal);
  } else {
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&myIsanomaly_nestLockGlobal);
    emlrtReportParallelRunTimeError(&st);
  }
  emlrtMxFree(myIsanomalyStackDataGlobal);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal,
                           &emlrtLockerFunction, omp_get_num_procs(), NULL,
                           "Big5", true);
  return emlrtRootTLSGlobal;
}

void myIsanomaly_mexFunction(myIsanomalyStackData *SD, int32_T nlhs,
                             mxArray *plhs[2], int32_T nrhs,
                             const mxArray *prhs[4])
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
  if (nrhs < 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooFewInputsConstants", 9, 4, 11,
                        "myIsanomaly", 4, 11, "myIsanomaly", 4, 11,
                        "myIsanomaly");
  }
  if (nrhs != 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 4, 4,
                        11, "myIsanomaly");
  }
  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 11,
                        "myIsanomaly");
  }
  /* Call the function. */
  myIsanomaly_api(SD, prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

/* End of code generation (_coder_myIsanomaly_mex.c) */
