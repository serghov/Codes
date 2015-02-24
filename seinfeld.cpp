#include <iostream>
#include <string>
using namespace std;

int main()
{

string current;
int j=1;
while (cin >>current)
{
if (current[0]=='-')
return 0;

int n=0;
int k=0;
for (int i=0;i<current.size();i++)
{
	if (current[i]=='{')
	n++;
	else
	{
	if (n==0)
	{
		n++;
		k++;
	}
	else
	n--;
	
	}
}
cout <<j<<". "<<k+n/2<<endl;
j++;
}
	return 0;
}
