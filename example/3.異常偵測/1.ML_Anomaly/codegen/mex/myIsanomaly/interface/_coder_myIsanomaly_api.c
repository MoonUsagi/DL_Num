/*
 * _coder_myIsanomaly_api.c
 *
 * Code generation for function '_coder_myIsanomaly_api'
 *
 */

/* Include files */
#include "_coder_myIsanomaly_api.h"
#include "myIsanomaly.h"
#include "myIsanomaly_data.h"
#include "myIsanomaly_emxutil.h"
#include "myIsanomaly_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo j_emlrtRTEI = {
    1,                        /* lineNo */
    1,                        /* colNo */
    "_coder_myIsanomaly_api", /* fName */
    ""                        /* pName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real32_T *y);

static const mxArray *b_emlrt_marshallOut(const emxArray_real32_T *u);

static real32_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier);

static real32_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId);

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real32_T *ret);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                             const char_T *identifier, emxArray_real32_T *y);

static const mxArray *emlrt_marshallOut(const emxArray_boolean_T *u);

static real32_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real32_T *y)
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real32_T *u)
{
  static const int32_T i = 0;
  const mxArray *m;
  const mxArray *y;
  const real32_T *u_data;
  u_data = u->data;
  y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxSINGLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u_data[0]);
  emlrtSetDimensions((mxArray *)m, &u->size[0], 1);
  emlrtAssign(&y, m);
  return y;
}

static real32_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real32_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static real32_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId)
{
  real32_T y;
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real32_T *ret)
{
  static const int32_T dims[2] = {-1, 3};
  int32_T iv[2];
  int32_T i;
  boolean_T bv[2] = {true, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "single", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret->allocatedSize = iv[0] * iv[1];
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real32_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret->data = (real32_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                             const char_T *identifier, emxArray_real32_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y);
  emlrtDestroyArray(&nullptr);
}

static const mxArray *emlrt_marshallOut(const emxArray_boolean_T *u)
{
  static const int32_T i = 0;
  const mxArray *m;
  const mxArray *y;
  const boolean_T *u_data;
  u_data = u->data;
  y = NULL;
  m = emlrtCreateLogicalArray(1, &i);
  emlrtMxSetData((mxArray *)m, (void *)&u_data[0]);
  emlrtSetDimensions((mxArray *)m, &u->size[0], 1);
  emlrtAssign(&y, m);
  return y;
}

static real32_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real32_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "single", false, 0U,
                          (const void *)&dims);
  ret = *(real32_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void myIsanomaly_api(myIsanomalyStackData *SD, const mxArray *const prhs[4],
                     int32_T nlhs, const mxArray *plhs[2])
{
  static const uint32_T uv[4] = {728983282U, 698811565U, 161920489U,
                                 560391549U};
  static const uint32_T uv1[4] = {3611925063U, 1424445169U, 3695540536U,
                                  1121896109U};
  static const char_T *s = "MdlFileName";
  static const char_T *s1 = "varargin_1";
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_boolean_T *varargout_1;
  emxArray_real32_T *varargout_2;
  emxArray_real32_T *x;
  int32_T i;
  real32_T varargin_2;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  /* Check constant function inputs */
  i = 4;
  emlrtCheckArrayChecksumR2018b(&st, prhs[0], false, &i, (const char_T **)&s,
                                &uv[0]);
  emlrtCheckArrayChecksumR2018b(&st, prhs[2], false, &i, (const char_T **)&s1,
                                &uv1[0]);
  /* Marshall function inputs */
  emxInit_real32_T(&st, &x, 2, &j_emlrtRTEI);
  x->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "x", x);
  varargin_2 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "varargin_2");
  /* Invoke the target function */
  emxInit_boolean_T(&st, &varargout_1, &j_emlrtRTEI);
  emxInit_real32_T(&st, &varargout_2, 1, &j_emlrtRTEI);
  myIsanomaly(SD, &st, x, varargin_2, varargout_1, varargout_2);
  emxFree_real32_T(&st, &x);
  /* Marshall function outputs */
  varargout_1->canFreeData = false;
  plhs[0] = emlrt_marshallOut(varargout_1);
  emxFree_boolean_T(&st, &varargout_1);
  if (nlhs > 1) {
    varargout_2->canFreeData = false;
    plhs[1] = b_emlrt_marshallOut(varargout_2);
  }
  emxFree_real32_T(&st, &varargout_2);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_myIsanomaly_api.c) */
