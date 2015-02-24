#include <stdio.h>
#include <algorithm>
#include <cmath>

using namespace std;

struct p
{
	int x,y;
	int next,prev;
	p(){}
	void read()
	{
		scanf("%d%d",&x,&y);
	}
	p(int a, int b)
	{
		x=a;
		y=b;
	}
};


p c;
p mass[1000];
p ans[1000];
int k;
int n;
bool operator<(p a,p b)
{
	return atan2(a.x-c.x,a.y-c.y)<atan2(b.x-c.x,b.y-c.y);
}
double matan(p a)
{
	return atan2(a.x-c.x,a.y-c.y);
}

bool angle(p a, p b, p c)
{
	return (b.x-a.x)*(c.y-a.y)-(b.y-a.y)*(c.x-a.x)<0;
}

int main()
{
scanf("%d",&n);
int i;
for (i=0;i<n;i++)
{
	mass[i].read();
	c.x+=mass[i].x;
	c.y+=mass[i].y;
}
c.x/=n;
c.y/=n;
printf("\n%d %d\n",c.x,c.y);

sort(mass,mass+n);

for (i=0;i<n;i++)
printf("%d %d %f\n",mass[i].x,mass[i].y,matan(mass[i]));

for (i=0;i<n;i++)
{
	mass[i].prev=i-1;
	mass[i].next=i+1;
}
mass[0].prev=n-1;
mass[n-1].next=0;
p c;

for (int j=0,i=0;j<n;i=c.next,j++)
{
c=mass[i];
printf("%d\n",i);
	while (!angle(mass[mass[c.prev].prev],mass[c.prev],c))
	{
		mass[i].prev=mass[c.prev].prev;
		mass[mass[i].prev].next=i;
		mass[c.prev].prev=-1;
		mass[c.prev].next=-1;
	}
}
printf("\n");
for (i=0;i<n;i++)
	if (mass[i].prev!=-1)
		printf("%d %d\n",mass[i].x,mass[i].y);

	return 0;
}
