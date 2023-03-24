#include <stdio.h>
struct student
{
    int id;
    char Name[50];
    int age;
    char role;
    char city;
    int experience;
    char companyname;

}e[3];

void main()
{
 int i
 printf("Enter information of employee: \n");
  // storing the information
  for (i = 0; i < 3; ++i)
  {
  e[i].id = i + 1;
  printf("enter your id number:- ",e[i].id);
  scanf ("%d" ,&e[i].id);
  printf("enter your name:- ",e[i].Name);
  scanf ("%s" ,&e[i].Name);
  printf("enter your age:- ",e[i].age);
  scanf ("%d" ,&e[i].age);
  printf("enter your role:- ",e[i].role);
  scanf ("%s" ,&e[i].role);
  printf("enter your city:- ",e[i].city);
  scanf ("%s" ,&e[i].city);
  printf("enter your experience:- ",e[i].experience);
  scanf ("%d" ,&e[i].experience);
   printf("enter your companyname:- ",e[i].companyname);
  scanf ("%s" ,&e[i].companyname);

}
   for (i = 0; i < 3; ++i)
   {

     printf("id number: %d", i + 1);
        printf("employee name: %d\n", e[i].Name);
        printf("employee age: %s", e[i].age);
        printf("employee role: %d\n", e[i].role);
        printf("employee city: %s \n", e[i].city);
        printf("employee experience: %s \n",e[i].experience);
        printf("employee company name: %d\n", e[i].companyname);
        printf("\n");
}
}


