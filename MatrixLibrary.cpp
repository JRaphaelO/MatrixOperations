#include "MatrixLibrary.h"

float module(float a, float b, float c)
{
  return sqrt(pow(a, 2) + pow(b, 2) + pow(c, 2));
}

void vetorial(float *vector1, float *vector2, float *vectorReturn)
{
  vectorReturn[0] = vector1[1] * vector2[2] - vector1[2] * vector2[1];
  vectorReturn[1] = vector1[2] * vector2[0] - vector1[0] * vector2[2];
  vectorReturn[2] = vector1[0] * vector2[1] - vector1[1] * vector2[0];
}

void calculate_zc(float *vector, float *vectorReturn)
{
  vectorReturn[0] = -1 * vector[0] / module(vector[0], vector[1], vector[2]);
  vectorReturn[1] = -1 * vector[1] / module(vector[0], vector[1], vector[2]);
  vectorReturn[2] = -1 * vector[2] / module(vector[0], vector[1], vector[2]);
}

void calculate_xc(float *vector1, float *vector2, float *vectorReturn)
{
  float v[3];

  vetorial(vector1, vector2, v);

  vectorReturn[0] = v[0] / module(v[0], v[1], v[2]);
  vectorReturn[1] = v[1] / module(v[0], v[1], v[2]);
  vectorReturn[2] = v[2] / module(v[0], v[1], v[2]);
}

void create_matrix_bt(float *vector1, float *vector2, float *b_t)
{
  float zc[3], xc[3], yc[3];

  calculate_zc(vector1, zc);
  calculate_xc(vector2, zc, xc);
  calculate_xc(zc, xc, yc);

  float bt[16] = {xc[0], yc[0], zc[0], 0.0f,
                  xc[1], yc[1], zc[1], 0.0f,
                  xc[2], yc[2], zc[2], 0.0f,
                  0.00f, 0.00f, 0.0f, 1.0f};

  int l;
  for (l = 0; l < 16; l++)
    b_t[l] = bt[l];
}
