#include <iostream>

using namespace std;
int n;
int mass[1000];
int main()
{
freopen("01.in", "r", stdin);
freopen("01.out", "w", stdout);
cin >>n;
if (n==0)
{
cout <<0<<endl;
return 0;
}
n+=3;
int i;
mass[0]=0;
mass[1]=1;
for (i=2;i<n;i++)
{
mass[i]=mass[i-1]+mass[i-2];
}
cout <<mass[n-1]<<endl;


	return 0;
}
