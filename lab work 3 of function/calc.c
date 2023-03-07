#include <stdio.h>


float add(float a, float b)
{
    return a + b;
}


float subtract(float a, float b)
{
    return a - b;
}


float multiply(float a, float b)
{
    return a * b;
}


float divide(float a, float b)
{
    if(b == 0)
    {
        printf("Error: Divide by zero");
        return 0;
    }
    else
    {
        return a / b;
    }
}

void main()
{
    int choice;
    float num1, num2, result;
    while(1)
    {
        // print menu
        printf("\n---- MENU ----\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 5)  
        {
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f%f", &num1, &num2);

        switch(choice)
        {
            case 1:  
                result = add(num1, num2);
                printf("Result: %.2f", result);
                break;
            case 2: 
                result = subtract(num1, num2);
                printf("Result: %.2f", result);
                break;
            case 3:  
                result = multiply(num1, num2);
                printf("Result: %.2f", result);
                break;
            case 4: 
                result = divide(num1, num2);
                printf("Result: %.2f", result);
                break;
            default:  
                printf("Invalid choice!");
        }
    }
    return 0;
}