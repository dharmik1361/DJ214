#include<stdio.h>

void main()
{
    int unit;
    float total,surcharge,bill;
    printf("Enter the unit = ");
    scanf("%d",&unit);

    if (unit<=50)   
    {
        total = unit*0.50;
    }
    else if (unit>50 && unit<=150) 
    {
        unit = unit-50;
        total = (50*0.50) + (unit*0.75);
    }
    else if (unit>150 && unit<=250)
    {
        unit = unit-150;
        total = (50*0.50) + (100*0.75) + (unit*1.20);
    }
    else if (unit>250)
    {
        unit = unit - 250;
        total = (50*0.50) + (100*0.75) + (100*1.20) + (unit*1.50);
    }
    
    surcharge = total * 0.20;

    bill = total + surcharge;

    printf("Your bill is = %0.2f",bill);
}
