#include<stdio.h>
int main()
{
    int a[10][10], r, c, i, j;
    printf("Enter row & column sizes:");
    scanf("%d%d", &r, &c);
    printf("Enter 2D array values:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Display 2D array values:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
