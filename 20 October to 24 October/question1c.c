#include <stdio.h>
#include <string.h>

void TheFunction(char *str1, char *str2) {

  int r = strcmp(str1, str2);

  if (r != 0) {
    printf("The concatenation of those is: %s\n", strcat(str1, str2));
  }
}

int main() {
  char *string1, string2;
  printf("Enter two strings w a space between:\n");
  scanf("%s %s", &string1, &string2);

  TheFunction(string1, string2);
  return 0;
}
