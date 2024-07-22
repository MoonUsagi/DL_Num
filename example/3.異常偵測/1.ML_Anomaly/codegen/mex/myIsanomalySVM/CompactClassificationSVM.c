/*
 * CompactClassificationSVM.c
 *
 * Code generation for function 'CompactClassificationSVM'
 *
 */

/* Include files */
#include "CompactClassificationSVM.h"
#include "Gaussian.h"
#include "eml_int_forloop_overflow_check.h"
#include "myIsanomalySVM_data.h"
#include "myIsanomalySVM_emxutil.h"
#include "myIsanomalySVM_types.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include <stddef.h>
#include <string.h>
#include <xmmintrin.h>

/* Variable Definitions */
static emlrtRSInfo q_emlrtRSI = {
    467,                              /* lineNo */
    "CompactClassificationSVM/score", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+"
    "coder\\+classif\\CompactClassificationSVM.m" /* pathName */
};

static emlrtRSInfo r_emlrtRSI = {
    246,                /* lineNo */
    "CompactSVM/score", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+"
    "coder\\+model\\CompactSVM.m" /* pathName */
};

static emlrtRSInfo s_emlrtRSI = {
    249,                /* lineNo */
    "CompactSVM/score", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+"
    "coder\\+model\\CompactSVM.m" /* pathName */
};

static emlrtRSInfo t_emlrtRSI = {
    158,                    /* lineNo */
    "CompactSVM/normalize", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+"
    "coder\\+model\\CompactSVM.m" /* pathName */
};

static emlrtRSInfo u_emlrtRSI = {
    367,                      /* lineNo */
    "CompactSVM/kernelScore", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+"
    "coder\\+model\\CompactSVM.m" /* pathName */
};

static emlrtRSInfo v_emlrtRSI = {
    368,                      /* lineNo */
    "CompactSVM/kernelScore", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+"
    "coder\\+model\\CompactSVM.m" /* pathName */
};

static emlrtECInfo emlrtECI = {
    -1,                               /* nDims */
    480,                              /* lineNo */
    25,                               /* colNo */
    "CompactClassificationSVM/score", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+"
    "coder\\+classif\\CompactClassificationSVM.m" /* pName */
};

static emlrtECInfo b_emlrtECI = {
    -1,                     /* nDims */
    158,                    /* lineNo */
    25,                     /* colNo */
    "CompactSVM/normalize", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+"
    "coder\\+model\\CompactSVM.m" /* pName */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    368,                      /* lineNo */
    117,                      /* colNo */
    "",                       /* aName */
    "CompactSVM/kernelScore", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+"
    "coder\\+model\\CompactSVM.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    369,                      /* lineNo */
    43,                       /* colNo */
    "",                       /* aName */
    "CompactSVM/kernelScore", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+"
    "coder\\+model\\CompactSVM.m", /* pName */
    0                              /* checkKind */
};

static emlrtRTEInfo m_emlrtRTEI = {
    60,       /* lineNo */
    20,       /* colNo */
    "bsxfun", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m" /* pName
                                                                         */
};

static emlrtRTEInfo n_emlrtRTEI = {
    365,          /* lineNo */
    56,           /* colNo */
    "CompactSVM", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+"
    "coder\\+model\\CompactSVM.m" /* pName */
};

static emlrtRTEInfo o_emlrtRTEI = {
    471,                        /* lineNo */
    24,                         /* colNo */
    "CompactClassificationSVM", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+"
    "coder\\+classif\\CompactClassificationSVM.m" /* pName */
};

static emlrtRTEInfo p_emlrtRTEI = {
    236,          /* lineNo */
    17,           /* colNo */
    "CompactSVM", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+"
    "coder\\+model\\CompactSVM.m" /* pName */
};

static emlrtRTEInfo q_emlrtRTEI = {
    246,          /* lineNo */
    17,           /* colNo */
    "CompactSVM", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+"
    "coder\\+model\\CompactSVM.m" /* pName */
};

