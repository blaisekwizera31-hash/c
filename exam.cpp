#include <stdio.h>

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
float divide(int a, int b);

int main() {
    int choice, num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nSelect operation:\n");
    printf("1. Addition  2. Subtract  3. Divide\n");
    printf("Choose your operation (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Result: %d\n", add(num1, num2));
            break;
        case 2:
            printf("Result: %d\n", subtract(num1, num2));
            break;
        case 3:
            if(num2 != 0)
                printf("Result: %.2f\n", divide(num1, num2));
            else
                printf("Error: Division by zero!\n");
            break;
        default: 
            printf("Invalid choice!\n");
    }

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

float divide(int a, int b) {
    return (float)a / b;  // cast to float for decimal result
}
