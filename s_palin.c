#include<stdio.h>
#include<string.h>
int main()
{
char str1[30],str2[30];
int camp;
printf(" \nenter a string: ");
scanf("%s",str1);
strcpy(str2,str1);
strrev(str1);
camp=strcmp(str1,str2);
if(camp==0)
printf("string is palindrome");
else
printf("string is not palindrome");
return 0;
}