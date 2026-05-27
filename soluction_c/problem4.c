// PROBLEM:4
// WAP to find a Factor of a given number (iterative and recursive)
// DIFFICULTY:4

#include <stdio.h>

int ite_facto(int num);
int rec_facto(int num);

int main(void) {
  int num = -1;
  printf("Enter the number :");
  scanf("%d", &num);
  // QUESTION: why we need memory to store num value in scanf?

  if (num < 0) {
    printf("Please enter valud positive number\n");
    return 0;
  }
  if (num == 0) {
    printf("Factorial of 0 is 1\n");
    return 0;
  }

  printf("factorial of %d is %d\n", num, ite_facto(num));
  printf("factorial of %d is %d\n", num, rec_facto(num));
  return 0;
}

int ite_facto(int num) {
  // 1*2*3*4 = 24
  int facto = 1;
  for (int i = 0; i < num; i++) {
    facto = facto * (i + 1);
  }
  return facto;
}

int rec_facto(int num) {
  // it great practice to add validation input in every
  // function

  if (num < 0) {
    printf("please enter non zero number\n");
    return -1; // we should return error code
  }
  if (num == 1) {
    return 1;
  }

  return num * ite_facto(num - 1);
}
