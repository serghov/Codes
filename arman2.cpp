#include <iostream>

using namespace std;

int main()
{
int a,b,c;
cin >>a>>b>>c;
int d;
if (c<a)
{
d=a;
a=c;
c=d;
}
if(b<a)
{
d=b;
b=a;
a=d;
}
if (b>c)
{
d=b;
b=c;
c=d;
}
cout <<a<<b<<c<<endl;


	return 0;
}
