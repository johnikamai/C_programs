#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20], s2[20];
    printf("Enter string 1 Name: ");
    gets(s1);
    strcpy(s2, s1);
    printf("Original string = %s", s1);
    printf("\n Copied string = %s", s2);
    return 0;
}
