#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n Roll Number 17BCS076");

    int r,c,i,j;
    int ar[5][5];

    printf("\n Enter number of rows ");
    scanf("%d",&r);
    printf("\n Enter number of columns ");
    scanf("%d",&c);

    printf("\n Enter the matrix ");
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

    int r1=0,r2,c1=0,c2;
    r2=(r-1);
    c2=(c-1);
    int cnt=2;
    int temp = r*c;

    printf("\n");

while(cnt<temp)
 {

    for(i=c1;i<=c2;i++)
    {
        printf("%d",ar[r1][i]);
        cnt++;
    }

    for(i=r1+1;i<=r2;i++)
    {
        printf("%d",ar[i][c2]);
        cnt++;
    }

    for(i=c2-1;i>=c1;i--)
    {
        printf("%d",ar[r2][i]);
        cnt++;
    }
    r1++;
    for(i=r2-1;i>=r1;i--)
    {
        printf("%d",ar[i][c1]);
        cnt++;
    }
    c1++;
    c2--;
    r2--;
 }
 printf("%d",ar[c1][c2]);


}
