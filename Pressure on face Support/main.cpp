#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
float p,him,gamma,d1,d2,pt,m,k,alpha;
cout<<"unit weight of rock =";
cin>>gamma;
cout<<"distance between two rocks =";
cin>>d1;
cout<<"distance between probs =";
cin>>d2;
cout<<"inclination of seam = ";
cin>>alpha;
cout<<"setting pressure = ";
cin>>pt;
cout<<"mining height = ";
cin>>m;
cout<<"bulk factor = ";
cin>>k;
him=(m)/(k-1);
cout<<"him = "<<him<<endl;
p=((him*gamma*d1*d2*cos(alpha))+pt);
cout<<"pressure at coal face = "<<p;
return 0;
}
