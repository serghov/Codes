#include <iostream>
#include <string>
using namespace std;
string str;

int mass[1000];

int main()
{
cin >>str;
int i,j;
for (i=1;i<str.size();i++)
{
	j=mass[i-1];
	while (j>0 && str[j]!=str[i])
	{
		j=mass[j-1];
	}
	if (str[i]==str[j])
	j++;
	mass[i]=j;
}

for (i=0;i<str.size();i++)
{
cout <<mass[i]<<endl;
}




	return 0;
}
