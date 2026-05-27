// PROBLEM:3
// WAP to find a Factor of a given number (iterative and recursive)
// DIFFICULTY:4

#define IMPLIMENTAION_ARRAY_UTILS
// check the header file ./array_until.h
// in header file we have added #ifdef if value exits it will use block
// else not
#include <stddef.h>
#include <stdio.h>

// NOTE: this header file need stdio.h for printf so load it after including the
// stdio
// basic knowledge for directory the '.' point to the current directory and '..'
// point to the parent directory
// in window if u do `dir` u see them and in linux `ls -la`
#include "./array_until.h"

void fin_ite_factos(int num, int lenght, int arr[]);
void fin_rec_factos(int num, int i, int arr[], int index);

int main(void) {

  int num = 0;

  printf("enter the number :");
  scanf("%d", &num);

  // what are the factor
  // 4:1,2,4
  // 10:1,2,5,10
  // 12:1,2,3,4,6,12

  if (num <= 0) {
    printf("Please enter valid positive number\n");
  }

  int ite_factorials[(num / 2) + 1];
  // max factors of any number is value of number/2 + 1
  int rec_factorials[(num / 2) + 1];

  int index = 0;
  int length = (num / 2) + 1;

  set_array(length, ite_factorials, -1);
  fin_ite_factos(num, length, ite_factorials);
  // print_array(ite_length, ite_factorials);
  set_array(length, rec_factorials, -1);
  fin_rec_factos(num, 0, rec_factorials, index);
  // print_array(rec_length, rec_factorials);

  printf("factors of %d are\n", num);

  while (ite_factorials[index] != -1) {
    printf("%d ", ite_factorials[index]);
    index++;
  }
  printf("\n");
  // we can do same for recursive

  return 0;
}

void fin_ite_factos(int num, int lenght, int arr[]) {
  int k = 0;
  for (int i = 0; i < num / 2; i++) {
    if (num % (i + 1) == 0) {
      arr[k] = (i + 1);
      k++;
    }
  }
  arr[k] = num;
}

// NOTE: I have used chatgpt only for which way we can solve problem and in the
// end solve by myself
void fin_rec_factos(int num, int i, int arr[], int index) {
  // this look hard I never try to set array in recursive function
  // let try
  // for setting array in recursive function u need index
  // this is worse forloop nothing else

  if (i > (num / 2)) {
    arr[index] = num;
    return;
  }

  if (num % (i + 1) == 0) {
    arr[index] = i + 1;
    index++;
  }

  return fin_rec_factos(num, ++i, arr, index);
}
