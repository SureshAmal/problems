// PROBLEM:2
// WAP to find whether string is palindrome or not.
// DIFFICULTY:3

#include <stdio.h>

int is_palindrom(char str[]); // C does not have bool by default
                              // use stdbool.h for bool: true, false

int main(int argc, char *argv[]) {

  // Let's learn about the C string
  // the simple form of C string are array of chars nothing else

  char palindrome[] = "heaeha"; // the string is store in stack
  // also stored in stack but we cannot modify (read only string)
  // it  NOTE: find out why
  char *pointerstring = "heaeh";
  // printf("%s\n", pointerstring);
  // printf("%s\n", palindrome);

  if (is_palindrom(palindrome)) {
    printf("\n%s is palindrome string\n", palindrome);
  } else {
    printf("\n%s is not palindrome string\n", palindrome);
  }

  return 0;
}

int is_palindrom(char *str) {
  int str_length = 0;
  while (str[str_length] != '\0') {
    str_length++;
  }

  for (int i = 0; i < str_length / 2; i++) {
    if (str[i] != str[str_length - (i + 1)]) {
      return 0; // 0 is false
    }
  }
  return 1;
}
