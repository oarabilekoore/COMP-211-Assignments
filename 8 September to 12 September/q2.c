// Write a C program to find the largest and smallest among three entered numbers and
// also display whether the identified largest/smallest number is even or odd.

#include<stdio.h>

// This function returns the largest interger in an array of intergers
// It then takes in the length of that array so it knows how many
// elements to compare and find the largest one.
int returnLargestInt(int numbers[], int length) {
    int largestInt = numbers[0];
    for (int i = 1; i < length; i++) {
        if (numbers[i] > largestInt) {
            largestInt = numbers[i];
        }
    }
    return largestInt;
}

int main () {
    printf("Enter three numbers: ");
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    int lengthOfNumbersArray = 3; // We were tasked to have 3 numbers
    // Initialize the array with the user input
    int numbersArray[] = {num1, num2, num3};
    int largestNumber = returnLargestInt(numbersArray, lengthOfNumbersArray);
    printf("%d is the largest number.\n", largestNumber);
}
