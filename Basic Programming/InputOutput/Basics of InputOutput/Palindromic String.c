#include<stdio.h>

#include<string.h>

void main()

{

char a[100];

int len,i,flag=0;

scanf("%s",a);

len=strlen(a);

for(i=0;i<len;i++)

{

if(a[i]!=a[len-i-1])

{

flag=1;

break;

}

}

if(flag==1)

printf("NO\n");

else

printf("YES\n");
}
