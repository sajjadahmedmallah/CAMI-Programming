#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
double ab(double g, double h);
int main()
{
	double a,gama,h;
gama=2.5;
h=2;
a=ab(gama,h);
cout<<"use the value of a in other equations";
cout<<a;
}
double ab(double g, double h)
{
double b;
b= 0.15*g*h*h;
return b;
	
}
