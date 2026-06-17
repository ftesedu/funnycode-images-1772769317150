#include <stdio.h>
#include <math.h>
int main ()
{
    long long pa = 9000000 , pd = 360000, n, income, income_tax;
        printf("Enter your income: ");
        scanf("%ll",&income);
        printf("Enter your number of dependent: ");
        scanf("%ll",&n);
        long long tf = 12 * (pa + (n * pd));
        printf("Your income of this year: %lld\n", income);
        printf("Tax-free: %ll\n",tf);
        long long ti = income - tf;
            if(ti<=0)
            {
                income_tax = 0;
            }
            else if (ti>0 && ti<=5000000)
            {
                income_tax = ti * 5 / 100;
                printf("Taxable income: %ll\n",ti);
            }
            else if ( ti > 5000000 && ti <= 10000000)
            {
                income_tax = ti * 10 / 100;
                printf("Taxable income: %ll\n", ti);
            }
            else if ( ti > 10000000 && ti <= 18000000)
            {
                income_tax = ti * 15 / 100;
                printf("Taxable income: %ll\n", ti);
            }
            else if (ti > 18000000)
            {
                income_tax = ti * 20 / 100;
                printf("Taxable income : %ll\n", ti);
            }
            printf("Income tax: %ll", income_tax);
            return 0;
}
