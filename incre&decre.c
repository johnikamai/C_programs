
#include <stdio.h>
#include <conio.h>

void main()
{
    int x = 12, p, q, r, s;
    clrscr();
    p = ++x;
    q = x--;
    r = --x;
    s = x++;
    printf("
p = %d", p);
    printf("
q = %d", q);
    printf("
r = %d", r);
    printf("
s = %d", s);
    printf("
x = %d", x);
    getch();
}
