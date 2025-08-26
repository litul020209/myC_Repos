#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    int i;
  
    for (i = 1; i <= n; ++i) {
        fact *= i;
    } 
  
    return fact;
}

int main() {
    int number;
  
    printf("Enter a positive integer: ");
    scanf("%d", &number);
  
    if (number < 0) {
        printf("Error: Factorial of a negative number doesn't exist.");
    } else {
        int result = factorial(number);
        printf("The factorial of %d  is \n", result);
    }
  
    return 0;
}
