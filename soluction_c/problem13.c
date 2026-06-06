// PROGRAM:13
// WAP to find a Multiplication of 2 Matrix (dimension and value should be
// entered by user)
// DIFFICULTY:8

#include <stdio.h>

void print_matrix(int rows, int cols, int arr[rows][cols]);

void matrix_mul(int row1, int col1, int col2, int arr1[row1][col1],
                int arr2[col1][col2], int sol[row1][col2]);

void set_values(int row, int col, int arr[row][col]);

int main(void) {
  int sum = 0;
  int row1 = -1, col1 = -1, row2 = -1, col2 = -1;

  printf("Enter the dimension of arr1 seperated by ',' :");
  scanf("%d,%d", &row1, &col1);

  printf("Enter the dimension of arr2 seperated by ',' :");
  scanf("%d,%d", &row2, &col2);

  if (row2 != col1) {
    printf("Please enter valid dimension for multiplication");
    return 1;
  }

  int arr1[row1][col1];
  int arr2[row2][col2];
  printf("Enter value of arr1 :\n");
  set_values(row1, col1, arr1);
  printf("Enter value of arr2 :\n");
  set_values(row2, col2, arr2);

  int sol[row1][col2];

  matrix_mul(row1, col1, col2, arr1, arr2, sol);

  print_matrix(row1, col2, sol);

  return 0;
}

void set_values(int row, int col, int arr[row][col]) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf("Enter the values for %d%d :", i + 1, j + 1);
      scanf("%d", &arr[i][j]);
    }
  }
}

void matrix_mul(int row1, int col1, int col2, int arr1[row1][col1],
                int arr2[col1][col2], int sol[row1][col2]) {
  for (int i = 0; i < row1; i++) {
    for (int j = 0; j < col2; j++) {
      sol[i][j] = 0;
      for (int k = 0; k < col1; k++) {
        sol[i][j] += arr1[i][k] * arr2[k][j];
      }
    }
  }
}

void print_matrix(int rows, int cols, int arr[rows][cols]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}
