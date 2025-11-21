#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, right, left;
    clrscr();
    printf("Enter a & b values: ");
    scanf("%d%d", &a, &b);
    right = a >> b;
    printf("Bitwise right shift = %d
", right);
    left = a << b;
    printf("Bitwise left shift = %d
", left);
    getch();
}
