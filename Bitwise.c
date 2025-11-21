#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, x, y;
    clrscr();
    printf("Enter a & b values: ");
    scanf("%d%d", &a, &b);
    x = a & b;
    printf("Bitwise AND = %d
", x);
    y = a | b;
    printf("Bitwise OR = %d
", y);
    getch();
}
