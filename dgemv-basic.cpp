const char* dgemv_desc = "Basic implementation of matrix-vector multiply.";

/*
 * This routine performs a dgemv operation
 * Y :=  A * X + Y
 * where A is n-by-n matrix stored in row-major format, and X and Y are n by 1 vectors.
 * On exit, A and X maintain their input values.
 */
void my_dgemv(int n, double* A, double* x, double* y) {
   // insert your code here: implementation of basic matrix multiply
   
   int row_offset; 
   // adapted code from slides example
   // row offset is r * n
   for(int row = 0; row < n; row++){
      row_offset = row * n;
      for (int col = 0; col < n; col++){
         y[row] += A[row_offset + col] * x[col];
      }
   }
   
}
