/*
 * cfactor.c
 *
 * Code generation for function 'cfactor'
 *
 */

/* Include files */
#include "cfactor.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
real32_T cfactor(real32_T n)
{
  static const real_T dv[22] = {1.0,
                                -0.5,
                                0.16666666666666666,
                                -0.033333333333333333,
                                0.023809523809523808,
                                -0.033333333333333333,
                                0.07575757575757576,
                                -0.2531135531135531,
                                1.1666666666666667,
                                -7.0921568627450977,
                                54.971177944862156,
                                -529.12424242424242,
                                6192.123188405797,
                                -86580.253113553117,
                                1.4255171666666667E+6,
                                -2.7298231067816094E+7,
                                6.015808739006424E+8,
                                -1.5116315767092157E+10,
                                4.2961464306116669E+11,
                                -1.3711655205088332E+13,
                                4.8833231897359319E+14,
                                -1.9296579341940068E+16};
  real_T s;
  real_T ta;
  real_T tst;
  real_T tt;
  real_T xdmln;
  real_T xdmy;
  real_T xinc;
  int32_T i;
  int32_T k;
  xdmln = muDoubleScalarLog(n);
  xdmy = n;
  xinc = 0.0;
  if (n < 9.0F) {
    xinc = 9.0 - muDoubleScalarFloor(n);
    xdmy = n + xinc;
    xdmln = muDoubleScalarLog(xdmy);
  }
  tt = 0.5 / xdmy;
  tst = 2.2204460492503131E-16 * tt;
  xdmy = 1.0 / (xdmy * xdmy);
  ta = 0.5 * xdmy;
  s = ta / 6.0;
  if (muDoubleScalarAbs(s) >= tst) {
    real_T tk;
    boolean_T exitg1;
    tk = 2.0;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 19)) {
      real_T trm;
      ta = ta * ((tk + 1.0) / (tk + 1.0)) * (tk / (tk + 2.0)) * xdmy;
      trm = ta * dv[k + 3];
      if (muDoubleScalarAbs(trm) < tst) {
        exitg1 = true;
      } else {
        s += trm;
        tk += 2.0;
        k++;
      }
    }
  }
  s += tt;
  if (xinc > 0.0) {
    k = (int32_T)xinc;
    for (i = 0; i < k; i++) {
      s += 1.0 / (n + (xinc - ((real_T)i + 1.0)));
    }
    xdmy = s - xdmln;
  } else {
    xdmy = s - xdmln;
  }
  return (2.0F * (real32_T)-xdmy - -1.15443134F) - 2.0F * (1.0F - 1.0F / n);
}

/* End of code generation (cfactor.c) */
