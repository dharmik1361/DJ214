#include<stdio.h>

void main(){
    int java,c,flutter,html,php,android,laravel,sum,per;

    printf("Enter marks of java = ");
    scanf("%d",&java);
    printf("Enter marks of c = ");
    scanf("%d",&c);
    printf("Enter marks of flutter = ");
    scanf("%d",&flutter);
    printf("Enter marks of html = ");
    scanf("%d",&html);
    printf("Enter marks of php = ");
    scanf("%d",&php);
    printf("Enter marks of android = ");
    scanf("%d",&android);
    printf("Enter marks of laravel = ");
    scanf("%d",&laravel);

    sum = (java+c+flutter+html+php+android+laravel) * 10/700;
    per = (java+c+flutter+html+php+android+laravel) * 100/700;

    printf("Your persantage is = %d\n",per);

    switch (sum)

    {
        case 5:
            printf("grade is b");
            break;

            case 6:
            printf("grade is a");
            break;

            case 7:
            printf("grade is good");
            break;

            case 8:
            printf("grade is exellent");
            break;

            case 9:
            printf("grade is genius");
            break;

        case 10:
            printf("grade is brillient");
            break;

        default:
            printf("FAIL............");
            break;




    }
}