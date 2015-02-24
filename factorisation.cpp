#include <stdio.h>

long long int n=10000000;
long long int pr[100000000];
long long int prs;
long long int lp[100000000];

void init()
{
int i,j;
	for (i=2;i<n;i++)
	{
		if (lp[i]==0)
		{
			lp[i]=i;
			pr[prs++]=i;
		}
		for(j=0;j<prs && pr[j]<=lp[i] && i*pr[j]<=n;j++)
			lp[i*pr[j]]=pr[j];
	}
}

int main()
{
long long int t;
init();
scanf("%lld",&t);
lp[1]=1;
while(t>1)
{
	printf("%lld ",lp[t]);
	t/=lp[t];
}
printf("\n");

	return 0;
}
