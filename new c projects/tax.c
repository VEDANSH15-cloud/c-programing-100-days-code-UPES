#include <stdio.h>
int main()
{
    float income, taxableincome, rebate, tax, surcharge, finaltax;
    printf("Enter your  annual income in rs : ");
    scanf("%f", &income);
    taxableincome = income - 50000;
    if(income<=250000)
     {
       tax=0;
     }
    else if(income>250000 && income<=500000)
     {
       tax=(taxableincome - 250000) * 0.05;
     }
    else if(income>500000 && income<=1000000)
     {
       tax=(250000 * 0.05) + (taxableincome - 50000) * 0.20;
     }
    else
    {
      tax=(250000 * 0.05) + (500000 * 0.20) + (taxableincome - 1000000) * 0.30;
    }

    if (tax<10000)
    rebate = tax;
    else  rebate = 0;
    if(income>5000000)
    surcharge = (tax - rebate) * 0.10;
    else surcharge = 0;
    finaltax = tax - rebate + surcharge;
    printf("Annual Income = %.2f\n", income);
    printf("Taxable Income = %.2f\n", taxableincome);
    printf("Tax before rebate = %.2f\n", tax);
    printf("Rebate = %.2f\n", rebate);
    printf("Surcharge = %.2f\n", surcharge);
    printf("Final Tax = %.2f", finaltax);
    return 0;
}