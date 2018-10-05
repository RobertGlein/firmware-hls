#ifndef CONSTANTS_HH
#define CONSTANTS_HH

#include "ap_int.h"

//#include <cmath>
//#include "hls_math.h"

static const int kTMUX = 6;
static const int kMaxProc = kTMUX * 6;

static const int kNBits_MemAddr = 7;
static const int kMemDepth = (1<<kNBits_MemAddr);

const int MEBinsBits = 3;

#endif
