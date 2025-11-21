#include <stdio.h>

int main()
{
    int s1, s2, s3, s4, s5, sum;
    float average;
    printf("enter the values of s1, s2, s3, s4, s5:
");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
    sum = (s1 + s2 + s3 + s4 + s5);
    printf("Sum = %d
", sum);
    average = (s1 + s2 + s3 + s4 + s5) / 5.0;
    printf("average = %f", average);
    return 0;
}
