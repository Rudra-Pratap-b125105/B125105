/*Write a program to accept N integers and calculate the sum of all elements using pointer
arithmetic instead of array indexing. 
Hint: Traverse the array using a pointer instead of arr[i].*/

#include <stdio.h>
int main(){
    int n, i, sum = 0;
    int arr[100];
    int *ptr;
    printf("numbers of elements to be entered:");
    scanf("%d", &n);
    printf("enter the values for the array:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    ptr = arr;
    for(i = 0; i < n; i++){
        sum += *(ptr + i);
    }
    printf("Sum of all elements = %d\n", sum);
    return 0;
}