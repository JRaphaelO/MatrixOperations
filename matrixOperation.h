#ifndef MATRIXOPERATION_H
#define MATRIXOPERATION_H

#include <iostream>
#include <math.h>
using namespace std;

float module(float a, float b, float c);
void vetorial(float *vector1, float *vector2, float *vectorReturn);
void calculate_zc(float *vector, float *vectorReturn);
void calculate_xc(float *vector1, float *vector2, float *vectorReturn);
void create_matrix_bt(float *vector1, float *vector2, float *b_t);
void calculateMatrix(float *m1, float *m2, float **matrix_view);

#endif // MATRIXOPERATION_H