#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

struct node
{
	int a, b, cost;
	void read()
	{
		cin >>a>>b>>cost;
		a--;
		b--;
	}
};

int n,m,s;
node mass[1000];
int d[1000];
int inf=100000000;
int main()
{
//freopen("a", "r", stdin);
cin >>m>>n;
int i,j;

for (i=0;i<n;i++)
d[i]=inf;
m*=2;
for (i=0;i<m;i++)
{
mass[i].read();
mass[++i].a=mass[i-1].b;
mass[i].b=mass[i-1].a;
mass[i].cost=mass[i-1].cost;
}
cin >>s;
s--;
d[s]=0;

for (i=0;i<n-1;i++)
	for (j=0;j<m;j++)
	{
		//if (d[mass[j].a]<inf)
		d[mass[j].b]=min(d[mass[j].b], d[mass[j].a]+mass[j].cost);

	}

for (i=0;i<n;i++)
cout <<d[i]<<endl;






	return 0;
}
