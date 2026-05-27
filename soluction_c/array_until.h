
void set_array(int length, int arr[], int value);
void print_array(int length, int arr[]);
#ifdef IMPLIMENTAION_ARRAY_UTILS

void set_array(int length, int arr[], int value) {
  for (int i = 0; i < length; i++) {
    arr[i] = value;
  }
}

void print_array(int length, int arr[]) {
  for (int i = 0; i < length; i++) {
    printf("%d element values is %d\n", i, arr[i]);
  }
}

#endif // IMPLIMENTAION_ARRAY_UTILS
