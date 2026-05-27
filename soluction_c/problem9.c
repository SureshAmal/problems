// PROBLEM:9
// WAP to find whether a number is Odd or Even without using a % operator.
// DIFFICULTY:7

// NOTE: in precious program we have done same thing.

#include <stdio.h>
int main(void) {
  int num = 0;
  printf("Enter the number: ");
  scanf("%d", &num);
  if (num <= 0) {
    printf("Please enter valid positive number");
    return 1;
  }

  if ((num & 1) == 0) {
    printf("Number %d is even\n", num);
  } else {
    printf("Number %d is odd\n", num);
  }
  return 0;
}
