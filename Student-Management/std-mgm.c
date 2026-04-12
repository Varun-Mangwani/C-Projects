#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    char course[50];
    char name[50];
    int marks;
};

int main()
{
    struct student s[50] = {
        {222, "BCA", "Varun Mangwani", 56},
        {223, "BCA", "Krishna", 89},
        {224, "BBA", "Krish", 75}};

    int count = 3;
    int ch, i, found, roll;

    while (1)
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. View All Students\n");
        printf("2. Add Student\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Update Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\n--- Student List ---\n");
            for (i = 0; i < count; i++)
            {
                printf("%d\t%s\t%s\t%d\n",
                       s[i].roll, s[i].course, s[i].name, s[i].marks);
            }
            break;

        case 2:
            if (count >= 50)
            {
                printf("Storage Full!\n");
                break;
            }

            printf("Enter Roll No: ");
            scanf("%d", &s[count].roll);

            printf("Enter Course: ");
            scanf("%s", s[count].course);

            printf("Enter Name: ");
            scanf(" %[^\n]", s[count].name);

            printf("Enter Marks: ");
            scanf("%d", &s[count].marks);

            count++;
            printf("Student Added Successfully!\n");
            break;

        case 3:
            printf("Enter Roll No to Search: ");
            scanf("%d", &roll);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (s[i].roll == roll)
                {
                    printf("Found:\n");
                    printf("%d\t%s\t%s\t%d\n",
                           s[i].roll, s[i].course, s[i].name, s[i].marks);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student Not Found!\n");

            break;

        case 4:
            printf("Enter Roll No to Delete: ");
            scanf("%d", &roll);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (s[i].roll == roll)
                {
                    for (int j = i; j < count - 1; j++)
                    {
                        s[j] = s[j + 1];
                    }
                    count--;
                    printf("Student Deleted Successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student Not Found!\n");

            break;

        case 5:
            printf("Enter Roll No to Update: ");
            scanf("%d", &roll);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (s[i].roll == roll)
                {
                    printf("Enter New Course: ");
                    scanf("%s", s[i].course);

                    printf("Enter New Name: ");
                    scanf(" %[^\n]", s[i].name);

                    printf("Enter New Marks: ");
                    scanf("%d", &s[i].marks);

                    printf("Student Updated Successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student Not Found!\n");

            break;

        case 6:
            printf("Exiting Program...\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }
}