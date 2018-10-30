#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n Roll Number 17BCS076");

    int dig1=0,dig2=0,dig3=0;
    int num,i;
    char *str[10] = {"I","II","III","IV","V","VI","VII","VIII","IX"};

    printf("\n Enter number in integer ");
    scanf("%d",&num);

    if(num==1000)
        printf("\n M");

    dig1=num/100;
    num=num%100;

    dig2=num/10;
    num=num%10;

    dig3=num;
    printf(" ");


    if(dig1!=0)
    {
        if(dig1<4)
        {
            for(i=1;i<=dig1;i++)
                printf("C");
        }

        else if(dig1==4)
            printf("CD");

        else if(dig1==5)
            printf("D");

        else if(dig1>5 && dig1<9)
            {
                printf("D");
                for(i=dig1-5;i>0;i--)
                    printf("C");
            }

        else if(dig1==9)
            printf("CM");
    }

    if(dig2!=0)
    {
        if(dig2<4)
        {
            for(i=1;i<=dig2;i++)
                printf("X");
        }
        else if(dig2==4)
            printf("XL");
        else if(dig2==5)
            printf("L");
        else if(dig2>5 && dig2<9)
            {
                printf("L");
                for(i=dig2-5;i>0;i--)
                    printf("X");
            }
        else if(dig2==9)
            printf("XC");
    }

    if(dig3!=0)
    {
        for(i=0;i<10;i++)
        {
            if(i==(dig3-1))
                printf("%s",*(str+i));
        }
    }
    return 0;

}
