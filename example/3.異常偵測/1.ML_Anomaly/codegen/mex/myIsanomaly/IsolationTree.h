/*
 * IsolationTree.h
 *
 * Code generation for function 'IsolationTree'
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
void IsolationTree_depth(const emlrtStack *sp,
                         const real32_T obj_SplitVariable[511],
                         const uint16_T obj_Children[1022],
                         const uint16_T obj_NumObservations[511],
                         const boolean_T obj_NonLeafLogicalIndices[511],
                         const real32_T obj_ContinuousSplits[255],
                         const uint8_T obj_ContinuousSplitIndices[511],
                         const emxArray_real32_T *X, emxArray_real32_T *depth);

/* End of code generation (IsolationTree.h) */
