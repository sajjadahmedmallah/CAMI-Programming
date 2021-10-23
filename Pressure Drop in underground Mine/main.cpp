#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
	cout<<"*******************"<<endl<<endl;
	cout<<"Sajjad Ahmed Mallah"<<endl<<endl;
	cout<<"Roll No# 17MN05"<<endl<<endl;
	cout<<"*******************"<<endl<<endl;

float p,k,c,l,q,w,a;
cout<<"Enter the friction factor "<<endl;
cin>>k;
cout<<"Enter the perimeter "<<endl;
cin>>c;
cout<<"Enter the Distance "<<endl;
cin>>a;
cout<<"Enter the length of rock tunnel "<<endl;
cin>>l;
cout<<"Enter the quantity of air "<<endl;
cin>>q;
cout<<"Enter the density of air "<<endl;
cin>>w;
p = ((k*c*l*pow(q,2))/pow(a,3))*(w/1.2);
cout<<"The pressure drop in U/G Tunnel is = "<<p<<endl;
return 0;
}
