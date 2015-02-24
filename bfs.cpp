#include <iostream>
#include <vector>

using namespace std;

vector < vector<int> > mass;
int n;
int s;
queu<int> q;
int main()
{
cin >>n>>s;
vector <bool> used(n);
vector <int> d(n), p(n);
used[s]==1;

int i;
for (i=0;i<n;i++)
{
	int m;
	int tmp;
	cin >>m;
	for (int j=0;j<m;j++)
	{
		cin >>tmp
		cin >>mass[i].push()
	}
}
while (!q.empty())
{
	int v=q.front();
	q.pop();
	for (i=0;i<mass[v].size();i++)
	{
		int to=mass[v][i];
		if (!used[to])
		{
		used[to]=1;
		q.push[to];
		d[to]=d[v]+mass[v][to];
		p[to]=v;
		}
	}
}




	return 0;
}

