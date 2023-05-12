#include<stdio.h>
#include<string.h>
int main()
{
char str1[20],str2[20];
int cmp;
printf("\n enter a string: ");
scanf("%s",str1);
strcpy(str2,str1);
strrev(str1);
cmp=strcmp(str1,str2);
if(cmp==0)
printf("string is palindrome");
else
printf("string is not palindrome");
return 0;
}