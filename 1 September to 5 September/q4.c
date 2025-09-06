// Write a program that inputs age and checks using an if statement if the person is eligible
// to vote (age ≥ 18).

#include<stdio.h>

int main () {
    int age;
    printf("Enter Your Age: \n");
    scanf("%d", &age);

    if (age < 18) {
        printf("You cannot vote lil bro.\n");
        return 0;
    }
    printf("You can vote :)\n");

    // You can write if statements like these, but you
    // must tell the program to exit that is why i
    // return zero in the if statement.
    // The next lines of code will not be executed if
    // the age entered is below 18.
    // Because we exited the program

    return 0;
}
