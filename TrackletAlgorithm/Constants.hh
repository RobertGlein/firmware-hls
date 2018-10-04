// This header file defines the Global constants used in VMRouter
#pragma once
#include "ap_int.h"

using namespace std;

// Define max number of stubs an individual module can take
constexpr int MAX_nSTUBS = 64;
constexpr int MAX_nSECTORS = 1;
constexpr int MAX_nINNERRS = 3;
constexpr int MAX_nOUTERRS = 3;
constexpr int MAX_nREGIONS = 6;
constexpr int MAX_nEVENTS = 100;

// Define list of detector regions to run algorithm over
const string regionList[MAX_nREGIONS] = {"L1D3","L2D3","L3D3","L4D3","L5D3","L6D3"};
constexpr int nroutes[MAX_nREGIONS] = {6,8,6,8,6,8};

// Raw Stub Data
typedef ap_uint<36> StubData;
typedef ap_uint<18> ReducedStubData;

// Define bit widths for full stub parameters (for both PS & 2S)
typedef ap_uint<12> FullZ_Layer_PS;
typedef ap_uint<14> FullPhi_Layer_PS;
typedef ap_uint<7>  FullR_Layer_PS;
typedef ap_uint<3>  FullPt_Layer_PS;

typedef ap_uint<8> FullZ_Layer_2S;
typedef ap_uint<17> FullPhi_Layer_2S;
typedef ap_uint<8>  FullR_Layer_2S;
typedef ap_uint<3>  FullPt_Layer_2S;

// Define bit widths for reduced stub parameters
typedef ap_uint<4> ReducedZ_Layer;
typedef ap_uint<3> ReducedPhi_Layer;
typedef ap_uint<2> ReducedR_Layer;
typedef ap_uint<3> ReducedPt_Layer;
typedef ap_uint<6> ReducedIndex;

