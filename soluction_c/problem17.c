// PROGRAM:17
// WAP to sort an Array using Insertion sort.
// DIFFICULTY:8

// How insertion works
// we only compare the left side elements
// we sort left side with each turn until key is smaller

#include <stdio.h>

void insertion_sort(int arr[], int n) {
  // we will start with index 1
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;
    // we only check the current values with all left values.
    // NOTE: https://algorithm-visualizer.org/brute-force/insertion-sort,
    // https://visualgo.net/en/sorting
    // check this site for visual explantion
    while (arr[j] > key && j >= 0) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

int main() {
  int arr[10] = {29, 492, 402, 13, 402, 1909, 2909, 472, 37, 28};
  int n = 10;

  insertion_sort(arr, n);

  printf("Sorted array ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
