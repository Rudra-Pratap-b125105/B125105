/*Create a structure Student containing Roll Number, Name, and Marks. Declare a pointer
to the structure and use the -> operator to:
Accept student details.
Display student details.
Hint: Use the -> operator to access structure members through a pointer.*/

#include <stdio.h>
struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main(){
    struct Student s;
    struct Student *ptr;
    ptr = &s;
    printf("Enter Student Details\n");

    printf("Roll Number: ");
    scanf("%d", &ptr->rollNo);

    printf("Name: ");
    scanf("%s", ptr->name);

    printf("Marks: ");
    scanf("%f", &ptr->marks);

    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", ptr->rollNo);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}