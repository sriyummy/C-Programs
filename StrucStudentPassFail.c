#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    char name[50];
    char gender;
    int marks[5];
};

void stuDetails(struct student s)
{
    printf("Roll No: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Gender: %c\n", s.gender);
    printf("Marks in 5 subjects: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", s.marks[i]);
    }
    printf("\n");
}

int totMarks(struct student s)
{
    int totalMarks = 0;
    for (int i = 0; i < 5; i++)
    {
        totalMarks += s.marks[i];
    }
    return totalMarks;
}

void fail(struct student students[], int n, int sub)
{
    printf("List of students who failed in Subject %d:\n", sub + 1);
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        if (students[i].marks[sub] < 40)
        {
            stuDetails(students[i]);
            f++;
        }
    }
    if (f == 0)
    {
        printf("No students failed in Subject %d.\n", sub + 1);
    }
}

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student students[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Gender: ");
        scanf(" %c", &students[i].gender);
        printf("Enter marks in 5 subjects:\n");
        for (int j = 0; j < 5; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        printf("Details of Student %d:\n", i + 1);
        stuDetails(students[i]);
        int totalMarks = totMarks(students[i]);
        printf("Total Marks: %d\n\n", totalMarks);
    }

    for (int i = 0; i < 5; i++)
    {
        fail(students, n, i);
        printf("\n");
    }

    return 0;
}

