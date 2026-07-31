//Write a program to accept N integers in an array and display the elements in reverse order.

#include <stdio.h>


int main(){
    printf("numbets of elements to be entered:");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("enter the values for the array:\n");
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int l=n-1;
    for (int i=0; i<n/2; i++){
        arr[i]= arr[i]+arr[l];
        arr[l]=arr[i]-arr[l];
        arr[i]= arr[i]-arr[l];
        l-=1;
    }
    printf("the reversed array is:");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}