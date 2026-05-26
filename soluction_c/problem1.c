// NOTE: some rules for this solution
//  1. first understand the problem definition then study algorithms and
//  research on problem.
//  2. Don't use AI or digital notebook use proper handbook try to solve problem
//  before writing it
//  3. always start from input and data structure.
//  4. Always add comment with explanation proper callout like (NOTE: ,TODO:,
//  BUG:, LAZYSOLU: which used to search fast in entire codebase)
//  5. ALWYAY add callout for STARTTIMESTAMP:2026-05-25:22:24 and
//  ENDTIMESTAMP:2026-05-25:22:25
//  6. Every Problem has it definition and problem number callout

// Before start Basic about C:
// C is a statically typed, procedural, compiled programming language.
// there are multiple versions of C we mostly going to use C99 also we have C11,
// C17 and latest C23
//
// How we compile the C code:
// gcc for linux, clang for linux,macos, and MSVC for Windows / Visual Studio
// don't forget u can install gcc on window but I recommend first timer cl
// command from MSVC.
//
// we can combine multiple and build binary: there are two types of binary
// mostly  1. static(don't need other files for working) 2. dynamically linked
// (.so files like extensions this files have functions definition or code
// compile so we can directly use them think like python module use but
// compile files)
//
// Header files: It mostly has definition for functions and data structure and
// not code (some single header files can have code with definition so u just
// need to download one file and U can use that as python module direct)
//
// one thing about C it basic thing with micro, function pointer,
// typedef, struct and union
// I will try to use most of concept and explanation them.

// PROBLEM:1
// WAP to find a sum of even number into 1D array.
// DIFFICULTY:3

// every program should return somethin to OS tell out it execution so we exit
// with return 0
// main(args_count, *args_values[])
//    args_count:
//      we can use to args_count check this how many values we get from command
//      like for example `hello.exe pillow` have two args_count one fore
//      hello.exe and second is pillow
//    args_values[]:
//      array pointer simple args_values[0] is hello.exe and args_values[1]
//      is pillow

#include <stdio.h>

// TASK: for u why we declare function first in C. answer is simple but useful
int sum_of_even(int arraylength, int arr[]);
int optimize_sum_of_even(int array_length, int *arr);

int main(int argc, char *argv[]) {

  // RECOMMENDATION: initilize the value for variable.
  int array_length = 0;

  // NOTE: there are major two types of naming convensions
  // 1. snake_case (for C recommend)
  // 2. camelCase
  // 3. ALL UPPERCASE FOR CONSTANT AND MICROS

  // return the standard command input
  printf("Enter the length of array :");
  scanf("%d", &array_length);

  // in C99 we can direcly assign whole array elements to 0 if we know value at
  // compile time
  // ERROR: array[10] = {0} works but int array[array_length] = {0} will not
  int array[array_length];

  for (int i = 0; i < array_length; i++) {
    printf("Enter the value of %d :", i);
    scanf("%d", &array[i]);
  }

  printf("sum of even from 1d array: %d \n", sum_of_even(array_length, array));
  printf("sum of even from 1d array: %d \n",
         optimize_sum_of_even(array_length, array));

  return 0;
}

// check it how array are passed in function argument u will find new knowledge
// for array
int sum_of_even(int array_length, int arr[]) {
  int sum = 0;
  for (int i = 0; i < array_length; i++) {
    if (arr[i] % 2 == 0) {
      sum = sum + arr[i];
    }
  }
  return sum;
}

// OPTIMIZED: use bit operation which are much faster to do
int optimize_sum_of_even(int array_length, int *arr) {
  int sum = 0;
  for (int i = 0; i < array_length; i++) {
    // NOTE: used (arr[i] & 1) which is like 5(101) & 001 which return 1 and
    // used bracket for operator precedence
    if ((arr[i] & 1) == 0) {
      sum = sum + arr[i];
    }
  }
  return sum;
}
