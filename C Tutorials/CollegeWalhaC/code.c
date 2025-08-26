#include <stdio.h>

int main() {
  int input;
  int output;

  printf("Enter a binary number (0 or 1): ");
  scanf("%d", &input);

  output = !input;
  printf("The NOT gate output is: %d\n", output);

  return 0;
}
