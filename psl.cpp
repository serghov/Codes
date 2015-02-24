#include <stdio.h>

int pr[100000];
int prs;
int lp[100000];
int n=100;


int main()
{
int i,j;
for (i=2;i<=n;i++)
{
	if (lp[i]==0)
	{
		lp[i]=i;
		pr[prs++]=i;
	}
	for (j=0;j<prs && pr[j]<=lp[i] && i*pr[j]<=n; j++)
		lp[i*pr[j]]=pr[j];

}
for (i=0;i<prs;i++)
	printf("(%d %d)",pr[i],lp[i]);
printf("\n");




	return 0;
}
