#include <iostream>
#include <math.h>
using namespace std;

    int main()
    {
    	float d, qt, Alpha, L, h, w, a, st, sigma,gamma,sigmasf;
		cout << "\n\n Sajjad Ahmed Mallah 17MN05 :\n";
		cout << "----------------------------------------------------------\n";		
        cout<<" Enter the value of Alpha : ";
    	cin>>Alpha;
        cout<<" Enter the value of unit weight of rock : ";
    	cin>>gamma;
        cout<<" Enter the value of bending stress : ";
    	cin>>sigmasf;
		cout<<" Enter the value of width of gallery : ";
    	cin>>L;
		cout<<" Enter the value of interval between two sets : ";
    	cin>>a;
		h=Alpha*L;
		cout<<"h="<<h<<endl;
		st=gamma*h;
		cout<<"st="<<st<<endl;
		qt=st*a;
		cout<<"qt="<<qt<<endl;
		d = pow(1.28*qt*L*L/sigmasf*sigmasf,0.3333);
		cout<<" Diameter of wooden cap : "<< d << endl;
        cout << endl;
        return 0;
    }
