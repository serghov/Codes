#include <stdio.h>

using namespace std;

int m[1000][1000];
int n;


int main()
{
scanf("%d",&n);
int i,j;
for (i=1;i<n;i++)
{
	for (j=1;j<n;j++)
		m[i][j]=m[i-1][j]+m[i-1][j-1]+1;
}
for (i=0;i<n;i++)
{
	for (j=0;j<n;j++)
		printf("%d ",m[i][j]);
printf("\n");
}
	return 0;
}
