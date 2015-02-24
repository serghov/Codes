#include <stdio.h>

int main()
{
	int a=0;
	int i;
	int b=0;
	scanf("%d",&a);
	for (i=a-1;i>=0;i--)
	{
		scanf("%d",&a);
		b+=a*1<<i;
	}
	printf("%d\n",b);








	return 0;
}
