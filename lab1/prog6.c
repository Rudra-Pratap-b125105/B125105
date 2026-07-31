/*Create a structure Student containing:
Roll Number
Name
Marks
Accept details of 5 students and display all the records in a neat tabular format*/

#include <stdio.h>

struct Student
{
    int rollno;
    char name[50];
    float marks;
};

int main(){
    struct Student s[5];
    int i;
    printf("Enter details of 5 students:\n");
    for(i = 0; i < 5; i++){
        printf("\nStudent %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].rollno);

        printf("Name: ");
        scanf("%s",s[i].name);

        printf("Marks: ");
        scanf("%f",&s[i].marks);
    }
    printf("Roll\tName\t\tmarks\n");
    for (int i=0; i<5; i++){
        printf("%d\t\t%s\t\t%.2f\n",s[i].rollno,s[i].name,s[i].marks);
    }
    return 0;
}

     