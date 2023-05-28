#include<stdio.h>

int main()
{
    int num, i, flag=0;
    printf("enter a number: ");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            printf("number %d is not prime.",num);
            flag=1;
            break;
        }    
    }
    if(flag==0)
        printf("number %d is prime.",num);
    return 0;
}