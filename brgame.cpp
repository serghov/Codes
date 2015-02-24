#include <iostream>
#include <string>
using namespace std;

struct str
{
string sstr;
bool checked;
int lenght;
str()
{
checked=0;
lenght=1;
}
	void read()
	{
		cin >>sstr;
		lenght=sstr.size();
	}
};
bool operator+(str a, str b)
{
	return a.sstr[a.sstr.size()-1]==b.sstr[0];
}
bool operator<(int a, str b)
{
return a<b.lenght;
}

int n;
str mass[10000];


int main()
{
cin >>n;
int i;
for (i=0;i<n;i++)
{
	mass[i].read();
}

for (i=0;i<=n;i++)
{
	for (int j=0;j<i;j++)
	{
		if (i!=j && mass[i]+mass[j]==1)
		{
			mass[i].lenght+=mass[j].lenght;
		}
	}
}
int mmax=0;
for (i=0;i<n;i++)
{
	if (mmax<mass[i])
	{
		mmax=mass[i].lenght;
	}
}
cout <<mmax<<endl;
	return 0;
}
