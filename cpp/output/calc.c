#include <stdio.h>

int main() {
    char operator;
    float n1, n2;
    int i_r;
    float f_r;

    printf("Enter 2 numbers : ");
    scanf("%f,%f", &n1,n2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);


    switch(operator) {
        case '+':
            f_r = n1 + n2;
            printf("Result: %.2f\n", f_r);
            break;
        case '-':
            f_r = n1 - n2;
            printf("Result: %.2f\n", f_r);
            break;
        case '*':
            f_r = n1 * n2;
            printf("Result: %.2f\n", f_r);
            break;
        case '/':
            if (n2 != 0) {
                f_r = n1 / n2;
                printf("Result: %.2f\n", f_r);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }



    return 0;
}
