#include <stdio.h>

#define N 4  // Tamanho da matriz 4x4

void gauss(float A[N][N], float b[N])
{
    int i, j, k;
    float multi;
    float x[N];

    // Eliminação de Gauss (triangular superior)
    for (i = 0; i < N - 1; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            multi = A[j][i] / A[i][i];
            for (k = 0; k < N; k++)
            {
                A[j][k] -= multi * A[i][k];
            }
            b[j] -= multi * b[i];
        }
    }
    for (int s = 0; s < 6; s++)
    {
        // Substituição regressiva
        x[N - 1] = b[N - 1] / A[N - 1][N - 1];
        for (i = N - 2; i >= 0; i--)
        {
            x[i] = b[i];
            for (j = i + 1; j < N; j++)
            {
                x[i] -= A[i][j] * x[j];
            }
            x[i] /= A[i][i];
        }

        // Mostrar a solução
        printf("Solução do sistema S%d:\n", s + 1);
        for (i = 0; i < N; i++)
        {
            printf("x%d = %.4f\n", i + 1, x[i]);
        }
    }
}
int main()
{
    // Matriz A (4x4) e vetor b
    float A[N][N] = {
        {2, 2, 1, 1},
        {1, -1, 2, -1},
        {3, 2, -3, -2},
        {4, 3, 2, 1}
    };

    float b[N] = {7, 1, 4, 12};

    // Resolver o sistema
    gauss(A, b);

    return 0;
}

