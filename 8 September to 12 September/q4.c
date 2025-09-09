// Write a C program to check whether the entered year is leap year or not (a year is
// leap if it is divisible by 4 and divisible by 100 or 400.)

#include<stdio.h>

int main () {
    printf("Enter a Year:\n");
    int year;
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}
