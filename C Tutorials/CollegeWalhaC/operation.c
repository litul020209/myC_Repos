#include <stdio.h>

int main() {
  float a=7;
  float b=2;
  float sum, difference, product, quotient, remainder;

  printf("Enter two integer values:   ");
  

  sum = a + b;
  difference = a - b;
  product = a * b;
  quotient = a/ b;


  printf("Sum: %f\n", sum);
  printf("Difference: %f\n", difference);
  printf("Product: %f\n", product);
  printf("Quotient: %f\n", quotient);
  printf("Remainder: %f\n", remainder);

  return 0;
}
