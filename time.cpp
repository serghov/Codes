#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
freopen("input.txt","w",stdout);
freopen("input.txt","r",stdin);

int i;
for (i=0;i<20000000;i++)
cout <<i<<endl;
//printf("%d\n",i);
int a;
for (i=0;i<20000000;i++)
cin >>a;
//scanf("%d",&a);

	return 0;
}
