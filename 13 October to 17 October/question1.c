#include <stdio.h>

int isEven(int n) {
  if (n % 2 == 0) {
    return 1;
  }
  return 0;
}

int main() {
  printf("Enter an interger to check it's evenness:\n");
  int n;
  scanf("%d", &n);

  if (isEven(n) == 1) {
    printf("The number %d is even", n);
  } else
    printf("The number %d is odd", n);
  return 0;
}
