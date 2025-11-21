#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20], s2[20];
    printf("Enter string 1 Number: ");
    gets(s1);
    printf("Enter string 2 Name: ");
    gets(s2);
    strcat(s1, s2);
    printf("Merge string = %s", s1);
    return 0;
}
