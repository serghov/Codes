#include <algorithm>
#include <string>
#include <iostream>
using namespace std;
string mass[100];
int main()
{
int i;
for (i=0;i<10;i++)
cin >>mass[i];
sort(mass,mass+10);
for (i=0;i<10;i++)
cout <<mass[i]<<endl;

}
