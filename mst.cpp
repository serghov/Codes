#include <stdio.h>
#include <string.h>
using namespace std;
int n;
int mass[1000];
int p[1000];
int level[1000];

void connect(int a,int b)
{
	if (level[a]>level[b])
		p[b]=a;
	else if (level[a]<level[b])
		p[a]=p[b];
	else
	{
		p[a]=p[b];
		level[a]++;
	}
}
int par(int a)
{
	while (p[a]!=-1)
		a=p[a];
	return a;
}
bool connected(int a, int b)
{
	return par(a)==par(b);
}


int main()
{
int t;
memset(p,100,-1);
scanf("%d",&n);
//scanf("%d",&t);
int i;
char a;
int b,c;
for (i=0;i<n;i++)
{
	scanf(" %c%d%d",&a,&b,&c);
	if (a=='u')
		connect(b,c);
	else
		printf("%d\n",connected(b,c));
}








	return 0;
}
