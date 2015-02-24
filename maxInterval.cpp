#include <stdio.h>
#include <iostream>
using namespace std;

int mass[1000];
int n;

int main()
{
int i;
cin >>n;
for (i=0;i<n;i++)
{
	cin >>mass[i];
	mass[i]=-mass[i];
}

int mmax=mass[0];
int c=0;
for (i=0;i<n;i++)
{
	if (c+mass[i]<0)
		c=0;
	else
		c+=mass[i];
	if (c>mmax)
		mmax=c;
}
cout <<-mmax<<endl;



	return 0;
}
