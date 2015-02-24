#include<iostream>
using namespace std;
int mass[200005];
int main()
{
	int n,i,x=1,t=1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		mass[i]=x%10;
		if(x%10==0)
		{
			mass[i-2]=9;
			mass[i-1]=0;
			x=1;
			mass[i]=x;
		}
		x++;
	}
	x=1;
	for(i=2*n-1;i>=n+1;i--)
	{
		mass[i]=x%10;
		if(x%10==1&&t==0)
		{
			mass[i]=2;
			x++;
		}
		if(x%10==1&&t==1)	t=0;
		x++;
	}
	if(n%10==9&&n!=9)	mass[n+n/10-1]=0;
	for(i=1;i<=2*n-1;i++)	cout<<mass[i];
	return 0;
}
