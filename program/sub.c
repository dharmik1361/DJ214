#include<stdio.h>

void main(){
    int java,c,flutter,html,php,android,laravel,sum;

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

    sum = (java+c+flutter+html+php+android+laravel) * 100/700;

    printf("Your persantage is = %d\n",sum);

    switch (sum)
    {
    case 50:
        printf("B Grade");
        break;
        case 51:
        printf("B Grade");
        break;
        case 52:
        printf("B Grade");
        break;
        case 53:
        printf("B Grade");
        break;
        case 54:
        printf("B Grade");
        break;
        case 55:
        printf("B Grade");
        break;
        case 56:
        printf("B Grade");
        break;
        case 57:
        printf("B Grade");
        break;
        case 58:
        printf("B Grade");
        break;
        case 59:
        printf("B Grade");
        break;
        case 60:
        printf("A Grade");
        break;
        case 61:
        printf("B Grade");
        break;
        case 62:
        printf("B Grade");
        break;
        case 63:
        printf("B Grade");
        break;
        case 64:
        printf("B Grade");
        break;
        case 65:
        printf("B Grade");
        break;
        case 66:
        printf("B Grade");
        break;
        case 67:
        printf("B Grade");
        break;
        case 68:
        printf("B Grade");
        break;
        case 69:
        printf("B Grade");
        break;
        case 70:
        printf("Good");
        break;
        case 71:
        printf("Good");
        break;
        case 72:
        printf("Good");
        break;
        case 73:
        printf("Good");
        break;
        case 74:
        printf("Good");
        break;
        case 75:
        printf("Good");
        break;
        case 76:
        printf("Good");
        break;
        case 77:
        printf("Good");
        break;
        case 78:
        printf("Good");
        break;
        case 79:
        printf("Good");
        break;
        case 80:
        printf("Excellent");
        break;
        case 81:
        printf("Excellent");
        break;
        case 82:
        printf("Excellent");
        break;
        case 83:
        printf("Excellent");
        break;
        case 84:
        printf("Excellent");
        break;
        case 85:
        printf("Excellent");
        break;
        case 86:
        printf("Excellent");
        break;
        case 87:
        printf("Excellent");
        break;
        case 88:
        printf("Excellent");
        break;
        case 89:
        printf("Excellent");
        break;
        case 90:
        printf("Genuis");
        break;
        case 91:
        printf("Genuis");
        break;
        case 92:
        printf("Genuis");
        break;
        case 93:
        printf("Genuis");
        break;
        case 94:
        printf("Genuis");
        break;
        case 95:
        printf("Genuis");
        break;
        case 96:
        printf("Genuis");
        break;
        case 97:
        printf("Genuis");
        break;
        case 98:
        printf("Genuis");
        break;
        case 99:
        printf("Genuis");
        break;
        case 100:
        printf("Genuis");
        break;

    
    default:
        printf("You are fail");
        break;
    }

}