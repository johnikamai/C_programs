#include <stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int l;
    printf("Enter string name: ");
    scanf("%s", s);
    l = strlen(s);
    printf("length of the string = %d", l);
    return 0;
}
