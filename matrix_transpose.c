#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j;

    printf("Enter A matrix rows & column size");
    scanf("%d%d", &r, &c);

    printf("Enter A matrix values");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Transpose matrix is :\n");
    for (j = 0; j < c; j++)
    {
        for (i = 0; i < r; i++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
