// PROBLEM:8
// WAP to find a total odd and total even digit of a given number.
// DIFFICULTY:7

// NOTE: this problem is  great for understanding enum

#include <stdio.h>

enum Digit { ODD = 0, EVEN = 1 };
void total_odd_even_in_digit(int num, int sol_arr[]);
int main(void) {
  int num = 0;
  printf("Enter the number: ");
  scanf("%d", &num);
  int sol_arr[2] = {0};
  // in C99 if we have pre difine size we can direcly use assign to
  // all values

  total_odd_even_in_digit(num, sol_arr);

  printf("Odd digit are %d\n", sol_arr[ODD]);
  printf("Even digit are %d\n", sol_arr[EVEN]);

  return 0;
}

void total_odd_even_in_digit(int num, int sol_arr[]) {
  while (num > 0) {
    if ((num % 10) % 2 == 0) {
      sol_arr[EVEN]++;
    } else {
      sol_arr[ODD]++;
    }
    num = num / 10;
  }
}
