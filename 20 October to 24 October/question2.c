#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct NumbersOf {
  int vowel;
  int cosonant;
  int digits;
};

struct NumbersOf getNumberOf(char *str) {
  int len = strlen(str);
  struct NumbersOf result;

  int noOfDigits = 0, noOfVowels = 0, noOfCosonants = 0;
  for (int w = len; w != 0; w--) {
    char ch = tolower(str[w]);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      noOfVowels++;

    if (isdigit(str[w]))
      noOfDigits += 1;
  }
  noOfCosonants = len - noOfVowels - noOfDigits;
  result.vowel = noOfVowels;
  result.digits = noOfDigits;
  result.cosonant = noOfCosonants;
  return result;
}

int main() {
  char str1[100];
  printf("Enter a Word!\n");
  scanf("%99s", str1);

  struct NumbersOf DVC = getNumberOf(str1);
  printf("Number of vowels; %d \n", DVC.vowel);
  printf("Number of didgits; %d \n", DVC.digits);
  printf("Number of Cosonants; %d \n", DVC.cosonant);
  return 0;
}
