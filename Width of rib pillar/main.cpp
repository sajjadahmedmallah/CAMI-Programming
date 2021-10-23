#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	cout<<"*******************"<<endl<<endl;
	cout<<"Sajjad Ahmed Mallah"<<endl<<endl;
	cout<<"Roll No# 17MN05"<<endl<<endl;
	cout<<"*******************"<<endl<<endl;

float xb,ps,pi,c,co,p,h,m,b,ab,aw,gamma,speak,temp,w;
cout<<"unit weight of roof rock";
cin>>gamma;
cout<<"depth below surface ";
cin>>h;
cout<<" mining height";
cin>>m;
cout<<"triaxial factor ";
cin>>b;
cout<<"compressive strength ";
cin>>co;
cout<<"support pressure ";
cin>>pi;
ps= pi+0.1;
temp= (1)/(b-1);
xb= ((m/2)*pow((p/pi),temp)-1);
aw= 0.15*gamma*h*h;
p= gamma*h;
temp = (b)/(b-1);
ab=((m/2)*ps*pow((p/pi),temp)-1);
speak = co+b*p;
c=(aw+p*xb-ab)/(speak-p);
w=2*(xb+c);
cout<<"with of rib pillar = "<<w<<endl;
}
