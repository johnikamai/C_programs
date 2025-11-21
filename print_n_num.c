#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        printf("%3d ", i);
        if (i % 10 == 0)
            printf("
");
    }
    return 0;
}
