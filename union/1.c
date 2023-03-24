         #include <stdio.h>
union Student
{
    char stud_name[30];
    int roll_number;
    float percentage;
} stud_1 ;                  // while defining union

void main()
{
    union Student stud_2;  // using union keyword
    
    printf("Enter details of stud_1 : \n");
    printf("Name : ");
    scanf("%s", stud_1.stud_name);
    printf("Name of the Student : %s\n", stud_1.stud_name);
    printf("Roll Number : ");
    scanf("%d", &stud_1.roll_number);
    printf("Roll Number of the Student : %d\n", stud_1.roll_number);
    printf("Percentage : ");
    scanf("%f", &stud_1.percentage);
    printf("Percentage of the Student : %f\n", stud_1.percentage);

}  