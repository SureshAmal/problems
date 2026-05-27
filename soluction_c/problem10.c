// PROBLEM:10
// WAP to find a prime number between range (range should be entered by user).
// DIFFICULTY:8

#define IMPLIMENTAION_ARRAY_UTILS
#include <stdio.h>

#include "./array_until.h"

int is_prime(int num);
int main(void) {
  int min = -1, max = -1;
  printf("enter the range from min and max seperated by , :");
  scanf("%d,%d", &min, &max);

  if (min <= 0 || max <= 0) {
    printf("please enter valid positive values");
    return 1;
  }
  if (min >= max) {
    printf(
        "min value is equal or greater than max please enter valid number\n");
  }

  // 1,2,3,5,7,11,13,17,19
  // between 3 and 15 we have 3,5,7,11,15 exclusion of start and end
  // it same as finding the factors but for in range and for every value
  int prime_size = max - min;
  int primes[prime_size];
  int k = 0;
  set_array(prime_size, primes, -1);

  for (int i = min; i <= max; i++) {
    if (is_prime(i)) {
      primes[k] = i;
      k++;
    }
  }

  print_array(prime_size, primes);

  return 0;
}

int is_prime(int num) {
  for (int i = 2; i < num / 2; i++) {
    if (num % i == 0) {
      return 0;
    }
  }
  return 1;
}
