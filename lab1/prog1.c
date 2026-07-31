// Write a program to accept N integers in an array and display:
// Largest element
// Smallest element
// Average of all elements


#include <stdio.h>

int main(){
    printf("numbets of elements to be entered:");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("enter the values for the array:");
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int max=arr[0];
    int min=arr[0];
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    float average = (float)sum / n;
    printf("Largest element: %d\n", max);
    printf("Smallest element: %d\n", min);
    printf("Average: %.2f\n", average);
}