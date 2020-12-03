// #ifndef MATRIXLIBRARY_H
// #define MATRIXLIBRARY_H

#include <iostream>
#include <math.h>

using namespace std;

class MatrixLibrary
{
public:
  MatrixLibrary();
  virtual ~MatrixLibrary();
  float module(float a, float b, float c);
  void vetorial(float *vector1, float *vector2, float *vectorReturn);
  void calculate_zc(float *vector, float *vectorReturn);
  void calculate_xc(float *vector1, float *vector2, float *vectorReturn);
  void create_matrix_bt(float *vector1, float *vector2, float *b_t);
};

// #endif // MATRIXLIBRARY_H