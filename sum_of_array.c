#include <stdio.h>
int main()
{
    int a[100], n, i;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("\n Enter array values:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("Sum of array values = %d", sum);
    return 0;
}
