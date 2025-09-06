// Write a program that takes two numbers and an operator (+, -, *, /) as input and uses a
// switch statement to perform the appropriate operation.

#include<stdio.h>

int main() {
    char operator;
    int num1, num2;

    printf("Enter the math operator you would like to perfom.\n");
    scanf(" %c", &operator);
    // We add a space before %c to specify that spaces should be removed
    // by the program and we use %c because we only expect one character
    // and that is why we do not specify how many characters by using
    // something like char operator[90];
    //
    printf("Enter the numbers below: <add a space between them>:\n");
    scanf("%d %d", &num1, &num2);
    // Yet another cool little trick.

    switch(operator) {
        case '+':
        printf("The sum of these numbers is; %d \n", (num1 +num2));
        break;
        case '-':
        printf("The difference of these numbers is; %d\n", (num1 - num2));
        break;
        case '*':
        printf("The product of these number is; %d \n", (num1 * num2));
        break;
        case '/':
        // Division by 0 is not possible so we make an if case for that and
        // escape by returning 1
        // Whenever you return in an if statement (returning 0 or 1), the
        // code below that program will not be executed.
        if (num2 == 0) {
            printf("Division by 0 is not allowed.\n");
            return 1;
        };
        printf("The quotient of these is; %d \n", (num1 / num2));
        break;
        default:
        printf("Enter a valid operator.\n");
        break;
    }

    return 0;
}
