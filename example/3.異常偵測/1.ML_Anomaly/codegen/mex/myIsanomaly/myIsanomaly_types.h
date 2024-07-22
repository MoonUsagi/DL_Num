/*
 * myIsanomaly_types.h
 *
 * Code generation for function 'myIsanomaly'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef struct_emxArray_real32_T
#define struct_emxArray_real32_T
struct emxArray_real32_T {
  real32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_real32_T */
#ifndef typedef_emxArray_real32_T
#define typedef_emxArray_real32_T
typedef struct emxArray_real32_T emxArray_real32_T;
#endif /* typedef_emxArray_real32_T */

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T
struct emxArray_boolean_T {
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_boolean_T */
#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T
typedef struct emxArray_boolean_T emxArray_boolean_T;
#endif /* typedef_emxArray_boolean_T */

#ifndef c_typedef_anomaly_iforest_Isola
#define c_typedef_anomaly_iforest_Isola
typedef struct {
  real32_T SplitVariable[511];
  uint16_T Children[1022];
  uint16_T NumObservations[511];
  boolean_T CategoricalSplitLogicalIndices[511];
  boolean_T NonLeafLogicalIndices[511];
  real32_T ContinuousSplits[255];
  uint8_T CategoricalSplitIndices[511];
  uint8_T ContinuousSplitIndices[511];
  uint8_T NumColumnsCategorical;
  uint16_T NumNodes;
} anomaly_iforest_IsolationTree;
#endif /* c_typedef_anomaly_iforest_Isola */

#ifndef typedef_b_myIsanomaly
#define typedef_b_myIsanomaly
typedef struct {
  anomaly_iforest_IsolationTree t0_Trees[100];
} b_myIsanomaly;
#endif /* typedef_b_myIsanomaly */

#ifndef typedef_myIsanomalyStackData
#define typedef_myIsanomalyStackData
typedef struct {
  b_myIsanomaly f0;
} myIsanomalyStackData;
#endif /* typedef_myIsanomalyStackData */

/* End of code generation (myIsanomaly_types.h) */
