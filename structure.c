
#include <stdio.h>

struct Student
{
    int prn;
    char name[50];
    float m1, m2, m3;
    float total, percentage;
    char result[20];
};

int main()
{
    struct Student s[50];
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter PRN number: ");
        scanf("%d", &s[i].prn);

        printf("Enter name: ");
        scanf("%49s", s[i].name);

        printf("Enter marks of 3 subjects: ");
        scanf("%f %f %f", &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;

        s[i].percentage = s[i].total / 3.0;

        if(s[i].percentage < 40)
        {
            sprintf(s[i].result, "Fail");
        }
        else if(s[i].percentage < 60)
        {
            sprintf(s[i].result, "Pass");
        }
        else if(s[i].percentage < 85)
        {
            sprintf(s[i].result, "First Class");
        }
        else
        {
            sprintf(s[i].result, "Distinction");
        }
    }

    printf("\nPRN No\tName\tTotal\tPercentage\tResult\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%.2f\t%.2f%%\t\t%s\n",
        s[i].prn,
        s[i].name,
        s[i].total,
        s[i].percentage,
        s[i].result);
    }

    return 0;
}

