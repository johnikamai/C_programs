#include <stdio.h>
#include <string.h>

int main()
{
    char s[20];

    printf("Enter string Name:");
    gets(s);

    printf("Lower case string is = %s", strupr(s));

    return 0;
}
