#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter a, b, c values: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c)
        printf("a is big
");
    else if (b > c)
        printf("b is big
");
    else
        printf("c is big
");

    return 0;
}
