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
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student s[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the name, roll number, gender, and marks of student number %d: ", i + 1);
        scanf("%s %d %c %d", s[i].name, &s[i].roll, &s[i].gender, &s[i].marks);
    }

    for (i = 0; i < n; i++)
    {
        printf("The details of student number %d are:\n", i + 1);
        printf("Name: %s\nRoll No: %d\nGender: %c\nMarks: %d\n", s[i].name, s[i].roll, s[i].gender, s[i].marks);
    }

    return 0;
}

