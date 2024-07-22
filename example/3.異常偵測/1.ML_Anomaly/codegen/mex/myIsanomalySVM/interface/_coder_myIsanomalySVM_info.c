/*
 * _coder_myIsanomalySVM_info.c
 *
 * Code generation for function 'myIsanomalySVM'
 *
 */

/* Include files */
#include "_coder_myIsanomalySVM_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void);

/* Function Definitions */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[7] = {
      "789ced564b6fd340109e40917a01c2855f50a1a220f30888d05b9328d48584a03c4a1587"
      "76136f1babfb08eb75e55c3873833fc0855f8138f58a1007240e88ff"
      "82c43ab1f3b0641c3595230a2325b3e36f76be9d59e75320a597530070054676726de42f"
      "fb71daf71760d6c278caf717437160976065665f80bff57d9733895d",
      "390a18a278bcd3e4d46288c9faa08f41609b93636c0e91038be0ba45716d3aa878112d4d"
      "41e3c083bc75a187bb47358782e8d9931392e9603c8ffd887e5762e6"
      "11b6f03cc279ff0adf6aea747c41fde7117cfe6b0b1f7cdf8206b4a1081b604009046030"
      "d5aa0c9b5087a7ea3b0f7bca5bd05118529f01acc363154be881a39e",
      "de54d94595b1071515531561705526853e10b536200b1af49ddc4ba77a8b19705745e561"
      "fe2630e02a0fa9bc81caab41532165f5cc54fb88caf330199acb7e44"
      "df57e79c4bd84ff25787fecbd79fa924f95ebf7fb49e245f60cbe27323eacdfb5e5f8fe0"
      "4b87f02353164a4d96c538bfddc30ff3b982ecf5b626e7a8c6f0c49d",
      "0322e2a4ea7f8cd83fef1c9b11f5d321bca517da6b1449823a8273b96648ce4987bb862d"
      "91b48d2e41b62df0a19199ac08468259cc7bc64d2c8c0c558e18054e"
      "fba82b6bcdb246277dbc5bb08fdb317d0478703c2d389d363c9c232d626bf631d59e60c1"
      "302939ac2b2dce96a6fb27a7e40beab763f802bca55716bcd7e1e88c",
      "8c9a9d313b3bef7a13d3976ffaf744f51a7e7c7e90289f6fe75daf77dcc66077eb551699"
      "15973ed3c50ba69372f1bf5e07f51a11f5d321fc0cf4da17eaaac0a6"
      "d5955cccfc9edf2cd8c78d983e02fc8f7a5d1788d9075cd0e5fd3f5ff43e6b317c017e56"
      "3a3d1ed9f03693d3938d4f09ebb3f18b24cae7db79d7e76d54af3bc8",
      "dc119d8aecdfdfcdb977ee7151f8fbf5f937ae5a2db7",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 4568U, &nameCaptureInfo);
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
  xInputs = emlrtCreateLogicalMatrix(1, 3);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("myIsanomalySVM"));
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
                    "SVM.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(738604.877337963));
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
                emlrtMxCreateString("LWgf9LC7aHj0aSaPyXUxfB"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/* End of code generation (_coder_myIsanomalySVM_info.c) */
