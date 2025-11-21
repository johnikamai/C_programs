#include <stdio.h>
#include <string.h>

int main()
{
    char s[20];

    printf("Enter string Name:");
    gets(s);

    printf("Reverse string is = %s", strrev(s));

    return 0;
}
