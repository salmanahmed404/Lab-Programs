#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n Roll Number 17BCS076");

    int check[52];
    int i;

    for(i=0;i<52;i++)
        check[i]=i+1;
    printf("\n The unique numbers are ");

    i=1;
    int var=0,j;
    while(i!=52)
    {
        var = rand()%52;
        for(j=0;j<52;)
        {
            if(var==check[j])
            {
              check[j]=0;
              printf("%d ",var);
              j++;
            }
            else
                j++;
        }
        i++;
    }

    for(i=0;i<52;i++)
    {
        if(check[i]!=0)
            printf("%d ",check[i]);
    }
    return 0;
}
