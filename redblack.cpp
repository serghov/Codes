#include <iostream>
#include <algorithm>
using namespace std;

struct p
{
	int x,c;
	void read(int color)
	{
	cin >>x;
	c=color;
	}
};

bool operator<(p a, p b)
{
	return a.x<b.x;
}

p mass[100000];
int n,m;
int stack[100000];
int c;
int ans;
int main()
{
cin >>n>>m;
int i;
for (i=0;i<m;i++)
{
	mass[i].read(1);
}
for (;i<m+n;i++)
{
	mass[i].read(-1);
}

sort(mass, mass+n+m);


for (i=0;i<m+n;i++)
{
	if (mass[i].c==-1)
	{
		if (stack[c]==1)
		{
			c--;
			ans++;
		}
		if (stack[c]==-1 || stack[c]==0)
		{
			stack[c++]=-1;
		}
	}
	else
	{
		if (stack[c]==-1)
		{
			stack[c]=1;
		}
		if (stack[c]==1)
		{
			int tmp=c;
			while(stack[tmp]!=-1)
			{
				tmp--;
			}
			stack[tmp]=1;

		}


	}

}

cout <<ans<<endl;











	return 0;
}

