#include <stdio.h>
#include <stdlib.h>

char *ones[10]={"one","two","three","four","five","six","seven","eight","nine"};
char *tens[10]={"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
char *thou[10]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};

void three(int num)
{
    int dig;

    dig=num/100;
    printf("%s Hundred ",*(ones+dig-1));

    num=num%100;
    dig=num/10;
    if(dig!=0)
    printf("%s ",*(tens+dig-1));

    num=num%10;
    dig=num;
    if(dig!=0)
    printf("%s ",*(ones+dig-1));
}

int count(int num)
{
    int cnt=7,rem;
    rem=(num%1000000);
    if(rem==num)
    {
        rem=(num%100000);
        if(rem==num)
        {
            rem=(num%10000);
            if(rem==num)
            {
                rem=(num%1000);
                if(rem==num)
                    cnt=3;
                else
                    cnt=4;
            }
            else cnt=5;
        }
        else cnt=6;
    }
    else cnt=7;
    return cnt;
}

void four(int num)
{
    int temp;
    temp=num/1000;
    printf("%s Thousand ",*(ones+temp-1));
    num=num%1000;
    if(num!=0)
    three(num);
}

void five(int num)
{
    int temp;
    temp=num/10000;
    num=num%10000;
    if(num!=0)
    {
        printf("%s ",*(tens+temp-1));
        four(num);
    }
    else
        printf("%s Thousand ",*(tens+temp-1));
}

void six(int num)
{
    int temp;
    temp=num/100000;
    printf("%s Lakh ",*(ones+temp-1));
    num=num%100000;
    if(num!=0)
    five(num);
}

void seven(int num)
{
    int temp;
    temp=num/1000000;
    num=num%1000000;
    if(num!=0)
    {
        printf("%s ",*(tens+temp-1));
        six(num);
    }
    else
        printf("%s Lakh ",*(tens+temp-1));

}

int main()
{
    printf("\n Roll Number 17BCS076");

    int show,num;
    printf("\n Enter the number ");
    scanf("%d",&num);

    show=count(num);


    switch(show)
    {
        case 3:three(num);
                break;
        case 4:four(num);
                break;
        case 5:five(num);
                break;
        case 6:six(num);
                break;
        case 7:seven(num);
                break;
    }


}
