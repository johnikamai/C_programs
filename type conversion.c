#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;
    float c, d;
    clrscr();
    printf("Enter a and b values: ");
    scanf("%d%d", &a, &b);
    c = a / b;
    printf("c = %.2f
", c);
    d = (float)a / b;
    printf("d = %.2f
", d);
    getch();
}
