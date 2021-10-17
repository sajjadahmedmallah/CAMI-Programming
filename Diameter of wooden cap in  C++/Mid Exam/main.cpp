#include <iostream>
#include <math.h>
using namespace std;

    int main()
    {
    	float d, qt, Alpha, L, h, w, a, st, sigma,gamma,sigmasf;
		cout << "\n\n Sajjad Ahmed Mallah 17MN05 :\n";
		cout << "----------------------------------------------------------\n";		
        cout<<" Alpha is = 0.5 : "<<endl;
        cout<<" Width of Gallery is = 1.75 : "<<endl;
        cout<<" Unit weight of Rock(Gamma) is = 2.6 : "<<endl;
        cout<<" Sigmasf is = 110 : "<<endl;
        sigmasf=110;
        Alpha=0.5;
        L=1.75;
        h=Alpha*L;
        gamma=2.6;
        st=gamma*h;
        a=2-0.25;
        cout<<" Value of Interval b/w two sets(Reduced) is = : "<<a<<endl;
        qt=st*a;
		d = pow(1.28*qt*L*L/sigmasf*sigmasf,0.3333);
		cout<<" Diameter of wooden cap : "<< d << endl;
        cout << endl;
        return 0;
    }
