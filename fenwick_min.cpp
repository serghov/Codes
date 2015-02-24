#include <iostream>

using namespace std;

int mass[1000];
int n;
int t[1000];

void inc(int i, int d)
{
	for (;i<n;i=(i|(i+1)))
		if (mass[i]<d)
		t[i]=d;
		else
		t[i]=mass[i];
}

int min(int l, int r)
{
int res=100000;
l--;
	for (;l<r;l=(l&(l+1)))
	if (res>mass[l])
	res=mass[l];
return res;
}



int main()
{
cin >>n;
int i;
for (i=0;i<n;i++)
{
	cin >>mass[i];
	inc(i, mass[i]);
}

int a, b;

while (cin >>a>>b)
{
	cout <<min(a,b)<<endl;
}







	return 0;
}

