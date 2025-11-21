#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    clrscr();
    printf("Enter n value
");
    scanf("%d", &n);
    n > 0 ? printf("It is positive") : printf("It is negative");
    getch();
}
