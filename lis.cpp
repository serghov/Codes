#include <stdio.h>
#include <set>
using namespace std;
int n;
int mass[1000];

int main()
{
	scanf("%d",&n);
	int i;
	for (i=0;i<n;i++)
		scanf("%d",&mass[i]);

	set<int> v;
	set<int>::iterator it;
	for (i=0;i<n;i++)
	{
		v.insert(mass[i]);
		it=v.find(mass[i]);
		it++;
		if (it!=v.end())
			v.erase(it);
	}
	printf("%d\n",v.size());
	while(!v.empty())
	{
		printf("%d ",*v.begin());
		v.erase(v.begin());
	}
	printf("\n");









	return 0;
}
