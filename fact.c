#include <stdio.h>

int main() {
    int i, n;
    int f = 1;

    printf("Enter any number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        f = f * i;
    }

    printf("Factorial is = %d
", f);
    return 0;
}
