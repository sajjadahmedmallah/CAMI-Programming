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

float t1,l,l1,m1;
cout<<"Enter the true length of chain "<<endl;
cin>>t1;
cout<<"Enter the length of line "<<endl;
cin>>l;
cout<<"Enter the measured length "<<endl;
cin>>m1;
l1 = (t1*l)/(m1);
cout<<"The actual length of chain is "<<l1<<endl;
return 0;
}
