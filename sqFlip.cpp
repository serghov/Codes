#include <iostream>

using namespace std;
int mass[1000][1000];
int ans[1000][1000];
int n,m;
int ansN,ansM;
int fType;
struct p
{
int x,y;
	p(int a,int b)
	{
	x=a;
	y=b;
	}
};

p rFlip(p c)
{
return p(c.y,n-c.x-1);
}
p lFlip(p c)
{
return p(m-c.y-1,c.x);
}
p vFlip(p c)
{
return p(c.x,n-c.y-2);
}
p hFlip(p c)
{
return p(m-c.x,c.y);
}
p cFlip(p c)
{
	switch (fType)
	{
	case 0:
	ansN=m;
	ansM=n;
	return rFlip(c);
	case 1:
	ansN=m;
	ansM=n;
	return lFlip(c);
	case 2:
	ansN=n;
	ansM=m;
	return hFlip(c);
	case 3:
	ansN=n;
	ansM=m;
	return vFlip(c);
	}
}
int main()
{
cout <<"type of flip(0=right;1=left;2=horizontal;3=vertical) > ";
cin >>fType;
cout <<"width, height of the matrix > ";
cin >>m>>n;
int i,j;
cout <<"matrix > "<<endl;
for (i=0;i<n;i++)
	for (j=0;j<m;j++)
		cin >>mass[i][j];
for (i=0;i<n;i++)
{
	for (j=0;j<m;j++)
	{
		ans[cFlip(p(i,j)).x][cFlip(p(i,j)).y]=mass[i][j];
	}
}
for (i=0;i<ansN;i++)
{
	for (j=0;j<ansM;j++)
		cout <<ans[i][j]<<" ";
cout <<endl;
}

	return 0;
}
