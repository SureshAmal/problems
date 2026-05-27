// PROBLEM:6
// Print a following pattern
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// DIFFICULTY:5

#include <stdio.h>
int main(void) {
  int num = 0;
  printf("enter number to print: ");
  scanf("%d", &num);
  for (int i = 0; i < num; i++) {
    for (int j = 0; j < i + 1; j++) {
      printf("%d ", j + 1);
    }
    printf("\n");
  }
  return 0;
}
