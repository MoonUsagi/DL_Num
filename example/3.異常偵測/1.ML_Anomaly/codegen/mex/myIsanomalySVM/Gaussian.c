/*
 * Gaussian.c
 *
 * Code generation for function 'Gaussian'
 *
 */

/* Include files */
#include "Gaussian.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Function Definitions */
void Gaussian(const real32_T svT[28623], const real32_T svInnerProduct[9541],
              const real32_T x[3], real32_T kernelProduct[9541])
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  int32_T k;
  real32_T b_y[9541];
  real32_T y[3];
  real32_T alpha1;
  real32_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  y[0] = -2.0F * x[0];
  y[1] = -2.0F * x[1];
  y[2] = -2.0F * x[2];
  TRANSB1 = 'N';
  TRANSA1 = 'N';
  alpha1 = 1.0F;
  beta1 = 0.0F;
  m_t = (ptrdiff_t)1;
  n_t = (ptrdiff_t)9541;
  k_t = (ptrdiff_t)3;
  lda_t = (ptrdiff_t)1;
  ldb_t = (ptrdiff_t)3;
  ldc_t = (ptrdiff_t)1;
  sgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &y[0], &lda_t,
        (real32_T *)&svT[0], &ldb_t, &beta1, &b_y[0], &ldc_t);
  alpha1 = (x[0] * x[0] + x[1] * x[1]) + x[2] * x[2];
  for (k = 0; k < 9541; k++) {
    kernelProduct[k] =
        muSingleScalarExp(-((b_y[k] + alpha1) + svInnerProduct[k]));
  }
}

/* End of code generation (Gaussian.c) */
