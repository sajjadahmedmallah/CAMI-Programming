#include <iostream>
#include <math.h>
using namespace std;

    int main()
    {
    	float Is,P,D, sigmac,Dsquare;
		cout << "\n\n Sajjad Ahmed Mallah 17MN05 :\n";
		cout << "----------------------------------------------------------\n";		
        cout<<" Enter the value of Load(MN) : ";
    	cin>>P;
    	cout<<" Enter the value Core Diamter : ";
    	cin>>D;
    	Dsquare=D*D;
    	Is=P/Dsquare;
		cout<<"Is="<<Is<<endl;
		
		sigmac = 24*Is;
		cout<<" Uniaxial Compressive Strength : "<< sigmac << endl;
        cout << endl;
        return 0;
    }
