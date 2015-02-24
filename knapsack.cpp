#include <iostream>

using namespace std;

int t[1000][1000];
int v[1000];
int w[1000];
int n;
int mmax_w;

int main()
{
cin >>n;
int i,j;
for (i=0;i<n;i++)
cin >>v[i]>>w[i];
cin >>mmax_w;


for (i=1;i<=n;i++)
{
	for(j=0;j<=mmax_w;j++)
	{
		if (j >= w[i])
		t[i][j]= max(t[i-1][j], t[i-1][j-w[i]]+v[i]);
		else
		t[i][j] = t[i-1][j];
	}
}
cout <<t[n][mmax_w]<<endl;








	return 0;
}
