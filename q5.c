#include <stdio.h>
void main()
{
    int pn,or,el;
    float gm;
    printf ("1. Carbon monoxide\n");
    printf ("2. Hydrocarbon\n");
    printf ("3. Nitrogen Oxides\n");
    printf ("4. Nonmethane hydrocarbons\n");
    printf ("Enter pollutant number: ");
    scanf ("%d", &pn);
    printf ("Enter number of grams emitted per mile: ");
    scanf ("%f", &gm);
    printf ("Enter odometer reading: ");
    scanf("%d",&or);

    if (pn==1)
    {
        if (or<=50000)
        {
            if (gm<3.4)
            printf ("It is withing the permitted level of 3.4 grams/mile");
            else
            printf ("It exceeds the permitted level");
        }
        else if (or>50000)
        {
            if (gm<4.2)
            printf ("It is withing the permitted level of 4.2 grams/mile");
            else
            printf ("It exceeds the permitted level");
        }
    } else if (pn==2)
    {
        if (or<=50000)
        {
            if (gm<0.31)
            printf ("It is withing the permitted level of 0.31 grams/mile");
            else
            printf ("It exceeds the permitted level");
        }
        else if (or>50000)
        {
            if (gm<0.39)
            printf ("It is withing the permitted level of 0.39 grams/mile");
            else
            printf ("It exceeds the permitted level");
        }
    }

    else if (pn==3)
    {
        if (or<=50000)
        {
            if (gm<0.4)
            printf ("It is withing the permitted level of 0.4 grams/mile");
            else
            printf ("It exceeds the permitted level");
        }
        else if (or>50000)
        {
            if (gm<0.5)
            printf ("It is withing the permitted level of 0.5 grams/mile");
            else
            printf ("It exceeds the permitted level"); }
    }

    else if (pn==4)
    {
        if (or<=50000)
        {
            if (gm<0.25)
            printf ("It is withing the permitted level of 0.25 grams/mile");
            else
            printf ("It exceeds the permitted level");
        }
        else if (or>50000)
        {
            if (gm<0.31)
            printf ("It is withing the permitted level of 0.31 grams/mile");
            else
            printf ("It exceeds the permitted level");
        }
    }
}


