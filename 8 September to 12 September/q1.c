// Write a C Program to Check Whether a Number is Prime or not.

#include<stdio.h>
#include<math.h>

int main () {
    printf("Enter an interger to check if it's prime:\n");
    int num;
    scanf("%d", &num);

    printf("%d\n",num % (int)sqrt(num) );
    if (num > 1 && num % 2 == 1 && num % (int)sqrt(num) != 0) {
        printf("%d is a prime number", num);
        return 0;
    }
    printf("%d is not a prime number.\n", num);
    return 0;
}
