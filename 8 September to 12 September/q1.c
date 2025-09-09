// Write a C Program to Check Whether a Number is Prime or not.

#include<stdio.h>
#include<math.h>

int main () {
    printf("Enter an interger to check if it's prime:\n");
    int num;
    scanf("%d", &num);

    // A prime number is a natural number greater than 1 that has no
    // positive divisors other than 1 and itself.
    // So we check if its less than or equal to 1 to remove as a prime
    // number
    if (num <= 1) {
        printf("%d is not a prime number", num);
    } else {
        // So we check if its divisible by any number from 2 to the
        // square root of that number that way the algorithim is
        // smarter and faster
        int i;
        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                printf("%d is not a prime number", num);
                return 0;
            }
        }
        printf("%d is a prime number", num);
    }

    return 0;
}
