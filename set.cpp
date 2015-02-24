#include <stdio.h>
#include <set>
#include <queue>
using namespace std;

int n;
priority_queue<int> mass;

int main()
{
scanf("%d",&n);
int i;
int t;
for (i=0;i<n;i++)
{
	scanf("%d",&t);
	mass.push(t);
}
for (i=0;i<n;i++)
{
printf("%d\n",mass.top());
mass.pop();
}
	return 0;
}
