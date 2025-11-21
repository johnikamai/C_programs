#include <stdio.h>

int main() 
{
    int A[10][10], B[10][10], C[10][10];

    int r, C1, i, j;


    printf("Enter rows and columns size:");
    scanf("%d%d", &r, &C1);

    printf("Enter A matrix values:");
    for (i = 0; i < r; i++) 
{
        for (j = 0; j < C1; j++)
{
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter B matrix values:");
    for (i = 0; i < r; i++)
{
        for (j = 0; j < C1; j++) 
{
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < r; i++)
{
        for (j = 0; j < C1; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Result matrix is\n");
    for (i = 0; i < r; i++)
{
        for (j = 0; j < C1; j++)
{
            printf("%d", C[i][j]); 
        }
        printf("\n"); 
    }
    return 0;
}
