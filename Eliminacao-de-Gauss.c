#include <stdio.h>

#define N 4  // Dimensão da matriz - NxN = 4x4

void gauss(double A[N][N], double b[N])
{
    int i, j, k;
    double multi;
    double x0[N];
    double x[N] = {0.5000, 2.0000, 0.9000, 1.2000};

    // Eliminação de Gauss (triangular superior) - printa na tela a matriz, seus multiplicadores e a operação necessária para tornar uma matriz triangular superior
    for (i = 0; i < N - 1; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            multi = A[j][i] / A[i][i];
            printf("M%d|%d = %.4f   L%d <- L%d - %.4fL%d \n", j + 1, i + 1, multi, j + 1, j + 1, multi, i + 1);
            for (k = 0; k < N; k++)
            {
                A[j][k] -= multi * A[i][k];
            }
            b[j] -= multi * b[i];
        }
        printf("\n");
        for (int linha = 0; linha < N; linha++)
        {
            printf("|");
            for (int coluna = 0; coluna < N; coluna++)
            {
                printf("%.4f ", A[linha][coluna]);
            }
            printf("| %.4f |\n", b[linha]);
        }
        printf("\n");
    }
    printf("\n\n");
    for (int s = 0; s < 6; s++)
    {
        // Mostrar a solução - Printa todas as 6 soluções (Contando com a S-0)
        printf("Solução do sistema S-%d: ", s);
        for (i = 0; i < N; i++)
        {
            printf("X%d = %.4f ", i + 1, x[i]);
        }
        printf("\n\n");
        // Substituição regressiva - Descobre o valor das variaveis
        x[N - 1] = b[N - 1] / A[N - 1][N - 1];
        for (i = N - 2; i >= 0; i--)
        {
            x0[i] = x[i];
            x[i] = b[i];
            for (j = i + 1; j < N; j++)
            {
                x[i] -= A[i][j] * x0[j];
            }
            x[i] /= A[i][i];
        }
    }
}
int main()
{
    // Matriz A (4x4) e vetor b
    double A[N][N] = {
        {2, 2, 1, 1},
        {1, -1, 2, -1},
        {3, 2, -3, -2},
        {4, 3, 2, 1}
    };

    double b[N] = {7, 1, 4, 12};

    // Resolver o sistema
    gauss(A, b);

    return 0;
}

