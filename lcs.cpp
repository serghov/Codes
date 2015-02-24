#include <iostream>
#include <iostream>

using namespace std;

string str1, str2;
int mass[1000][1000];


int main()
{
cin >>str1>>str2;
int i,j;


for (i=1;i<str1.size();i++)
{
	for (j=1;j<str2.size();j++)
	{
		if (str1[i]==str2[j])
		mass[i][j]=mass[i-1][j-1]+1;
		else
		mass[i][j]=max(mass[i][j-1], mass[i-1][j]);
	}
}

cout <<mass[str1.size()-1][str2.size()-1]<<endl;




	return 0;
}
