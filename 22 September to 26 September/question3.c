#include<stdio.h>

int main () {
    int n = 8, arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the %dth element:\n", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Printing In Reverse Order: \n");
    for(int i = n -1; i >= 0; i--){
        printf("%d\n", arr[i]);
    }
    return 0;
}
