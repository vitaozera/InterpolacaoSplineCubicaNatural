void preencherVetorH(double **matriz, int n, double *vetorH);
void preencherVetorB(double **matriz, int n, double *vetorH, double *vetorB);
void preencherVetorV(double **matriz, int n, double *vetorH, double *vetorV);
void preencherVetorU(double **matriz, int n, double *vetorB, double *vetorU);
void preencherMatrizA(int n, double *vetorV, double *vetorH, double matrizA[n-2][n-2]);
double LU_subtrairLinhas(int n, double matrizU[n-2][n-2], int i);
void fatoracaoLU(int n, double matrizA[n-2][n-2], double matrizL[n-2][n-2], double matrizU[n-2][n-2]);
double subprodutoLYU(int i, int n, double matrizL[n-2][n-2], double *vetorY);
void sistemaLYU(int n, double matrizL[n-2][n-2], double *vetorY, double *vetorU);
double subprodutoUZY(int n, int i,  double matrizU[n-2][n-2], double *vetorZ);
void sistemaUZY(int n, double matrizU[n-2][n-2], double *vetorZ, double *vetorY);
void spline(double **matriz, int n, double *vetorZ);