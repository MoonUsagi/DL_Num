/*
 * IsolationTree.c
 *
 * Code generation for function 'IsolationTree'
 *
 */

/* Include files */
#include "IsolationTree.h"
#include "cfactor.h"
#include "myIsanomaly_emxutil.h"
#include "myIsanomaly_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = {
    1,                     /* iFirst */
    255,                   /* iLast */
    220,                   /* lineNo */
    68,                    /* colNo */
    "",                    /* aName */
    "IsolationTree/depth", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\anomaly\\+anomaly\\+coder\\+"
    "iforest\\IsolationTree.m", /* pName */
    0                           /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    1,                     /* iFirst */
    3,                     /* iLast */
    187,                   /* lineNo */
    59,                    /* colNo */
    "",                    /* aName */
    "IsolationTree/depth", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\anomaly\\+anomaly\\+coder\\+"
    "iforest\\IsolationTree.m", /* pName */
    0                           /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    238,                   /* lineNo */
    23,                    /* colNo */
    "",                    /* aName */
    "IsolationTree/depth", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\anomaly\\+anomaly\\+coder\\+"
    "iforest\\IsolationTree.m", /* pName */
    0                           /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    221,                   /* lineNo */
    50,                    /* colNo */
    "",                    /* aName */
    "IsolationTree/depth", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\anomaly\\+anomaly\\+coder\\+"
    "iforest\\IsolationTree.m", /* pName */
    0                           /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    240,                   /* lineNo */
    39,                    /* colNo */
    "",                    /* aName */
    "IsolationTree/depth", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\anomaly\\+anomaly\\+coder\\+"
    "iforest\\IsolationTree.m", /* pName */
    0                           /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    1,                     /* iFirst */
    511,                   /* iLast */
    240,                   /* lineNo */
    94,                    /* colNo */
    "",                    /* aName */
    "IsolationTree/depth", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\anomaly\\+anomaly\\+coder\\+"
    "iforest\\IsolationTree.m", /* pName */
    0                           /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    240,                   /* lineNo */
    27,                    /* colNo */
    "",                    /* aName */
    "IsolationTree/depth", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\anomaly\\+anomaly\\+coder\\+"
    "iforest\\IsolationTree.m", /* pName */
    0                           /* checkKind */
};

static emlrtRTEInfo k_emlrtRTEI = {
    170,             /* lineNo */
    21,              /* colNo */
    "IsolationTree", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\stats\\anomaly\\+anomaly\\+coder\\+"
    "iforest\\IsolationTree.m" /* pName */
};

/* Function Definitions */
void IsolationTree_depth(const emlrtStack *sp,
                         const real32_T obj_SplitVariable[511],
                         const uint16_T obj_Children[1022],
                         const uint16_T obj_NumObservations[511],
                         const boolean_T obj_NonLeafLogicalIndices[511],
                         const real32_T obj_ContinuousSplits[255],
                         const uint8_T obj_ContinuousSplitIndices[511],
                         const emxArray_real32_T *X, emxArray_real32_T *depth)
{
  int32_T i;
  int32_T i1;
  int32_T ii;
  const real32_T *X_data;
  real32_T *depth_data;
  uint16_T integerDepth;
  uint16_T nodeNumber;
  boolean_T b_cfactor;
  X_data = X->data;
  nodeNumber = 1U;
  integerDepth = 0U;
  i = X->size[0];
  i1 = depth->size[0];
  depth->size[0] = X->size[0];
  emxEnsureCapacity_real32_T(sp, depth, i1, &k_emlrtRTEI);
  depth_data = depth->data;
  b_cfactor = false;
  for (ii = 0; ii < i; ii++) {
    boolean_T exitg1;
    exitg1 = false;
    while (!(exitg1 || (nodeNumber <= 0))) {
      if (obj_NonLeafLogicalIndices[nodeNumber - 1]) {
        b_cfactor = (obj_NumObservations[nodeNumber - 1] > 1);
        exitg1 = true;
      } else {
        int32_T i2;
        real32_T xcontinuous;
        i1 = (int32_T)obj_SplitVariable[nodeNumber - 1];
        if ((i1 < 1) || (i1 > 3)) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, 3, &b_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i2 = obj_ContinuousSplitIndices[nodeNumber - 1];
        if (i2 < 1) {
          emlrtDynamicBoundsCheckR2012b(0, 1, 255, &emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (ii + 1 > i) {
          emlrtDynamicBoundsCheckR2012b(ii + 1, 1, i, &d_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        xcontinuous = X_data[ii + X->size[0] * (i1 - 1)];
        if (muSingleScalarIsNaN(xcontinuous)) {
          exitg1 = true;
        } else {
          uint32_T u;
          if (xcontinuous < obj_ContinuousSplits[i2 - 1]) {
            nodeNumber = obj_Children[nodeNumber - 1];
          } else {
            nodeNumber = obj_Children[nodeNumber + 510];
          }
          u = integerDepth + 1U;
          if (integerDepth + 1U > 65535U) {
            u = 65535U;
          }
          integerDepth = (uint16_T)u;
        }
      }
    }
    if (ii + 1 > depth->size[0]) {
      emlrtDynamicBoundsCheckR2012b(ii + 1, 1, depth->size[0], &c_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    depth_data[ii] = integerDepth;
    if (b_cfactor) {
      if (ii + 1 > depth->size[0]) {
        emlrtDynamicBoundsCheckR2012b(ii + 1, 1, depth->size[0], &e_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if ((nodeNumber < 1) || (nodeNumber > 511)) {
        emlrtDynamicBoundsCheckR2012b(nodeNumber, 1, 511, &f_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (ii + 1 > depth->size[0]) {
        emlrtDynamicBoundsCheckR2012b(ii + 1, 1, depth->size[0], &g_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      depth_data[ii] += cfactor(obj_NumObservations[nodeNumber - 1]);
    }
    nodeNumber = 1U;
    b_cfactor = false;
    integerDepth = 0U;
  }
}

/* End of code generation (IsolationTree.c) */
