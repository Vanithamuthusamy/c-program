#include<stdio.h>
#include<string.h>
int main()
{
char s1[100];
int i,l,n=0;
scanf("%[^\n]s",s1);
l=strlen(s1);
for(i=0;i<l;i++)
{
if(s1[i]>='0'&&s1[i]<='9')
   n++;
}
printf("%d",n);
return 0;
}
