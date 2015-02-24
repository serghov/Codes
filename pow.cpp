#include <stdio.h>

using namespace std;

int pow(int a, int k)
{
int ans=1;
	while (k)
	{
		if (k&1)
			ans*=a;
		a*=a;
		k>>=1;
	}
return ans;
}

int main()
{
int n,m;
scanf("%d%d",&n,&m);
printf("%d",pow(n,m));
	return 0;
}
