#include <stdio.h>

int findDigits(int inp)
{
    int ct = 0;
    while (inp != 0)
    {
        inp /= 10;
        ct++;
    }
    return ct;
}
int main()
{
    int year;
    printf("Now you can input the year to test->");
    scanf("%d", &year);
    int nDigits = findDigits(year);
    if (nDigits == 4)
    {
        if ((year % 4) == 0)
        {
            if ((year % 100) == 0)
            {
                if ((year % 400) == 0)
                {
                    printf("%d is leap year.\n", year);
                }
                else
                {
                    printf("%d is normal year.\n", year);
                }
            }
            else
            {
                printf("%d is leap year.\n", year);
            }
        }
        else
        {
            printf("%d is normal year.\n", year);
        }
    }
    else
    {
        printf("There are %d digits of year %d, plz restart the program and enter year of 4 digits.\n", nDigits, year);
    }
    return 0;
}