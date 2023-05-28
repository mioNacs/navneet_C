#include<stdio.h>

void isprime(int a);

int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    isprime(num);
    return 0;
}

void isprime(int a)
{
    int i, flag=0;
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            printf("number %d is not prime.",a);
            flag=1;
            break;
        }    
    }
    if(flag==0)
        printf("number %d is prime.",a);
}