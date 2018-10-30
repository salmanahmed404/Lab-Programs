#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("\n Roll Number 17BCS076");

    int num,dec=0,d=100;
    int i=2;
    int temp;

    printf("\n Enter the number in octal ");
    scanf("%d",&num);

    while(num!=0)
    {
        temp = num/d;
        dec+=(temp*pow(8,i));
        i--;
        num=num%d;
        d=d/10;
    }

    printf("\n The decimal value is %d",dec);

    int *ptr;
    int hex[3];
    ptr = hex;
    i=0;
    int val=0,cnt=0;

    while(dec!=0)
    {
        val=dec%16;

        if(val<10)
        ptr[i]=val;

        else if(val==10)
            ptr[i]=65;

        else if(val==11)
            ptr[i]=66;

        else if(val==12)
            ptr[i]=67;

        else if(val==13)
            ptr[i]=68;

        else if(val==14)
            ptr[i]=69;

        else if(val==15)
            ptr[i]=70;

        dec=dec/16;
        i++;
        cnt++;
    }
    printf("\n The hexadecimal value is");

    for(i=cnt-1;i>=0;i--)
    {
        if(ptr[i]>9)
            printf("%c",ptr[i]);
        else
            printf("%d",ptr[i]);
    }
}
