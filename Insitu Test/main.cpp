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

float d,m,b,sigmam,sigmad,Z;
cout<<"Enter the dia of specimen ";
cin>>d;
cout<<"Enter the strength of specimen ";
cin>>sigmad;
cout<<"Enter the space of discontinuity in specimen ";
cin>>b;
cout<<"Enter the strength reduction factor ";
cin>>m;
Z= sigmad*((d+b)/(d+(b*m)));
cout<<"The insitu strength of specimen is = "<<Z<<endl;
return 0;
}
