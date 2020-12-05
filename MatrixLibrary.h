#ifndef MATRIXLIBRARY_H
#define MATRIXLIBRARY_H

#include <iostream>
#include <math.h>

using namespace std;

// vector1: vector d
// vector2: up vector
// b_t: vector exit (b), return elements for matrix bt
void create_matrix_bt(float *vector1, float *vector2, float *b_t);

#endif // MATRIXLIBRARY_H