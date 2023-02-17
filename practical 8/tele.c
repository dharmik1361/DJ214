#include <stdio.h>

void main()
{
    int a, b;
    printf("\nWelcome to jio\n\n");
    printf("for English press 1.\n");
    printf("for gujarati 2\n");
    printf("for hindi 3\n");
    printf("Choose anyone..");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("\nPress 1 for account related \n");
        printf("Press 2 for balance check\n");
        printf("Press 3 for transfer call to customer excutive\n");
        printf("Choose anyone..");
        scanf("%d", &b);
        switch (b)
        {
        case 1:
            printf("\nShow Account details");
            break;
        case 2:
            printf("\nShow Balances");
            break;
        case 3:
            printf("\nplzz wait your call has been transfer our customer excutive");
            break;
        default:
            printf("\nYour choosing wrong number");
            break;
        }
        break;
    case 2:
        printf("\n tamara khata ni jankari mate 1 dabavo \n");
        printf("tamara khata ni rashi janva mate 2 dabavo\n");
        printf("grahak partinidhi hare vat krva mate 3 dabavo\n");
        printf("Choose anyone..");
        scanf("%d", &b);
        switch (b)
        {
        case 1:
            printf("\nkhata ni jankari mate ");
            break;
        case 2:
            printf("\nShes rashi ");
            break;
        case 3:
            printf("\nthodi rah jovo amara grahak partinidhi jaldi sumpark krse");
            break;
        default:
            printf("\ntame khoto number select kriyo chhe kruoa kri sacho number select kro ");
            break;
        }
        break;
    case 3:
        printf("\n apne account ki jankari k liye 1 dabaye\n");
        printf("apni baki rahi rakam ko check krne k liye 2 dabaye\n");
        printf(" humare humare grah seva prtinidhi se baat krne k liye 3 dabaye \n");
        printf("Choose anyone..");
        scanf("%d", &b);
        switch (b)
        {
        case 1:
            printf("\n account ki jankari");
            break;
        case 2:
            printf("\nbaki rahi hui rakam");
            break;
        case 3:
            printf("\nthodi der partiksha aapko javab diya jayega");
            break;
        default:
            printf("\naapne galat number dala hai krupya kr k sahi number choose kre ");
            break;
        }
        break;

    default:
        printf("wrong select..");
        break;
    }
}