#include <stdio.h>
#include <string.h>

int main()
{
    char s[20];
    int i, j, flag = 0;

    printf("Enter string Name:");
    gets(s);

    for(i=0; s[i]!='\0'; i++);
    j = i - 1;

    for(i=0; j>=0; i++, j--)
    {
        if(s[i] != s[j])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("It is a palindrome.");
    else
        printf("It is not a palindrome.");

    return 0;
}
