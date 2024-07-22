/*
 * _coder_myIsanomaly_info.c
 *
 * Code generation for function 'myIsanomaly'
 *
 */

/* Include files */
#include "_coder_myIsanomaly_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void);

/* Function Definitions */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[4] = {
      "789ce553cb4ac340143d2955baa9d68d6b71a520828a20eeaa35a5d0b48556915a6d6333"
      "da6026139a44db3f70e7fff80be20ff835dea4491f81a145b02ebc90"
      "39f7cc3973efe4924029690a80358ce2757584d988e7224c613692ba22c13856909e3917"
      "eb6f117685edb1813722b6ced9f8a421b869ebb6d7183a0c7de60aeb",
      "9919a1f2605aac6172569f26958071754a1a93400af2f31eeb3ed57d8e7ecf9ddcd09a26"
      "e3797424ef9b9e338f6424e791f4fd977e5bcacffac5f56f25fd3622"
      "7c8ff00697e42de0142da8e883c1a04c431e0d94693d439bd0c43d693a3d43eca048dc43"
      "0f3eedee92bb408e362ac43931860139391c5894b770847d38fec99d",
      "5fdbb35b3820a685fe3c6c08f2e9e41b92af0497b845dca3fa825495d6e0462eed68941b"
      "945b749e879ed9797524f3585f705eb2ff318b4c881f9f5fca32fba5"
      "5eb633cbec17c75ff51b48ea2dfabd6f4afae5127aad20aa8f87d757c74dc1ab6a97979b"
      "c2772e26f7a8cde933ef1e90f0dfaeff0d64485ca2",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 1696U, &nameCaptureInfo);
  return nameCaptureInfo;
}

mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xEntryPoints;
  mxArray *xInputs;
  mxArray *xResult;
  const char_T *propFieldName[9] = {"Version",
                                    "ResolvedFunctions",
                                    "Checksum",
                                    "EntryPoints",
                                    "CoverageInfo",
                                    "IsPolymorphic",
                                    "PropertyList",
                                    "UUID",
                                    "ClassEntryPointIsHandle"};
  const char_T *epFieldName[8] = {
      "Name",     "NumberOfInputs", "NumberOfOutputs", "ConstantInputs",
      "FullPath", "TimeStamp",      "Constructor",     "Visible"};
  xEntryPoints =
      emlrtCreateStructMatrix(1, 1, 8, (const char_T **)&epFieldName[0]);
  xInputs = emlrtCreateLogicalMatrix(1, 4);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("myIsanomaly"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath",
                emlrtMxCreateString(
                    "D:\\Fred\\MATLAB_Library(Github)\\DL_Num\\example\\3."
                    "\xe7\x95\xb0\xe5\xb8\xb8\xe5\x81\xb5\xe6\xb8\xac\\1.ML_"
                    "Anomaly\\myIsanomaly"
                    ".m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(738604.87736111111));
  emlrtSetField(xEntryPoints, 0, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 0, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 9, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("24.1.0.2537033 (R2024a)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)c_emlrtMexFcnResolvedFunctionsI());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("PDoOg2XV5ZomOFcmLZoupE"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/* End of code generation (_coder_myIsanomaly_info.c) */
