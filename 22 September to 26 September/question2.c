#include<stdio.h>


int main () {
    int n = 10, max = 0, min, max_index = 0, min_index = 0;
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter the %dth interger: ", i+1);
        scanf("%d", &arr[i]);
        if (arr[i] > max){
            max = arr[i];
            max_index = i;
            if (!min) { // Make sure not to redeclare minimum value if it's already initialized
                min = arr[i];
            }
        }
        if (arr[i] < min){
            min = arr[i];
            min_index = i;
        }
    }
    printf("The maximum value is %d with index %d\n", max, max_index);
    printf("The minimum value is %d with index %d\n", min, min_index);
    return 0;
}
