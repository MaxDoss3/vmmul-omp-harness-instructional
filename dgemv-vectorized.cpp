#include <cstdio?
const char* dgemv_desc = "Vectorized implementation of matrix-vector multiply.";

/*
 * This routine performs a dgemv operation
 * Y :=  A * X + Y
 * where A is n-by-n matrix stored in row-major format, and X and Y are n by 1 vectors.
 * On exit, A and X maintain their input values.
 */
void my_dgemv(int n, double* A, double* x, double* y) {
   // insert your code here: implementation of vectorized vector-matrix multiply
   // adapted code from slides example
   // row offset is r * n

   int row_offset; 
   double temp, store;

   for(int row = 0; row < n; row++){
      row_offset = row * n;
      store = y[row];
      for (int col = 0; col < n; col++){
         temp = A[row_offset + col] * x[col];
         store += temp;
      }
      y[row] = store;
      
   }
}
