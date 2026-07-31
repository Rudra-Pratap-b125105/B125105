/*Write a program to accept N integers in an array and search for a given element. Display
its position if found; otherwise, display ”Element not found”.*/

#include <stdio.h>
int main(){
    printf("numbers of elements to be entered:");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("enter the values for the array:\n");
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int s;
    printf("enter the element to be searched:");
    scanf("%d",&s);
    int found=0;
    for (int i=0; i<n; i++){
        if(arr[i]==s){
            printf("Element found at position %d\n",i+1);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("Element not found\n");
    }
    return 0;
}
