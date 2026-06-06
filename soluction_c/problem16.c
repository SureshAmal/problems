// PROGRAM:16
// WAP to sort an Array using Bubble sort.
// DIFFICULTY:8

#include <stdio.h>
void bubble_sort(int arr[], int n);

int main() {
  int arr[10] = {29, 492, 402, 13, 402, 1909, 2909, 472, 37, 28};

  int n = sizeof(arr) / sizeof(arr[0]);
  bubble_sort(arr, n);
  printf("Sorted array ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}

void bubble_sort(int arr[], int n) {
  // NOTE: compare number if left is greater swap else we don't swap
  for (int i = 0; i < n - 1; i++) {
    int swap = 0;
    for (int j = 0; j < n - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swap = 1;
      }
    }
    if (swap == 0) {
      break;
    }
  }
}
