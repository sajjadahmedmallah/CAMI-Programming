#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	cout<<"-------------"<<endl<<endl;
	
	cout<<"Sajjad Ahmed"<<endl<<endl;
	
	cout<<"Roll No# 17MN05"<<endl<<endl;
	
	cout<<"-------------"<<endl<<endl;
float a,r,f,pt,l,sigma,gamma;
char ch;
cout<<"Space between two sets = ";
cin>>a;
cout<<"compressive strength of wood = ";
cin>>sigma;
cout<<"length of set = ";
cin>>l;
cout<<"unit weight of rocks = ";
cin>>gamma;
f=sigma/100;
cout<<"co-efficient f = "<<f<<endl;
pt=((4/3)*(0.25*a*gamma))/(f);
cout<<"pressure on wooden sets = "<<pt<<endl;
}



