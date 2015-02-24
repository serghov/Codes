#include <iostream>
#include <cmath>
using namespace std;

struct p
{
double x,y,z;
};
struct cone
{
p A, O;
double r;
double getH()
{
return sqrt((A.x-O.x)*(A.x-O.x)+(A.y-O.y)*(A.y-O.y)+(A.z-O.z)*(A.z-O.z));
}
double getV()
{
return getH()*3.14*r*r;
}
};
int main()
{
cone c;

cin >>c.A.x>>c.A.y>>c.A.z>>c.O.x>>c.O.y>>c.O.z;
cin >>c.r;
cout <<c.getH()<<endl;
cout <<c.getV()<<endl;
	return 0;
}

