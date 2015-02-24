#include <iostream>
#include <math.h>
using namespace std;

int n;
int sq_n;

int sq()
{
	if (sqrt(n+0.0)-int(sqrt(n+0.0))!=0)
	{
		return int(sqrt(n+0.0))+1;
	}
	return sqrt(n+0.0);
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
cin >>n;

sq_n=sq();
int i;
int k=0;

int num=sq_n*(sq_n+1)*2;

for (i=sq_n-1;i>=0;i--)
{
		for (int j=sq_n-1;j>=0;j--)
		{
			
			if (sq_n*sq_n-k==n)
			{
				cout <<num<<endl;
				return 0;
			}
			k++;
			
				num-=2;
		
				
		}
		num--;
}
cout <<num<<endl;

	return 0;
}

