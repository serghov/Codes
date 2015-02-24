#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
freopen("input.txt","r",stdin);
string a,b;
while (getline(cin, a))
{
int i;
	for (i=0;i<a.size();i++)
		if (a[i]=='.')
			break;
	i++;
	for (;i<a.size();i++)
		printf("%c",a[i]);
	printf("\n");
}

	return 0;
}
