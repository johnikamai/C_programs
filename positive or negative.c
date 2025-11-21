#include <stdio.h>

int main() {
    int X;
    printf("Enter X value: ");
    scanf("%d", &X);

    switch (X > 0) {
        case 1:
            printf("It is positive
");
            break;
        case 0:
            printf("It is a negative
");
            break;
    }
    return 0;
}
