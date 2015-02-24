#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string str;
string s;
int mass[1000];
int var[1000];
void init()
{
int i;
        for (i=0;i<str.size();i++)
        {
        mass[i]=1;
        }
}
int fact(int k)
{
int ans=1;
for (int i=1;i<=k;i++)
ans*=i;
return ans;
}
int num(string str)
{
init();
int ans=0;
int i;
int k=0;
for (i=0;i<str.size();i++)
{
k=0;

	for (int j=0;j<var[str[i]];j++)
	{
		k+=mass[j];
	}

mass[var[str[i]]]=0;
ans+=k*fact(str.size()-i-1);
}
return ans;
}

int main()
{

cin >>s;

int m[100];
int i;

for (i=0;i<s.size();i++)
m[i]=s[i];

sort(m,m+s.size());

for(i=0;i<s.size();i++)
str+=m[i];

for (i=0;i<str.size();i++)
var[str[i]]=i;

cout <<num(s)<<endl;







	return 0;
}
