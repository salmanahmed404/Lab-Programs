#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n Roll Number 17BCS076");

    int r,c,i,j;
    int ar[10][10];

    printf("\n Enter the number of rows ");
    scanf("%d",&r);
    printf("\n Enter the number of columns ");
    scanf("%d",&c);

    printf("\n Enter the values of the matrix ");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&ar[i][j]);
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",ar[i][j]);
            printf("\n");
    }

    int pos,rmax,cmin;
    int t,flag=0;

    for(i=0;i<r;i++)
    {
        rmax=ar[i][0];
        pos=0;
        for(j=0;j<c;j++)
        {
            if(ar[i][j]>rmax)
            {
                rmax=ar[i][j];
                pos=j;
            }
        }

        cmin=rmax;
        for(t=0;t<r;t++)
        {
            if(ar[t][pos]<cmin)
            {
                cmin=ar[t][pos];
            }
        }
        if(cmin==rmax)
        {
            printf("\n%d",rmax);
            flag=1;
        }
    }
    if(flag==0)
        printf("\n No saddle value");

}
