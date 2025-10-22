#include <stdio.h>

int getFactorialOf(int a) {
  int factorial = a;
  if (a == 0) {
    return 1;
  } else {
    for (int i = a - 1; i >= 1; i--) {
      factorial *= i;
    }
    return factorial;
  }
}

int main() {
  printf("Enter a number to get it's factorial: \n");
  int val;
  scanf("%d", &val);
  printf("The Factorial of %d is: %d\n", val, getFactorialOf(val));
  return 0;
}
