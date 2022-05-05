#include "Geometry.h"
#include <math.h>

float CircleS(double* A) {
  float S;
  S = M_PI * pow(A[2], 2);
  return S;
}
