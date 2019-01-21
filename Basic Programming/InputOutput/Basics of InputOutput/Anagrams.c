#include <stdio.h>
#include<string.h>
int main()
{
int t,test,val;
scanf("%d",&t);
for(test=0;test<t;test++)
{
char s1[10000],s2[10000];
scanf("%s",&s1); scanf("%s",&s2);
int l1,l2,i,j;
l1 = strlen(s1); l2 = strlen(s2);
for(i=0;i<l1;i++)
{
for(j=0;j<l2;j++)
{
if(s1[i]==s2[j])
{
for(int k=i;k<l1;k++)
{
s1[k] = s1[k+1];
} --l1;

for(int k=j;k<l2;k++)
{
s2[k] = s2[k+1];
} --l2;

--i;
}
}
}
val = l1 + l2;
printf("%d\n",val);
}
return 0;
}
