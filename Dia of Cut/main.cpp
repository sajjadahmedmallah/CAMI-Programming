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

float l,d,k,dc,h,alpha,a,st,qt,gamma,sigma,sigmasf;
cout<<"Enter the length of cap ";
cin>>l;
cout<<"Enter the distance between dets ";
cin>>a;
cout<<"Enter the condition of loading ";
cin>>alpha;
cout<<"Enter the bulking modules ";
cin>>k;
cout<<"Enter the dia of cap ";
cin>>d;
cout<<"Enter the allowable bending stress ";
cin>>sigmasf;
cout<<"Enter the unit weight of rock ";
cin>>gamma;
h=alpha*l;
cout<<"h= "<<h<<endl;
st=gamma*h;
cout<<"st is "<<st<<endl;
qt=st*a;
cout<<"qt is "<<qt<<endl;
dc=pow(k*((0.5*qt*l*d)/((5.5)*sigmasf)),0.3333);
cout<<"The dia of cut is = "<<dc<<endl;
return 0;
}
