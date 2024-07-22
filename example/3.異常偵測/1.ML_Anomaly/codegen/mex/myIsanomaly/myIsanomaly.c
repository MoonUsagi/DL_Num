/*
 * myIsanomaly.c
 *
 * Code generation for function 'myIsanomaly'
 *
 */

/* Include files */
#include "myIsanomaly.h"
#include "IsolationForest.h"
#include "myIsanomaly_data.h"
#include "myIsanomaly_emxutil.h"
#include "myIsanomaly_types.h"
#include "rt_nonfinite.h"
#include "omp.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    8,             /* lineNo */
    "myIsanomaly", /* fcnName */
    "D:\\Fred\\MATLAB_Library(Github)\\DL_Num\\example\\3."
    "\xe7\x95\xb0\xe5\xb8\xb8\xe5\x81\xb5\xe6\xb8\xac\\1.ML_"
    "Anomaly\\myIsanomaly"
    ".m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    142,                         /* lineNo */
    "AnomalyDetector/isanomaly", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\anomaly\\+anomaly\\+"
    "coder\\AnomalyDetector.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    154,                         /* lineNo */
    "AnomalyDetector/isanomaly", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\anomaly\\+anomaly\\+"
    "coder\\AnomalyDetector.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    105,                              /* lineNo */
    "AnomalyDetector/validateInputs", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\anomaly\\+anomaly\\+"
    "coder\\AnomalyDetector.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    96,                                       /* lineNo */
    "AnomalyDetector/validateScoreThreshold", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\anomaly\\+anomaly\\+"
    "coder\\AnomalyDetector.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    93,                   /* lineNo */
    "validateattributes", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes"
    ".m" /* pathName */
};

static emlrtRTEInfo emlrtRTEI = {
    22,           /* lineNo */
    27,           /* colNo */
    "validatege", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatege.m" /* pName */
};

static emlrtRTEInfo b_emlrtRTEI = {
    22,           /* lineNo */
    27,           /* colNo */
    "validatele", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatele.m" /* pName */
};

static emlrtRTEInfo d_emlrtRTEI = {
    157,               /* lineNo */
    13,                /* colNo */
    "AnomalyDetector", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\anomaly\\+anomaly\\+"
    "coder\\AnomalyDetector.m" /* pName */
};

/* Function Definitions */
emlrtCTX emlrtGetRootTLSGlobal(void)
{
  return emlrtRootTLSGlobal;
}

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData)
{
  omp_set_lock(&emlrtLockGlobal);
  emlrtCallLockeeFunction(aLockee, aTLS, aData);
  omp_unset_lock(&emlrtLockGlobal);
}

void myIsanomaly(myIsanomalyStackData *SD, const emlrtStack *sp,
                 const emxArray_real32_T *x, real32_T varargin_2,
                 emxArray_boolean_T *varargout_1,
                 emxArray_real32_T *varargout_2)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T i;
  int32_T loop_ub;
  real32_T *varargout_2_data;
  boolean_T *varargout_1_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  /* MYISANOMALY Entry-point function for anomaly detection  */
  /*  This function supports only the example Code Generation for Anomaly  */
  /*  Detection and might change in a future release.  */
  /*  This function detects anomalies in new observations x using the saved  */
  /*  anomaly detection model in the MdlFileName file. */
  st.site = &emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &d_emlrtRSI;
  d_st.site = &e_emlrtRSI;
  e_st.site = &f_emlrtRSI;
  if (!(varargin_2 >= 0.0F)) {
    emlrtErrorWithMessageIdR2018a(
        &e_st, &emlrtRTEI, "MATLAB:validateattributes:expectedScalar",
        "MATLAB:AnomalyDetector:notGreaterEqual", 9, 4, 14, "ScoreThreshold", 4,
        2, ">=", 4, 1, "0");
  }
  e_st.site = &f_emlrtRSI;
  if (!(varargin_2 <= 1.0F)) {
    emlrtErrorWithMessageIdR2018a(&e_st, &b_emlrtRTEI,
                                  "MATLAB:validateattributes:expectedScalar",
                                  "MATLAB:AnomalyDetector:notLessEqual", 9, 4,
                                  14, "ScoreThreshold", 4, 2, "<=", 4, 1, "1");
  }
  IsolationForest_IsolationForest(SD->f0.t0_Trees);
  b_st.site = &c_emlrtRSI;
  IsolationForest_score(&b_st, SD->f0.t0_Trees, x, varargout_2);
  varargout_2_data = varargout_2->data;
  loop_ub = varargout_2->size[0];
  i = varargout_1->size[0];
  varargout_1->size[0] = varargout_2->size[0];
  emxEnsureCapacity_boolean_T(&st, varargout_1, i, &d_emlrtRTEI);
  varargout_1_data = varargout_1->data;
  for (i = 0; i < loop_ub; i++) {
    varargout_1_data[i] = (varargout_2_data[i] > varargin_2);
  }
}

/* End of code generation (myIsanomaly.c) */
