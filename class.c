#include <stdio.h>

int main() {
    int choice, a, b, result;

    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting program...\n");
            break; // Exit the loop immediately
        }

        if (choice < 1 || choice > 4) {
            printf("Invalid choice! Please try again.\n");
            continue; // Skip the rest of the loop and show menu again
        }

        // Only ask for numbers if a valid operation was picked
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        // Perform calculation directly or call your function here
        if (choice == 1) printf("Result: %d\n", a + b);
        else if (choice == 2) printf("Result: %d\n", a - b);
        else if (choice == 3) printf("Result: %d\n", a * b);
        else if (choice == 4) {
            if (b != 0) printf("Result: %d\n", a / b);
            else printf("Error: Division by zero!\n");
        }
    }

    return 0;
}