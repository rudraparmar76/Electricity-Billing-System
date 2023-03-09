#include <stdio.h>
#include <stdlib.h>

int main()
{
    float unit_consumed, total_unit, result, surcharge, total_amt;
    int cust_id;
    char name[30];
    printf("\nInput the Customer ID:");
    scanf("%d", &cust_id);
    printf("\nInput the name of the customer:");
    scanf("%29s", name);
    printf("\nInput the unit consumed by the customer:");
    scanf("%f", &unit_consumed);
    // calculation
    if (unit_consumed <= 199)
    {
        result = unit_consumed * (1.20);
    }
    else if (unit_consumed >= 200 && unit_consumed <= 400)
    {
        result = unit_consumed * (1.50);
    }
    else if (unit_consumed >= 401 && unit_consumed <= 600)
    {
        result = unit_consumed * (1.80);
    }
    else if (unit_consumed >= 601)
    {
        result = unit_consumed * (2.00);
    }

    if (result > 400)
    {
        surcharge = 0.15 * result;
    }
    total_amt = surcharge + result;

    if (total_amt < 100)
    {
        printf("The minimum bill should be of 100Rs/-");
        exit(0);
    }
    system("cls");
    printf("\n\n");
    printf("Electricity Bill");
    printf("\n\n");
    printf("Customer IDNO\t\t\t\t:%d\n", cust_id);
    printf("Customer Name\t\t\t\t:%s\n", name);
    printf("Unit Consumed\t\t\t\t:%0.2f\n", unit_consumed);
    printf("Amount charged per unit\t\t\t:%0.2f\n", result);
    printf("Surcharge Amount\t\t\t:%0.2f\n", surcharge);
    printf("Net Amount Paid By the Customer\t\t:%0.2f\n\n", total_amt);
    printf("\t\t\tThank You!\t\t\t\n");

    return 0;
}