// PROBLEM:5
// WAP to a summation of a digit of given number. (Iterative and recursive)
// DIFFICULTY:5

#include <stdio.h>

int ite_digit_sum(int num);
int rec_digit_sum(int num);

int main(void) {
  int num = 0;
  printf("enter the number: ");
  scanf("%d", &num);
  if (num < 0) {
    printf("Please enter the valid positive number");
    return 0;
  }
  if (num == 0) {
    printf("digit sum of number is 0");
    return 0;
  }

  printf("digit sum of %d is %d\n", num, ite_digit_sum(num));
  printf("digit sum of %d is %d\n", num, rec_digit_sum(num));
  return 0;
}

int ite_digit_sum(int num) {
  int sum = 0;
  while (num > 0) {
    // NOTE: modulas 10 return last digit
    sum = sum + num % 10;
    num = num / 10; // divide by 10 remove the last element in integer.
  }
  return sum;
}

int rec_digit_sum(int num) {
  if (num <= 0) {
    return 0;
  }
  return rec_digit_sum(num / 10) + (num % 10);
}
