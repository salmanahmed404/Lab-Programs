#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf(" Roll number is 17BCS076");

    char *date;//*time;
    int day,mon,year;
    date = (char*)malloc(10*sizeof(char));
    //time = (char*)malloc(10*sizeof(char));

    printf("\n Enter date ");
    gets(date);
    /*printf(" Enter time ");
    gets(time);*/

    day=atoi(date);
    while(*(date)!='/')
        date++;
    date++;
    if(day>31)
            printf("\n Incorrect date");

    mon=atoi(date);
    while(*(date)!='/')
        date++;
    date++;

    if(mon>12)
        printf("\n Incorrect date");

    if(*(date)=='0')
        printf(" The year should start with 1");

    year=atoi(date);

    if(year%4==0)
    {
        if(mon==2)
        {
            if(day>29)
                printf("\n Incorrect number of days");
        }
        else if(mon%2==0)
        {
            if(day>30)
                printf("\n Incorrect number of days");
        }
        else
        {
            if(day>31)
                printf("\n Incorrect number of days");
        }
    }
    else
    {
        if(mon==2)
        {
            if(day>28)
                printf("\n Incorrect number of days");
        }
        else if(mon%2==0)
        {
            if(day>30)
                printf("\n Incorrect number of days");
        }
        else
        {
            if(day>31)
                printf("\n Incorrect number of days");
        }
    }

    printf("\n Correct date");

    printf("\n %d %d %d",day,mon,year);

}
