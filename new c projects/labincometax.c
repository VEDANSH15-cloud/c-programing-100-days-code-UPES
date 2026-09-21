#include <stdio.h>

#define STANDARD_DEDUCTION 50000.0
#define REBATE_LIMIT 10000.0
#define SURCHARGE_INCOME_LIMIT 5000000.0
#define SURCHARGE_RATE 0.10

static double calculate_slab_tax(double taxable_income)
{
    double tax = 0.0;

    
    if (taxable_income > 1000000.0) {
        tax = (taxable_income - 1000000.0) * 0.30;
        taxable_income = 1000000.0;
    }
    if (taxable_income > 500000.0) {
        tax = (taxable_income - 500000.0) * 0.20;
        taxable_income = 500000.0;
    }
    if (taxable_income > 250000.0) {
        tax = (taxable_income - 250000.0) * 0.05;
    }

    return tax;
}

int main(void)
{
    double gross_income, taxable_income;
    double slab_tax, rebate = 0.0, surcharge = 0.0, total_tax;

    printf("Enter annual income (in rupees): ");
    if (scanf("%lf", &gross_income) != 1 || gross_income < 0.0) {
        printf("Invalid income. Please enter a non-negative number.\n");
        return 1;
    }

    taxable_income = gross_income - STANDARD_DEDUCTION;
    if (taxable_income < 0.0)
        taxable_income = 0.0;

    slab_tax = calculate_slab_tax(taxable_income);

    
    if (slab_tax < REBATE_LIMIT)
        rebate = slab_tax;

    total_tax = slab_tax - rebate;

    
    if (gross_income > SURCHARGE_INCOME_LIMIT)
        surcharge = total_tax * SURCHARGE_RATE;

    total_tax = surcharge;

    printf("\n----- Income Tax Summary -----\n");
    printf("Gross income       : Rs. %.2f\n", gross_income);
    printf("Standard deduction : Rs. %.2f\n", STANDARD_DEDUCTION);
    printf("Taxable income     : Rs. %.2f\n", taxable_income);
    printf("Slab tax           : Rs. %.2f\n", slab_tax);
    printf("Rebate              : Rs. %.2f\n", rebate);
    printf("Surcharge           : Rs. %.2f\n", surcharge);
    printf("Total income tax   : Rs. %.2f\n", total_tax);

    return 0;
}
