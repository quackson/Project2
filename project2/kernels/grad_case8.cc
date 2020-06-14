#include "../run2.h"

void grad_case8(float (&dB)[32], float (&dA) [2][16]) {
  for (int i = 0; i < 32; ++i) {
    float temp = 0;
    temp = (temp + dB[i]);
    dA[i / 16][i % 16] = temp;
  }
}

