#include <stdio.h>
int main(void)
{
    char c;
    int i;
    int j;
    i=0;
    j=0;
    printf("enter characters less than 50 characters:");
    while((c=getchar())!='\n')
    {
        if((c== 'a')||(c=='A'))
        {
            i++;
        }
        else if (c=='0')
        {
            j++;
        }
    }
    printf("the number of a is %d \n the number of 0 is %d",i,j);
    return 0;
}