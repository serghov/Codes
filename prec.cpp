#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;


char mass[100];
int k;
int main()
{
int n=4;
//freopen("num.txt", "w", stdout);
int i;
	for (i=0;i<n-1;i++)
	mass[i]=i+'a';
	mass[3]='c';
	do
	{
	printf("%d ", k);
	for (int i=0;i<n;i++)
	printf("%c", mass[i]);
	if (k%1==0)
	printf("\n");
	else
	printf("\t");
	k++;
	}
	while (next_permutation(mass,mass+n));






	return 0;
}
