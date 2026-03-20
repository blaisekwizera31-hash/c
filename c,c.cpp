#include <stdio.h>

// Function to perform the chosen operation
int calculate(int choice, int a, int b) {
    int result = 0;

    switch (choice) {
        case 1: // addition
            result = a + b;
            break;
        case 2: // subtraction
            result = a - b;
            break;
        case 3: // multiplication
            result = a * b;
            break;
        case 4: // division
            if (b != 0)
                result = a / b;
            else {
                printf("Error: Division by zero!\n");
                result = 0;
            }
            break;
        case 5: // exit case
            printf("Exiting program...\n");
            return -1; // special return value to signal exit
        default:
            printf("Invalid choice!\n");
            result = 0;
            break;
    }

    return result;
}

int main() {
    int choice, a, b, result;

    while (1) {
        printf("\nEnter two numbers: ");
        scanf("%d %d", &a, &b);

        printf("\nChoose operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        result = calculate(choice, a, b);

        if (choice == 5) {
            return 0; // exit program if user chose 5
        }

        // Only print result if choice was valid and not exit
        if (choice >= 1 && choice <= 4) {
            printf("Result: %d\n", result);
        }
    }

    return 0;
}