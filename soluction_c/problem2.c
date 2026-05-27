// PROBLEM:2
// WAP to find whether string is palindrome or not.
// DIFFICULTY:3

#include <stdio.h>

int is_palindrom(char str[]); // C does not have bool by default
                              // use stdbool.h for bool: true, false

int get_str_length(char str[]);
void remove_str_spaces(char str[]);

int main(int argc, char *argv[]) {

  // Let's learn about the C string
  // the simple form of C string are array of chars nothing else

  char palindrome[] = "was it a cat i saw"; // the string is store in stack

  // char *pointerstring = "heeh";
  // also stored in stack but we cannot modify (read only string)
  // it  NOTE: find out why

  // remove all the white space
  // this is not neccesary for this problem
  remove_str_spaces(palindrome);

  if (is_palindrom(palindrome)) {
    printf("\n%s is palindrome string\n", palindrome);
  } else {
    printf("\n%s is not palindrome string\n", palindrome);
  }

  return 0;
}

int is_palindrom(char str[]) {
  int str_length = get_str_length(str);
  for (int i = 0; i < str_length / 2; i++) {
    if (str[i] != str[str_length - (i + 1)]) {
      return 0; // 0 is false
    }
  }
  return 1;
}

// in this we dirrectly adding the array not returning new array in C
void remove_str_spaces(char str[]) {
  // FIRST TIME TRYING TO REMOVE C str SPACES

  int str_length = get_str_length(str);

  for (int i = 0; i < str_length; i++) {
    // NOTE: in c " " and ' ' are different things
    if (str[i] == ' ') {
      // let do simple move str element left every space
      for (int j = i; j < str_length; j++) {
        str[j] = str[j + 1];
      }
    }
  }

  // NOTE: even after the spaces remove the array length is same but str length
  // reduce cuz we move '/0'
}

int get_str_length(char str[]) {
  int str_length = 0;
  // in c string end is "/0"
  while (str[str_length] != '\0') {
    str_length++;
  }

  return str_length;
}
