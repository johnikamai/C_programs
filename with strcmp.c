#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20], s2[20];
    int x;

    printf("Enter string 1 Name:");
    scanf("%s", s1);

    printf("Enter string 2 Name:");
    scanf("%s", s2);

    x = strcmp(s1, s2);

    if (x == 0)
        printf("Both strings are Equal");
    else
        printf("Both strings are not Equal");

    return 0;
}
