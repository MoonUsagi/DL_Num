/*
 * myIsanomalySVM.h
 *
 * Code generation for function 'myIsanomalySVM'
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
void myIsanomalySVM(const emlrtStack *sp, const emxArray_real32_T *x,
                    real32_T scoreThreshold, emxArray_boolean_T *tf,
                    emxArray_real32_T *scores);

/* End of code generation (myIsanomalySVM.h) */
