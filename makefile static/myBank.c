#include <stdio.h>
#include <stdlib.h>
#include "BankLibrary.h"


int createAcount(double money)
{
    if (money >= 0)
    {
        if (numacount < 50)
        {
            acounts[numacount][0] = money;
            acounts[numacount][1] = 1;
            printf("the num acount is  %d\n", numacount + 901);
            numacount++;
            counter++;
        }
        else if (counter < 50 && numacount > 50)
        {
            int i = 0;
            while (counter != counter + 1)
            {
                if (acounts[i][1] == 0)
                {
                    acounts[i][0] = money;
                    acounts[i][1] = 1;
                    printf("%d  your number acount is ", i + 901);
                    counter++;
                }
                else
                {
                    i++;
                }
            }
        }
        else
        {
            print("bank is full\n");
        }
    }
    else
    {
        printf("just a positive number\n");
    }
}
double Biruritra(int numacount)
{

    if (numacount >= 901)
    {
        numacount = numacount - 901;
        if (numacount < 50 && numacount >= 0 && acounts[numacount][1] == 1)
        {
            double money2 = acounts[numacount][0];
            printf("your balance is  %lf$\n", money2);
        }
        else
        {
            printf("no such acount\n");
        }
    }
    else
    {

        if (numacount < 50 && numacount >= 0 && acounts[numacount][1] == 1)
        {
            double money2 = acounts[numacount][0];
            printf("your balance is  %lf$\n", money2);
        }
        else
        {
            printf("no such acount\n");
        }
    }
}
double hafkada(int numacount)

{
    numacount = numacount - 901;
    double money;
    if (numacount <= 50 && numacount >= 0 && acounts[numacount][1] == 1)
    {
        printf("enter sum of money\n");
        if (!scanf("%lf", &money) || money < 0)
        {
            if (money < 0)
            {
                printf("just positive number");
            }
            else
            {
                printf("invild data \n");
            }
        }
        else
        {
            acounts[numacount][0] = acounts[numacount][0] + money;
            Biruritra(numacount);
        }
    }
    else
    {
        printf("no such acount\n");
    }
}
double meshicha(int numacount)
{
    numacount = numacount - 901;
    if (numacount <= 50 && numacount >= 0 && acounts[numacount][1] == 1)
    {
        double money;
        printf("how much money?\n");
        if (!scanf("%lf", &money))
        {
            printf("invild data \n");
        }
        else if (acounts[numacount][0] - money < 0 || money < 0)
        {
            if (money <= 0)
            {
                printf("ijust positive number\n");
            }
            else
            {
                printf("not enogh money in your acount\n");
            }
        }
        else
        {
            acounts[numacount][0] = acounts[numacount][0] - money;
            Biruritra(numacount);
        }
    }
    else
    {
        printf("not such acount\n");
    }
}
void close(int numacount)
{
    numacount = numacount - 901;
    if (numacount <= 50 && numacount >= 0 && acounts[numacount][1] == 1)
    {
        acounts[numacount][1] = 0;
        counter--;
    }
    else
    {
        printf("not such acount\n");
    }
}

void ribit(double precent)
{
    for (size_t i = 0; i <= numacount; i++)
    {
        if (acounts[i][1] == 1)
        {
            double summoney = (acounts[i][0] * precent) / 100;
            acounts[i][0] = summoney + acounts[i][0];
        }
    }
}
void print()
{

    if (counter == 0)
    {
        printf("not acounts in bank\n");
    }
    else
    {

        for (size_t i = 0; i <= numacount; i++)
        {
            if (acounts[i][1] == 1)
            {
                printf("your balance is %lf$\n", acounts[i][0]);
                printf("your number acount is %d\n", i + 901);
            }
        }
    }
}
void closeallacount()
{
    for (size_t i = 0; i <= numacount; i++)
    {
        acounts[i][1] = 0;
    }
    counter = 0;
    numacount = 0;
}
