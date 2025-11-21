#include <stdio.h>

int main()
{
    char s1[20], s2[20];
    int l1, l2, i, flag = 0;

    printf("Enter string 1:");
    gets(s1);

    printf("Enter string 2:");
    gets(s2);

    for(i=0; s1[i]!='\0'; i++);
    l1 = i;

    for(i=0; s2[i]!='\0'; i++);
    l2 = i;

    if(l1 != l2)
        flag = 1;
    else
    {
        for(i=0; s1[i]!='\0'; i++)
        {
            if(s1[i] != s2[i])
            {
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0)
        printf("Both strings are Equal");
    else
        printf("Both strings are not Equal");

    return 0;
}
