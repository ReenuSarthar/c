
#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
void main ()
{
    int h,m,s;
    h=0;
    m=0;
    s=0;
    if(h>24||m>60||s>60)
    {
        printf("invalid data ");
    }
    while(1)
    {
        s++;
        if(s==60)
        {
            m++;
            s=0;
        }
        if(m==60)
        {
            h++;
            m=0;

        }

        if(h==24)
        {
           m=0;
           s=0;
           h=0;

        }
        /*
        0-black
        1-blue
        2-green     10.A-light green
        3-agua       11.B
        4-red           C
        5-purple        D
        6.yellow        E
        7.white         F
        8.gray          G
        9.light blue    H

        */
        system("color 02");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\t\t\t\t****************************************************\t\t\n");
        printf("\t\t\t\t*                                                  *\t\t\n");
        printf("\t\t\t\t*\t\tTime:%02d:%02d:%02d                      *\t\t\n",h,m,s);
        printf("\t\t\t\t*                                                  *\n");
        printf("\t\t\t\t****************************************************\t\t\n");
        sleep(1);
        system("cls");
    }

}
