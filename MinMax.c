#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n Roll Number 17BCS076");

    int ar[100],n;

    printf("\n Enter the number of elements ");
    scanf("%d",&n);
    int i;

    printf("\n Enter the elements ");
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);

    i=0;
    int max,min,maxpos,minpos,temp,temp2;
    while(i!=n)
    {
        temp2=maxpos;
        maxpos=i;
        temp=0;
        while(ar[i]>=0 && i!=n)
        {
            temp=temp+ar[i];
            i++;
        }
        if (temp>max)
            max=temp;
        else
            maxpos=temp2;

        temp2=minpos;
        minpos=i;
        temp=0;
        while(ar[i]<=0 && i!=n)
        {
            temp=temp+ar[i];
            i++;
        }
        if(temp<min)
            min=temp;
        else
            minpos=temp2;
    }

    printf("\n Maximum value is %d ",max);
    printf("\n Sub-array is ");

    for(i=maxpos;ar[i]>0&&i!=n;i++)
        printf("%d ",ar[i]);

    printf("\n");

    printf("\n Minimum value is %d ",min);
    printf("\n Sub-array is ");
    for(i=minpos;ar[i]<0&&i!=n;i++)
        printf("%d ",ar[i]);

    printf("\n \n");

    return 0;


}
