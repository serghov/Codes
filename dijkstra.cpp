#include <iostream>

using namespace std;

int mass[1000][1000];
int n;
bool used[1000];
int d[1000];
int p[1000];
int s;
int main()
{

cin >>n>>s;
int i;
d[s]=0;
for (i=0;i<n;i++)
{
	for (int j=0;j<n;j++)
		cin >>mass[i][j];
}
int max_i;
for (i=0;i<n;i++)
d[i]=-1;
d[s]=0;
for (i=0;i<n;i++)
{
max_i=-1;
	for (int j=0;j<n;j++)
		if (!used[j] && (max_i==-1 || d[j]>d[max_i]))
		max_i=j;
	used[max_i]=1;
	if (d[max_i]==-1)
		break;
	for (int j=0;j<n;j++)
	{
		if (mass[max_i][j]!=-1)
		{
			if (d[j]==-1 || d[j]>d[max_i]+mass[max_i][j])
			{
				d[j]=d[max_i]+mass[max_i][j];
				p[j]=max_i;
			}
		}
	}
}

for (int i=0;i<n;i++)
{
cout <<d[i]<<endl;
}





	return 0;
}
