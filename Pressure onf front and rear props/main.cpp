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
	
	
	
	
float R1,R2,W ,w ,r1,r2,him,l,b,k,m,phi,gamma;
cout<<"Pressure on Front and Rear Props"<<endl;
cout<<"Horizontal distance from the face to the front props = "<<endl;
cin>>r1;
cout<<"Horizontal distance from the face to the rear props = "<<endl;
cin>>r2;
cout<<"Length of the rock mass of the two props = "<<endl;
cin>>l;
cout<<"Horizontal distance between two sets of props = "<<endl;

cin>>b;
cout<<"Inclination angle = "<<endl;
cin>>phi;
cout<<"Bulk factor = "<<endl;
cin>>k;
cout<<"Unit weight of rock mass = "<<endl;
cin>>gamma;
cout<<"Mining height = "<<endl;
cin>>m;
him=(m/(k-1));
w=(((him*tan(phi))+1)/2);
cout<<"horizontal distance from the face line to the center of the rock mass= w = "<<w<<endl;
W =1*him*b*gamma;
cout<<"weight of the rock mass supported by the two props= W ="<<W<<endl;
R1=W *((r2-w)/(r2-r1));
cout<<"Reaction force by the front prob = R1 = "<<R1<<endl;
R2=W*((w-r1)/(r2-r1));
cout<<"Reaction force by the rear prob = R2 = "<<R2<<endl;
return 0;
}
