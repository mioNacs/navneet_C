#include<stdio.h>

void sort(int arr[], int n);
void binary_search(int arr[],int num, int low, int high);

int main()
{
    int arr[]={3,52,45,2,65,33,556,9,54,31,4};
    int n, num;
    n=sizeof(arr)/sizeof(arr[0]);
    printf("which no do you want to find? \n");
    scanf("%d",&num);
    sort(arr,n);
    binary_search(arr,num,0,n);
    return 0;
}

void sort(int arr[], int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}

void binary_search(int arr[], int num, int low, int high)
{
    int mid;
    if(high>low)
    {
        mid=(low+high)/2;
        if(arr[mid]==num)
            printf("number %d exists in array.",num);
        else if(arr[mid]<num)
            binary_search(arr,num,mid+1,high);
        else if(arr[mid]>num)
            binary_search(arr,num,low,mid);
        else
            printf("unknown error!!");
    }
    else
        printf("\n number not found");
}
