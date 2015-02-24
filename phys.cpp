#include <stdio.h>

int m1[1000],m2[1000];
int k1,k2;

int main()
{
int i=0;
int t;
while(scanf("%d",&t)!=EOF)
{
if (i%2==0)
{
	m1[k1++]=t;
}
else
m2[k2++]=t;
i++;
}
int n=i;
for (i=0;i<k1;i++)
printf("%d\n",m1[i]);
printf("\n\n\n");
for(i=0;i<k2;i++)
printf("%d\n",m2[i++]);
return 0;
}
