#include<stdio.h>

// Write a program to accept n integers from the user, store them in an array, and
// then calculate the sum and average of the elements.
int main () {
    int n, sum = 0;
    float avg;
    printf("Enter the number of intergers to enter next: \n");
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++) {
        printf("Enter the %dth interger:\n", i+1);
        scanf("%d",  &arr[i]);
        sum += arr[i];
    }
    avg = (float)sum/n; //Converting to float then getting average

    printf("The sum of the elements is %d\n", sum);
    printf("The average of the elements is %.2f\n", avg);
    return 0;
}
