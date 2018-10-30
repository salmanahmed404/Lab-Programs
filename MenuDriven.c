#include <stdio.h>
#include <stdlib.h>

int fact(int num)
{
    int f=1;
    int i=1;
    while(i<=num)
    {
        f=f*i;
        i++;
    }
    return f;
}

void series()
{
    int n;
    printf("\n Enter the number of terms ");
    scanf("%d",&n);

    int i=1;
    float sum=0;
    while(i<=n)
    {
        sum=sum+(i/fact(i));
        i++;
    }
    printf("\n The sum of the series is %f ",sum);
}

void fib()
{
    int n;
    printf("\n Enter the number of terms ");
    scanf("%d",&n);

    int f=0,s=1,t;
    int i;
    printf("\n %d %d ",f,s);
    for(i=3;i<=n;i++)
    {
        t=f+s;
        printf("%d ",t);
        f=s;
        s=t;
    }
}

void sum()
{
    int a,b;
    printf("\n Enter the two numbers ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("\n Their sum is %d",(a+b));
}

int main()
{
    printf("\n Roll Number 17BCS076");

    int ch,ans,num;
    do{
        printf("\n 1.Factorial 2.Series Sum 3.Fibonacci 4.Sum of two numbers ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:{
            printf("\n Enter the number ");
            scanf("%d",&num);
            printf("\n The factorial is %d",fact(num));
            break;}
            case 2: series();
                    break;
            case 3: fib();
                    break;
            case 4: sum();
                    break;
        }
        printf("\n Do you want to repeat 1.Yes 2.No ");
        scanf("%d",&ans);
    }while(ans==1);

}


