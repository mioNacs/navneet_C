#include<stdio.h>

int to_int(char[]);

int main()
{
    char num[10];
    int N=0;
    printf("enter a number: ");
    scanf("%s",&num);
    N=to_int(num);
    printf("\nNumber is %d.\nNumber * 2 is %d.",N,N*2);
    return 0;
}

int to_int(char num[])
{
    int N=0,i,c;
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
           N=0;
           exit(0);
        }
    }
    return N;
}