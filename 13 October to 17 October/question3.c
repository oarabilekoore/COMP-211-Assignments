#include <stdio.h>

int getMaximumIn(int a, int b, int c) {
  int max = a;
  if (b > max) {
    max = b;
  }
  if (c > max) {
    max = c;
  }

  return max;
}
int main() {
  printf("Enter three Intergers:\n");
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  printf("The Maximim Is: %d\n", getMaximumIn(a, b, c));
  return 0;
}
