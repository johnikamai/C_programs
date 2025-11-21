#include <stdio.h>
int main()
{
    int a[100], n, i;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter array values:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n Display array values");
    for (i = 0; i < n; i++)
    {
        printf("\n  %d   %u", i, a[i], &a[i]);
    }

    return 0;
}