static emlrtRTEInfo r_emlrtRTEI = {
    158,          /* lineNo */
    25,           /* colNo */
    "CompactSVM", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+"
    "coder\\+model\\CompactSVM.m" /* pName */
};

/* Function Definitions */
void CompactClassificationSVM_score(const emlrtStack *sp,
                                    const real32_T obj_Alpha[9541],
                                    const real32_T obj_SupportVectorsT[28623],
                                    const real32_T obj_Mu[3],
                                    const real32_T obj_Sigma[3],
                                    const emxArray_real32_T *X,
                                    emxArray_real32_T *S)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real32_T *Xnorm;
  emxArray_real32_T *f;
  emxArray_real32_T *r;
  int32_T b_Xnorm[2];
  int32_T acoef;
  int32_T acoef_tmp;
  int32_T b;
  int32_T b_i1;
  int32_T b_k;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T trueCount;
  real32_T innerProduct[9541];
  real32_T svInnerProduct[9541];
  const real32_T *X_data;
  real32_T c_tmp;
  real32_T *S_data;
  real32_T *Xnorm_data;
  real32_T *f_data;
  int8_T b_tmp_data[3];
  int8_T tmp_data[3];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  X_data = X->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &q_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  emxInit_real32_T(&b_st, &Xnorm, 2, &q_emlrtRTEI);
  b = X->size[0];
  i = Xnorm->size[0] * Xnorm->size[1];
  Xnorm->size[0] = X->size[0];
  Xnorm->size[1] = 3;
  emxEnsureCapacity_real32_T(&b_st, Xnorm, i, &m_emlrtRTEI);
  Xnorm_data = Xnorm->data;
  if (X->size[0] != 0) {
    acoef = (X->size[0] != 1);
    for (k = 0; k < 3; k++) {
      i = Xnorm->size[0] - 1;
      for (b_k = 0; b_k <= i; b_k++) {
        Xnorm_data[b_k + Xnorm->size[0] * k] =
            X_data[acoef * b_k + X->size[0] * k] - obj_Mu[k];
      }
    }
  }
  trueCount = 0;
  if (obj_Sigma[0] > 0.0F) {
    trueCount = 1;
  }
  if (obj_Sigma[1] > 0.0F) {
    trueCount++;
  }
  if (obj_Sigma[2] > 0.0F) {
    trueCount++;
  }
  acoef = 0;
  if (obj_Sigma[0] > 0.0F) {
    tmp_data[0] = 0;
    acoef = 1;
  }
  if (obj_Sigma[1] > 0.0F) {
    tmp_data[acoef] = 1;
    acoef++;
  }
  if (obj_Sigma[2] > 0.0F) {
    tmp_data[acoef] = 2;
  }
  if (trueCount - 1 >= 0) {
    memcpy(&b_tmp_data[0], &tmp_data[0], (uint32_T)trueCount * sizeof(int8_T));
  }
  c_st.site = &t_emlrtRSI;
  if (trueCount == 1) {
    acoef = 1;
  } else if (trueCount == 1) {
    acoef = 1;
  } else {
    acoef = trueCount;
  }
  emxInit_real32_T(&c_st, &r, 2, &r_emlrtRTEI);
  i = r->size[0] * r->size[1];
  r->size[0] = X->size[0];
  r->size[1] = acoef;
  emxEnsureCapacity_real32_T(&c_st, r, i, &m_emlrtRTEI);
  S_data = r->data;
  if ((Xnorm->size[0] != 0) && (acoef != 0)) {
    acoef_tmp = (trueCount != 1);
    i = acoef - 1;
    acoef = (Xnorm->size[0] != 1);
    for (k = 0; k <= i; k++) {
      i1 = acoef_tmp * k;
      b_i1 = r->size[0] - 1;
      for (b_k = 0; b_k <= b_i1; b_k++) {
        S_data[b_k + r->size[0] * k] =
            Xnorm_data[acoef * b_k + Xnorm->size[0] * tmp_data[i1]] /
            obj_Sigma[tmp_data[i1]];
      }
    }
  }
  b_Xnorm[0] = X->size[0];
  b_Xnorm[1] = trueCount;
  emlrtSubAssignSizeCheckR2012b(&b_Xnorm[0], 2, &r->size[0], 2, &b_emlrtECI,
                                &b_st);
  b_Xnorm[0] = X->size[0];
  for (i = 0; i < trueCount; i++) {
    for (b_i1 = 0; b_i1 < b; b_i1++) {
      Xnorm_data[b_i1 + Xnorm->size[0] * b_tmp_data[i]] =
          S_data[b_i1 + b_Xnorm[0] * i];
    }
  }
  emxFree_real32_T(&b_st, &r);
  b_st.site = &s_emlrtRSI;
  acoef = 1;
  for (acoef_tmp = 0; acoef_tmp < 9541; acoef_tmp++) {
    real32_T b_c_tmp;
    i1 = acoef - 1;
    acoef += 3;
    c_tmp = obj_SupportVectorsT[i1 + 1];
    b_c_tmp = obj_SupportVectorsT[i1 + 2];
    svInnerProduct[acoef_tmp] =
        (obj_SupportVectorsT[i1] * obj_SupportVectorsT[i1] + c_tmp * c_tmp) +
        b_c_tmp * b_c_tmp;
  }
  emxInit_real32_T(&b_st, &f, 1, &p_emlrtRTEI);
  i = f->size[0];
  f->size[0] = X->size[0];
  emxEnsureCapacity_real32_T(&b_st, f, i, &n_emlrtRTEI);
  f_data = f->data;
  c_st.site = &u_emlrtRSI;
  if (Xnorm->size[0] > 2147483646) {
    d_st.site = &y_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }
  for (acoef_tmp = 0; acoef_tmp < b; acoef_tmp++) {
    real32_T c_Xnorm[3];
    if (acoef_tmp + 1 > b) {
      emlrtDynamicBoundsCheckR2012b(acoef_tmp + 1, 1, b, &k_emlrtBCI, &b_st);
    }
    c_Xnorm[0] = Xnorm_data[acoef_tmp];
    c_Xnorm[1] = Xnorm_data[acoef_tmp + Xnorm->size[0]];
    c_Xnorm[2] = Xnorm_data[acoef_tmp + Xnorm->size[0] * 2];
    c_st.site = &v_emlrtRSI;
    Gaussian(obj_SupportVectorsT, svInnerProduct, c_Xnorm, innerProduct);
    n_t = (ptrdiff_t)9541;
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    c_tmp = sdot(&n_t, &innerProduct[0], &incx_t, (real32_T *)&obj_Alpha[0],
                 &incy_t);
    if (acoef_tmp + 1 > f->size[0]) {
      emlrtDynamicBoundsCheckR2012b(acoef_tmp + 1, 1, f->size[0], &l_emlrtBCI,
                                    &b_st);
    }
    f_data[acoef_tmp] = c_tmp - 146.152893F;
  }
  emxFree_real32_T(&b_st, &Xnorm);
  acoef = f->size[0];
  i = S->size[0];
  S->size[0] = f->size[0];
  emxEnsureCapacity_real32_T(sp, S, i, &o_emlrtRTEI);
  S_data = S->data;
  i1 = (f->size[0] / 4) << 2;
  acoef_tmp = i1 - 4;
  for (i = 0; i <= acoef_tmp; i += 4) {
    __m128 r1;
    r1 = _mm_loadu_ps(&f_data[i]);
    _mm_storeu_ps(&S_data[i], _mm_mul_ps(r1, _mm_set1_ps(-1.0F)));
  }
  for (i = i1; i < acoef; i++) {
    S_data[i] = -f_data[i];
  }
  acoef = S->size[0];
  emlrtSubAssignSizeCheckR2012b(&S->size[0], 1, &f->size[0], 1, &emlrtECI,
                                (emlrtCTX)sp);
  for (i = 0; i < acoef; i++) {
    S_data[i] = f_data[i];
  }
  emxFree_real32_T(sp, &f);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (CompactClassificationSVM.c) */
