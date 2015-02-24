#include <stdio.h>
#include <algorithm>
using namespace std;
int gcd(int a, int b)
{
	while(b)
	{
		a%=b;
		swap(a,b);
	}
	return a;
}

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",gcd(a,b));




	return 0;
}

