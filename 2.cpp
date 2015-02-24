#include <iostream>
using namespace std;
int mass[1000];
int mass1[1000];
int k;
int n;
int main()
{
int i;
int p=1;
cin >>n;
for (i=0;i<n;i++)
cin >>mass[i];
for (i=0;i<n;i++)
if (mass[i]<=86 && mass[i]%2!=0)
mass1[k++]=mass[i];
for (i=0;i<k;i++)
cout <<mass1[i]<<endl;
return 0;
}
