#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int roll;
    char gender;
    int marks;
};

int main()
{
    struct student s;
    
    printf ("Enter the names of the student: ");
    gets (s.name);
    printf ("Enter roll number: ");
    scanf ("%d", &s.roll);
    printf ("Enter gender: ");
    scanf (" %c", &s.gender);
    printf ("Enter the marks: ");
    scanf ("%d", &s.marks);
    
    printf ("Ther student details are: \n");
    printf ("Name: %s \nRoll Number: %d \nGender: %c \nMarks: %d", s.name, s.roll, s.gender, s.marks);
    
    
    return 0;
}
