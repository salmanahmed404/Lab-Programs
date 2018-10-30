#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    printf(" Roll number 17BCS076");

    char *em;
    char str1[10];
    int len=0,i=0,cnt=0;

    em=(char*)malloc(30*sizeof(char));

    printf("\n Enter your email id ");
    gets(em);

    len=strlen(em);


    if(isdigit(*(em)))
        printf(" The id should start with an alphabet");
    while(*(em)!='\0')
    {
        if(isalnum(*(em)) || *(em)=='.')
        {
            em++;
            continue;
        }

        else if(*(em)=='@')
        {
            cnt++;
            if(cnt>1)
                printf(" Only single @ is considered valid");
        }
        else
            printf(" Only . and @ are allowed ");

        em++;

    }

    em=(em-len);

    cnt=0;
    while(*(em)!='@')
    {
        cnt++;
        em++;
    }
    if(cnt>20)
        printf(" The user name should be max of 20 characters");

    while(*(em)!='.')
        em++;
    em++;
    while(*(em)!='\0')
    {
        str1[i]=*(em);
        em++;
        i++;
    }
    len=0;
    len=strlen(str1);

    str1[len-1]='\0';


    if((strcmp(str1,"com")==0) || (strcmp(str1,"in")==0))
        printf(" Valid Email id");
    //else
        //printf(" Only .com and .in domains exist");




    return 0;
}
