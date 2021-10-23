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

float k1,k2,k3,sigma,l;
cout<<"strength index of silt stone = ";
cin>>k1;
cout<<"fatigue coefficient = ";
cin>>k2;
cout<<"water content coefficient = ";
cin>>k3;
cout<<"The UCS = ";
cin>>sigma;
l= 0.0064*pow(sigma,1.7)*k1*k2*k3;
cout<<"roofindex of silt stone = "<<l<<endl;
return 0;
}
