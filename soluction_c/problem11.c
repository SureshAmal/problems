// PROBLEM:11
// WAP to find weather given number is Armstrong number is not.
// DIFFICULTY:8

// what is Armstrong number
// cube sum of digit is same as number

#include <stdio.h>

int get_digit_cube_sum(int num);
int main() {
  int num = 0;
  printf("enter the number :");
  scanf("%d", &num);

  if (num == get_digit_cube_sum(num)) {
    printf("%d is Armstrong number.\n", num);
  } else {
    printf("%d is not Armstrong number\n", num);
  }
  return 0;
}

int get_digit_cube_sum(int num) {
  int sum = 0;
  int digit = 0;
  while (num > 0) {
    digit = num % 10;
    sum = sum + digit * digit * digit;
    // NOTE: we can also use pow(num%10,3)
    num = num / 10;
  }
  return sum;
}
