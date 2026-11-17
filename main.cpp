#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;
    double baseAmount, gstAmount, totalAmount;

    while (1) {
        printf("\n============================================\n");
        printf("   SMART COMMERCIAL CALCULATOR & GST CHECKER\n");
        printf("============================================\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Calculate GST (Standard 18%%)\n");
        printf("6. Exit\n");
        printf("--------------------------------------------\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
        } 
        else if (choice == 2) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
        } 
        else if (choice == 3) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
        } 
        else if (choice == 4) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
        } 
        else if (choice == 5) {
            printf("Enter product base price: ");
            scanf("%lf", &baseAmount);

            if (baseAmount < 0) {
                printf("Error: Base price cannot be negative.\n");
            } else {
                gstAmount = baseAmount * 0.18;
                totalAmount = baseAmount + gstAmount;

                printf("\n--- GST Invoice Breakdown ---\n");
                printf("Base Product Price : %.2lf\n", baseAmount);
                printf("GST Tax @ 18%%      : %.2lf\n", gstAmount);
                printf("Final Payable Price: %.2lf\n", totalAmount);
                printf("-----------------------------\n");
            }
        } 
        else if (choice == 6) {
            printf("\nExiting program. Thank you for using the calculator!\n");
            break;
        } 
        else {
            printf("Invalid selection! Please enter a number between 1 and 6.\n");
        }
    }

    return 0;
}