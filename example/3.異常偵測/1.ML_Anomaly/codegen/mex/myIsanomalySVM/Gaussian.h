/*
 * Gaussian.h
 *
 * Code generation for function 'Gaussian'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void Gaussian(const real32_T svT[28623], const real32_T svInnerProduct[9541],
              const real32_T x[3], real32_T kernelProduct[9541]);

/* End of code generation (Gaussian.h) */
