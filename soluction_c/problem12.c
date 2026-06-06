// PROGRAM:12
// WAP to find Max, Min, Average of n numbers, n should be taken from user and
// all n value should be taken from user (Note that you are not allowed to use
// an array for this)
// DIFFICULTY:8

#include <math.h>
#include <stdio.h>

int main(void) {
  // I'm thinking of many different ways to solve this
  // 1. first get n then loop and ask user for number values in loop we directly
  // compute the min,max and sum
  // TODO: 2. difficult we get user input as coma , seperating values one direct
  // input then we try to parse string and get numbers directly computing score
  // from string no array needed.

  float min = INFINITY, max = -INFINITY, sum = 0;
  // first approach
  int num = -1;
  float k = 0;
  printf("Enter the how many number to be enter :");
  scanf("%d", &num);
  if (num <= 0) {
    printf("Please enter the valid positive number.");
    return -1;
  }
  for (int i = 0; i < num; i++) {
    printf("Enter %d value :", i + 1);
    scanf("%f", &k);
    if (min > k) {
      min = k;
    }
    if (max < k) {
      max = k;
    }
    sum = sum + k;
  }
  printf("min: %f\nmax: %f\navg: %f\n", min, max, sum / num);
  return 0;
}
