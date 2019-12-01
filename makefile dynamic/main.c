#include <stdio.h>
#include <stdlib.h>
#include "BankLibrary.h"

int createAcount (double a);
double Biruritra (int a);
double hafkada (int a);
double meshicha (int a);
void close (int a);
void ribit (double a);
void print ();
void closeallacount ();
int main()
{
    char a;
    int flag = 0;
    static int numacount;
    static double cash;
    
        printf("\n \n chose O to craete acount                 chose B to biruritra                  chose C to close acount \n chose D to hafkada                       chose W to charge                     chose E to closeallacount  \n chose P to print                         chose I to add ribit                   \n");
       while (1)
    {
        scanf("%c", &a);
        switch (a)
        {
        case 'O':
            printf("how much you want deposit for new acount\n");
            scanf("%lf", &cash);
            createAcount(cash);
            break;
        case 'B':
            printf("enter number acount\n");
            scanf("%d", &numacount);
            Biruritra(numacount);
            break;
        case 'D':
            printf("enter number acount\n");
            scanf("%d", &numacount);
            hafkada(numacount);
            break;
        case 'C':
            printf("please enter number acount you want to close\n");
            scanf("%d", &numacount);
            close(numacount);
            break;
        case 'E':
            closeallacount();
            exit(1);
            break;
        case 'I':
            printf("how much you want ribit\n");
            scanf("%lf", &cash);
            ribit(cash);
            break;
        case 'W':
            printf("enter number acount\n");
            scanf("%d", &numacount);
            meshicha(numacount);
            break;
        case 'P':
            print();
            break;

        default:
            printf("\nchoose anothe option or press E to exit\n \n chose O to craete acount                 chose B to biruritra                  chose C to close acount \n chose D to hafkada                       chose W to charge                     chose E to close all acounts and exit  \n chose P to print                         chose I to add ribit                   \n");
            break;
        }
    }
}
