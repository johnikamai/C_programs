#include <stdio.h>

int main() {
    int n, d, c, sum = 0, temp;
    printf("Enter any number: ");
    scanf("%d", &n);

    temp = n;

    while (n > 0) {
        d = n % 10;
        c = d * d * d;    // For 3-digit Armstrong numbers
        sum = sum + c;
        n = n / 10;
    }

    if (temp == sum) {
        printf("It is an Armstrong number
");
    } else {
        printf("NOT an Armstrong number
");
    }
    return 0;
}
