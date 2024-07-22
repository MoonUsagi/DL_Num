/*
 * CompactClassificationSVM.h
 *
 * Code generation for function 'CompactClassificationSVM'
 *
 */

#pragma once

/* Include files */
#include "myIsanomalySVM_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void CompactClassificationSVM_score(const emlrtStack *sp,
                                    const real32_T obj_Alpha[9541],
                                    const real32_T obj_SupportVectorsT[28623],
                                    const real32_T obj_Mu[3],
                                    const real32_T obj_Sigma[3],
                                    const emxArray_real32_T *X,
                                    emxArray_real32_T *S);

/* End of code generation (CompactClassificationSVM.h) */
