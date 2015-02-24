#include <iostream>
#include <string>
using namespace std;
int mass[1000];
int main()
{
string str;
cin >>str;
int i;
int j=0;
for (i=1;i<str.size();i++)
{
	j=mass[i-1];
	while (j>0 && str[j]!=str[i])
	{
		j=mass[j-1];
	}
	if (str[j]==str[i])
	j++;
	mass[i]=j;
}
for (i=0;i<str.size();i++)
cout <<mass[i]<<endl;








	return 0;
}
