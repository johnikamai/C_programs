#include <stdio.h>

int main()
{
    int bs, da, hra, gs;
    printf("Enter bs: ");
    scanf("%d", &bs);

    if (bs > 10000)
    {
        da = bs * 5 / 100;
        hra = bs * 10 / 100;
    }
    else
    {
        da = bs * 10 / 100;
        hra = bs * 15 / 100;
    }

    gs = bs + da + hra;
    printf("Gross salary = %d
", gs);
    return 0;
}
