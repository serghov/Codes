#include <stdio.h>
#include <string>
using namespace std;

string mass[100];
int n;
int main()
{
char text[20];
	while(scanf("%s",&text))
	{
		mass[n++]=text;
	}
	for (int i=0;i<n;i++)
		printf("%[s]\n",mass[i]);
	return 0;
}
