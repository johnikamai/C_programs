#include <stdio.h>

int main() {
    int a, b, c;
    char ch;

    printf("Enter a & b value: ");
    scanf("%d%d", &a, &b);

    printf("Enter your choice (+ add, - sub, / div, * mul): ");
    scanf(" %c", &ch);

    switch (ch) {
        case '+':
            c = a + b;
            printf("Sum = %d
", c);
            break;
        case '-':
            c = a - b;
            printf("Sub = %d
", c);
            break;
        case '/':
            if (b != 0)
                c = a / b;
                printf("Div = %d
", c);
            else
                printf("Division by zero error!
");
            break;
        case '*':
            c = a * b;
            printf("Mult = %d
", c);
            break;
        default:
            printf("Invalid choice
");
            break;
    }
    return 0;
}
