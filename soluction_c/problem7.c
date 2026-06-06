// PROBLEM:7
// WAP to find a Fibonacci series up to n terms (n is entered by user)
// (iterative and recursive).
// DEFIICULTY:6

#define IMPLIMENTAION_ARRAY_UTILS
#include <stdio.h>

#include "./array_until.h"

void create_fibo_ite(int num, int *fibo);
int create_fibo_rec(int num);

int main(void) {
  int num = 0;
  printf("enter the number :");
  scanf("%d", &num);

  if (num <= 0) {
    printf("please enter valid positive number\n");
    return 1;
  }

  // Fibonacci 1,1,2,3,5,8,13

  // if u seen older program we have used array to store solution which is great
  // practice cuz we want solution to be store not direcly print it.

  int fibo_ite[num];
  set_array(num, fibo_ite, -1);

  create_fibo_ite(num, fibo_ite);
  print_array(num, fibo_ite);

  int fibo_rec[num];

  for (int i = 0; i < num; i++) {
    fibo_rec[i] = create_fibo_rec(i);
  }

  print_array(num, fibo_rec);

  return 0;
}

void create_fibo_ite(int num, int *fibo) {
  fibo[0] = 1;
  fibo[1] = 1;
  for (int i = 2; i < num; i++) {
    fibo[i] = fibo[i - 1] + fibo[i - 2];
  }
}

int create_fibo_rec(int num) {
  if (num <= 1) {
    return 1;
  }

  return create_fibo_rec(num - 1) + create_fibo_rec(num - 2);
}
