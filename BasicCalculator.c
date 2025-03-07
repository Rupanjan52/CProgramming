#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;


    printf("Select an operation to perform:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");


    printf("Enter your choice (1/2/3/4): ");
    if (scanf("%d", &choice) != 1) {
        printf("Error! Invalid input. Please enter a number between 1 and 4.\n");
        return 1;
    }


    if (choice < 1 || choice > 4) {
        printf("Error! Invalid choice. Please select a valid operation.\n");
        return 1;
    }


    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &num1, &num2) != 2) {
        printf("Error! Invalid number input.\n");
        return 1;
    }


    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error! Invalid choice.\n");
            break;
    }

    return 0;
}
