#include<iostream>
using namespace std;
int main()
{
		cout<<""<<endl<<endl;
	cout<<"Sajjad Ahmed Mallah"<<endl;
	cout<<"+++++++++++++++++++"<<endl;
	cout<<"*******************"<<endl;
	cout<<"__________________________"<<endl;
	
	
	
    int num, s, m, saj;
    cout<<"-----------Table from 2 to 10--------\n\n";
    for(s=1; s<=10; s++)
    {
        num = s;
        cout<<"Table of "<<num<<": ";
        for(m=1; m<=10; m++)
        {
            saj = num*m;
            cout<<saj<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
