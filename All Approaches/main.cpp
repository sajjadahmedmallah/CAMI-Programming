//The strength of coal pillar using different approaches
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c,d,s1,w,h;
int in;
cout<<" 	  Sajjad Ahmed Mallah		   "<<endl<<endl<<endl<<endl;
cout<<"  1 for Bieniawiski approach "<<endl;
cout<<"  2 for Obert-dwell approach "<<endl;
cout<<"  3 for Solomon-munro approach" <<endl;
cout<<"  4 for Holland-gaddy approach "<<endl<<endl;
cin>>in;
switch (in)
{
case 1:
cout<<" Bieniawiski approach"<<endl<<endl;
cout<< "UCS of pillar = " ;
cin>>s1;
cout<<"width of pillar = ";
cin>>w;
cout<<"height of pillar = ";
cin>>h;
a = s1*(0.64+0.36*(w/h));
cout<<" Strength of pillar ; "<<a;
break;
case 2:
cout<<" Obert-dwell approach"<<endl<<endl;
cout<< "UCS of pillar = "<<endl;
cin>>s1;
cout<<"width of pillar = "<<endl;
cin>>w;
cout<<"height of pillar = "<<endl;
cin>>h;
b = s1*(0.778+0.222*(w/h));
cout<<" Strength of pillar ; "<<b;
break;
case 3:
cout<<" Solomon-munro approach"<<endl<<endl;
cout<<"width of pillar = "<<endl;
cin>>w;
cout<<"height of pillar = "<<endl;
cin>>h;
c = 7.2*pow(w,0.46)/pow(h,0.66);
cout<<" Strength of pillar ; "<<c;
break;
case 4:
cout<<" Holland-gaddy approach approach"<<endl<<endl;
cout<< "UCS of pillar = "<<endl;
cin>>s1;
cout<<"width of pillar = "<<endl;
cin>>w;
cout<<"height of pillar = "<<endl;
cin>>h;
d = s1*sqrt(w/h);
cout<<" Strength of pillar ; "<<d;
break;
default:
cout<<"Aap ne Ghalt Value Put ki he";
}
return 0;
}
