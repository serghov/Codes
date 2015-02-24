#include <iostream>

using namespace std;

int n;
int t[1000000];

void inc(int i, int d)
{
	for (;i<n;i=(i | (i+1)))
		t[i]+=d;
}

int sum(int l, int r)
{
int res=0;
l--;
	for (;r>=0;r=(r & (r+1))-1)
		res+=t[r];
	for (;l>=0;l=(l & (l+1))-1)
		res-=t[l];
return res;
}

int main()
{
cin >>n;
int i;
for (i=0;i<n;i++)
{
	inc(i, i);
}

int a, b;

while (cin >>a>>b)
{
	cout <<sum(a,b)<<endl;
}







	return 0;
}

