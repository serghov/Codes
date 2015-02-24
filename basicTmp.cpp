#include <stdio.h>

int main()
{
	int d=15;
	while (d<30 && d>5)
	{
		if (d%4==3)
			printf("%d ",2*d*d);
		d-=2;
	}
	printf("%d ",d);
	printf("%d",2*d*d);
return 0;
}
