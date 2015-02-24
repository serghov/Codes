#include <stdio.h>

int pr[100000];
int prs;
int lp[100000];
int k=10000;
void init()
{
	int i;
	for (i=2;i<=k;i++)
	{
		if (lp[i]==0)
		{
			lp[i]=i;
			pr[prs++]=i;
		}
		for (int j=0;j<prs && pr[j]<=lp[i] && i*pr[j]<=k;j++)
			lp[i*pr[j]]=pr[j];

	}
}

int main()
{
init();
int i;
for (i=0;i<10000;i++)
	printf("%d ",lp[i]);
printf("\n");









	return 0;
}
