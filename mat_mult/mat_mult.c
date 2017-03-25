void mat_mult( double *A, double *B, double *C, int I, int J, int K )
{
    int i, j, k;
    double t;

    for( i = 0; i < I; i++ ) {
        for( k = 0; k < K; k++ ) {
            t = 0.0;
            for( j = 0; j < J; j++ ) {
                t += A[i*J+j] * B[j*K+k];
            }
            C[i*K+k] = t;
        }
    }
}  