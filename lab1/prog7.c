/*Using the same Student structure from the previous question, write a program to:
Display the student who secured the highest marks.
Calculate and display the average marks of the class.*/

#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main(){
    struct Student s[5];
    int i, max = 0;
    float sum = 0, avg;
    printf("Enter details of 5 students:\n");
    for(i = 0; i < 5; i++){
        printf("\nStudent %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        sum += s[i].marks;
        if(s[i].marks > s[max].marks)
        {
            max = i;
        }
    }
    avg = sum / 5;
    printf("\nstudent with highest marks\n");
    printf("roll no: %d\n", s[max].rollNo);
    printf("name: %s\n", s[max].name);
    printf("marks: %.2f\n", s[max].marks);
    printf("\naverage marks = %.2f\n", avg);
    return 0;
}