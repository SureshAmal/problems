// PROGRAM:15
// WAP to convert a Decimal number to BCD
// DIFFICULTY:8

// What is BCD: Binary coded decimal
// we need to convert every number digit to binary equivalent
// so first step is to get digits
// then find binary(BCD) for every digit

#include <stdio.h>

int get_digit_count(int num);
void get_digits(int num, int arr[]);
void reverse_array(int n, int arr[]);
void get_BCD4(int binary[], int num);

int main(void) {

  int num = -1;

  printf("Enter the number :");
  scanf("%d", &num);

  if (num < 0) {
    printf("We do not support negative number\n");
    return 1;
  }

  if (num == 0) {
    printf("0 BCD is 0\n");
  }

  int count = get_digit_count(num);
  int digits[count]; // in C u have to know the size before assign
  get_digits(num, digits);
  reverse_array(count, digits);

  int binarysol[count][4]; // I wish I has object or map

  for (int i = 0; i < count; i++) {
    get_BCD4(binarysol[i], digits[i]);
  }

  printf("%d = ", num);
  for (int i = 0; i < count; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d", binarysol[i][j]);
    }
  }
  printf("\n");

  return 0;
}

int get_digit_count(int num) {
  int count = 0;
  while (num > 0) {
    count += 1;
    num = num / 10;
  }
  return count;
}

void get_digits(int num, int arr[]) {
  int i = 0;
  while (num > 0) {
    arr[i] = num % 10;
    num = num / 10;
    i++;
  }
}

void reverse_array(int n, int arr[]) {
  // swap always works
  int temp;
  for (int i = 0; i < n / 2; i++) {
    temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp;
  }
}

void get_BCD4(int binary[], int num) {
  for (int i = 3; i >= 0; i--) {
    binary[i] = num % 2;
    num = num / 2;
  }
}
