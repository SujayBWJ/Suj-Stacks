#include <stdio.h>

// Function to calculate sum of digits
int sumOfDigits(int num) {
    int sum = 0, digit;
    
    while (num > 0) {
        digit = num % 10; // Extract last digit
        sum += digit;      // Add it to sum
        num /= 10;         // Remove last digit
    }
    
    return sum;
}

int main() {
    int num;
    
    // Input validation to ensure at least a 3-digit number
    
        printf("Enter an integer (at least 3 digits): ");
        scanf("%d", &num);
        
        if (num < 100) 
            printf("Invalid input! Please enter a number with at least 3 digits.\n");
            

    // Function call
    int result = sumOfDigits(num);

    // Display result
    printf("Sum of digits: %d\n", result);

    return 0;
}