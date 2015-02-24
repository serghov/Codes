#include <iostream>

#include <stdlib.h>
#include <time.h>


using namespace std;
int main()
{
	srand(time(0));
	int n,k;
	int mass[1000];
	int rmass[1000];
	cin >>n;
	for (int i=0;i<n;i++)
		cin >>mass[i];
	while(n)
	{
		int tmp=rand()%(n--);
		rmass[k++]=mass[tmp];
		mass[tmp]=mass[n];
	}
	for (int i=0;i<k;i++)
		cout <<rmass[i]<<" ";
	cout <<endl;

return 0;
}
