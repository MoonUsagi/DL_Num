/*
 * IsolationForest.h
 *
 * Code generation for function 'IsolationForest'
 *
 */

#pragma once

/* Include files */
#include "myIsanomaly_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
uint16_T
IsolationForest_IsolationForest(anomaly_iforest_IsolationTree obj_Trees[100]);

void IsolationForest_score(const emlrtStack *sp,
                           const anomaly_iforest_IsolationTree obj_Trees[100],
                           const emxArray_real32_T *X, emxArray_real32_T *s);

/* End of code generation (IsolationForest.h) */
