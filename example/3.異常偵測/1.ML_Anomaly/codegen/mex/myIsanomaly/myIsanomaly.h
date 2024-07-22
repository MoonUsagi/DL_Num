/*
 * myIsanomaly.h
 *
 * Code generation for function 'myIsanomaly'
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
emlrtCTX emlrtGetRootTLSGlobal(void);

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData);

void myIsanomaly(myIsanomalyStackData *SD, const emlrtStack *sp,
                 const emxArray_real32_T *x, real32_T varargin_2,
                 emxArray_boolean_T *varargout_1,
                 emxArray_real32_T *varargout_2);

/* End of code generation (myIsanomaly.h) */
