#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf(" Roll Number is 17BCS076");
    int n,space,i,j,temp,r;
    printf("\n Enter the no. of rows ");
    scanf("%d",&n);

    temp=n;
    r=1;
    while(temp>0)
    {
        for(space=1;space<temp;space++)
            printf(" ");

        for(i=1;i<=r;i++)
            printf("%d",i);

        for(j=i-2;j>0;j--)
            printf("%d",j);
        printf("\n");
        r++;
        temp--;

    }
    temp=1;
    r-=2;
    while(temp<n)
    {
       for(space=1;space<=temp;space++)
            printf(" ");

       for(i=1;i<=r;i++)
            printf("%d",i);

       for(j=i-2;j>0;j--)
            printf("%d",j);

       printf("\n");
       temp++;
       r--;
    }
}
