#include <stdio.h>

unsigned int mult(unsigned int a, unsigned int b) {
	unsigned int ans = 0;
	unsigned int m=1000000007;
	while (a != 0)
	{
		if (a & 1) ans = (ans + b) % m;
			a >>= 1;
	b = (b << 1) % m;
	}
	return ans;
}

int main()
{
	unsigned int a,b;
	scanf("%u%u",&a,&b);
	printf("%u\n",mult(a,b));



	return 0;
}
