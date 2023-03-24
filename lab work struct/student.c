#include <stdio.h>
struct student
{
    int id;
    char Name[50];
    int age;
    char course;
    float marks;
    char city;
    int std;
    char school;

} s[3];

void main()
{
    int i;
    printf("Enter information of students: \n");

    // storing information
    for (i = 0; i < 3; ++i)
    {
        s[i].id = i + 1;
        printf("\nyour id number%d\n,", s[i].id);

        printf("Enter your name: ");
        scanf("%s", &s[i].Name);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
        printf("Enter age:  ");
        scanf("%d", &s[i].age);
        printf("Enter course: ");
        scanf("%s", &s[i].course);
        printf("Enter city: ");
        scanf("%s", &s[i].city);
        printf("Enter std:  ");
        scanf("%d", &s[i].std);
        printf("Enter school: ");
        scanf("%s", &s[i].school);
    }
    printf("Displaying Information: \n\n");

    // displaying information
    for (i = 0; i < 3; ++i)
    {
        printf("id number: %d", i + 1);
        printf("student name: %d\n", s[i].Name);
        printf("student marks: %s", s[i].marks);
        printf("student age: %d\n", s[i].age);
        printf("student course: %s \n", s[i].course);
        printf("student city: %s \n",s[i].city);
        printf("student std: %d\n", s[i].std);
        printf("student school: %s\n", s[i].school);
        printf("\n");
    }
}
