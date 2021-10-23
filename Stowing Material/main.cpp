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

float pl,k,p,gamma,gamma1;
cout<<"Enter the stowing coefficient "<<endl<<endl;
cin>>k;
cout<<"Enter the density of stowing material"<<endl<<endl;
cin>>gamma1;
cout<<"Enter the weight of excavated ore "<<endl<<endl;
cin>>p;
cout<<"Enter the density of excavated ore "<<endl<<endl;
cin>>gamma;
pl = (k*p*gamma1)/(gamma);
cout<<"The weight of stowing material is "<<pl<<endl;
return 0;
}
