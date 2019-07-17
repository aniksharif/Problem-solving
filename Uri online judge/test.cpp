#include <stdio.h>

int main()
{
    double banknotes_a;
    long int restamount = 0;
    scanf("%f", &banknotes_a);
    long int banknotes = banknotes_a * 100;
    printf("NOTAS:\n");
    if (banknotes % 10000 != 0)
    {
        printf("%ld nota(s) de R$ 100.00\n", banknotes / 10000);
        restamount = (float) (banknotes % 10000);
    }
    else
    {
        printf("0 nota(s) de R$ 100.00\n");
        restamount = 0;
    }


    if (restamount != 0 && restamount % 5000 != 0)
    {
        printf("%ld nota(s) de R$ 50.00\n", restamount / 5000);
        restamount = (float)(restamount % 5000);
    }
    else
    {
        printf("0 nota(s) de R$ 50.00\n");
    }


    if (restamount != 0 && restamount >= 2000)
    {
        printf("%ld nota(s) de R$ 20.00\n", restamount / 2000);
        restamount =  (float)(restamount % 2000);
    }
    else
    {
        printf("0 nota(s) de R$ 20.00\n");
    }
    if (restamount != 0 && restamount >= 1000)
    {
        printf("%ld nota(s) de R$ 10.00\n", restamount / 1000);
        restamount =  (float)(restamount % 1000);
    }
    else
    {
        printf("0 nota(s) de R$ 10.00\n");
    }

    if (restamount != 0 && restamount >= 500)
    {
        printf("%ld nota(s) de R$ 5.00\n", restamount / 500);
        restamount =  (float)(restamount % 500);
    }
    else
    {
        printf("0 nota(s) de R$ 5.00\n");
    }

    if (restamount != 0 && restamount >= 200)
    {
        printf("%ld nota(s) de R$ 2.00\n", restamount / 200);
        restamount =  (float)(restamount % 200);
    }
    else
    {
        printf("0 nota(s) de R$ 2.00\n");
    }
    printf("MOEDAS:\n");
    if (restamount % 100 != 0)
    {
        printf("%ld moeda(s) de R$ 1.00\n", restamount / 100);
        restamount =  (float)(restamount % 100);
    }
    else
    {
        printf("0 nota(s) de R$ 1.00\n");
        restamount = 0;
    }

    if (restamount != 0 && restamount % 50 != 0)
    {
        printf("%ld moeda(s) de R$ 0.50\n", restamount / 50);
        restamount =  (float)(restamount % 50);
    }
    else
    {
        printf("0 moeda(s) de R$ 0.50\n");
    }


    if (restamount != 0 && restamount >= 25)
    {
        printf("%ld moeda(s) de R$ 0.25\n", restamount / 25);
        restamount =  (float)(restamount % 25);
    }
    else
    {
        printf("0 moeda(s) de R$ 0.25\n");
    }
    if (restamount != 0 && restamount >= 10)
    {
        printf("%ld moeda(s) de R$ 0.10\n", restamount / 10);
        restamount = (float) (restamount % 10);
    }
    else
    {
        printf("0 moeda(s) de R$ 0.10\n");
    }

    if (restamount != 0 && restamount >= 5)
    {
        printf("%ld moeda(s) de R$ 0.05\n", restamount / 5);
        restamount =  (float)(restamount % 5);
    }
    else
    {
        printf("0 moeda(s) de R$ 0.05\n");
    }

    if (restamount != 0 && restamount >= 1)
    {
        printf("%ld moeda(s) de R$ 0.01\n", restamount / 1);
        restamount = (float) (restamount % 1);
    }
    else
    {
        printf("0 moeda(s) de R$ 0.01\n");
    }
    return 0;
}