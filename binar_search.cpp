#include <iostream>

using namespace std;

int n;
int k;
int mass[1000];

int bs()
{
int s=0,e=n-1,c;
	while (s<e)
	{
	c=(s+e)/2;
	        if(k==mass[c])
	        return c;
	        if (k<mass[c])
	        e=c;
	        else
	        s=c+1;
	}
return -1;
}

int main()
{
cin >>n>>k;
int i;
for (i=0;i<n;i++)
cin >>mass[i];
cout <<bs()<<endl;





	return 0;
}
