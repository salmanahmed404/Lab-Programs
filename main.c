#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n Roll Number 17BCS076");

    char *str,*ptr,*first;
    str = (char*)malloc(20*sizeof(char));

    printf("\n Enter the string ");
    gets(str);
    first=str;

    while(*(str)!='\0')
    {
        if(*(str)==*(str+1))
        {
            ptr=str;
            while(*(ptr)!='\0')
                {
                    *(ptr)=*(ptr+1);
                    ptr++;
                }

        }
        str++;
    }
    printf(" ");
    puts(first);

}
