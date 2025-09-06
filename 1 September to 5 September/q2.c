// Develop a program that reads a student’s marks and uses nested if statements to display:
// “Distinction” if marks ≥ 75
// “Pass” if 50 ≤ marks < 75
// “Fail” if marks < 50

#include<stdio.h>

int main() {
    int mark;
    printf("Enter your mark out of a 100;\n");
    scanf("%d", &mark);

    if (mark >= 75) {
        printf("Distinction\n");
    } else if (mark >= 50 && mark <75) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    // The && thing i added just means if the mark is equal
    // to 50 or more and if it is below 75 do this. :)

    return 0;
}
