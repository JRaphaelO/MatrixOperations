#include "matrixOperation.h"

int main()
{
  float *b_array;
  float d[3]{0.1f, -0.1f, -1.1f};
  float u[3]{0.0f, 1.0f, 0.0f};
  float p[3]{-0.1f, 0.1f, 0.1f};

  float t_array[16] = {1.00f, 0.00f, 0.00f, 0.00f,
                       0.00f, 1.00f, 0.00f, 0.00f,
                       0.00f, 0.00f, 1.00f, 0.00f,
                       -p[0], -p[1], -p[2], 1.00f};
  float view[16];
  create_matrix_bt(d, u, b_array);
  int l = 0;
  for (l = 0; l < 16; l++)
    cout << b_array[l] << " " << endl;

  // calculateMatrix(b_array, t_array, view);
  // vetorial(d, a2, ax);

  return 0;
}