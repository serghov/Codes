#include <stdio.h>

using namespace std;

struct p
{
	int m[2][2];
	int h,w;
	p()
	{
		h=2;
		w=2;
	}
	void print()
	{
	int i,j;
		for (i=0;i<h;i++)
		{
		        for (j=0;j<w;j++)
		                printf("%d ",m[i][j]);
		printf("\n");
		}

	}
};

p operator*(p a, p b)
{
int c=0;
p ans;
	int i,j,g;
	for (i=0;i<a.h;i++)
		for (j=0;j<b.w;j++)
		{
			c=0;
			for (g=0;g<a.w;g++)
				c+=a.m[i][g]*b.m[j][g];
			ans.m[i][j]=c;
		}
return ans;
}

p pow(p a, int k)
{
p ans=a;
	while(k)
	{
		if (k&1)
			ans=ans*a;
		a=a*a;
	k>>=1;
	}
return ans;
}

int n;
p start;

int main()
{
start.m[0][0]=0;
start.m[1][1]=1;
start.m[1][0]=1;
start.m[0][1]=1;

scanf("%d",&n);
p t=pow(start,n);
t.print();



	return 0;
}
