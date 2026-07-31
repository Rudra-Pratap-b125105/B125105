/*Create a structure Student containing Roll Number, Name, and Marks. Dynamically
allocate memory for N students using malloc(). Accept the details of all students and
display the student who secured the highest marks. Free the allocated memory before
exiting. 
Hint: Allocate memory for an array of Student structures using malloc() and traverse
the records to identify the student with the highest marks.*/

#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int rollno;
    char name[50];
    float marks;
};

int main(){
    int n;
    printf("enter the number of students:");
    scanf("\t%d",&n);
    struct Student *s;
    s = (struct Student*) malloc(n* sizeof(struct Student));
    if (s==NULL){
        printf("overflow: memory could not be allocated");
        return 1;
    }
    int max=0;
    printf("Enter Student Details:\n");
    for(int i=0; i<n; i++){
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].rollno);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        if(s[i].marks > s[max].marks){
            max = i;
        }
    }
    printf("\nstudent with highest marks\n");
    printf("roll no: %d\n", s[max].rollno);
    printf("name: %s\n", s[max].name);
    printf("marks: %.2f\n", s[max].marks);
    return 0;
}