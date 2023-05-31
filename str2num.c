#include<stdio.h>

int main()
{
    char num[10];
    int N=0,i,c;
    printf("enter a number: ");
    scanf("%s",&num);
    for(i=0;i<10;i++)
    {
        c=num[i];
        if(c>=48 && c<=57)
        {
            N=N*10+(c-48);
            continue;
        }
        else if(c==0)
        {
            break;
        } 
        else
        {
           printf("\nplease enter a proper number.");
            break;
        }
    }
    printf("\nNumber is %d.\nNumber * 2 is %d.",N,N*2);
    return 0;
}