/*Write a program to:
Accept N from the user.
Allocate memory dynamically using malloc().
Store N integers.
Display all the elements.
Free the allocated memory before exiting.
Hint: Use malloc() to allocate memory and free() to release it after use.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("enter the number of elements:");
    scanf("\t%d",&n);
    int *ptr;
    ptr= (int*) malloc(n* sizeof(int));
    if (ptr==NULL){
        printf("overflow: memory could not be allocated");
        return 1;
    }
    printf("enter elements:\n");
    for (int i=0; i<n; i++){
        scanf("%d",&ptr[i]);
    }
    printf("elements entered are:");
    for (int i=0; i<n; i++){
        printf("%d ",ptr[i]);
    }
    free(ptr);
    return 0;
}