// Write a program that asks the user to enter a number and uses an if–else statement to
// check if it is even or odd.

#include<stdio.h>

int main () {
    int number;
    printf("Hi, enter a number so i can see if it's odd or even:\n");
    scanf("%d", &number);

    if (number % 2 == 0) printf("The number, %d is even.\n", number);
    else printf("This number, %d is odd.\n", number);

    return 0;
}
