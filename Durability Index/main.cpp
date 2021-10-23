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
float w1,w2,d;
cout<<"Enter the weight of sample before test = ";
cin>>w1;
cout<<"Enter the weight of sample after test = ";
cin>>w2;
d=(w2/w1)*100;
cout<<"durability index is = "<<d<<endl;
if(d>99)
{
cout<<"Very high durable ";
}
else if(d>98 && d<99)
{
cout<<"High durable ";
}
else if(d>95 && d<98)
{
cout<<"medium high durable ";
}
else if(d>85 && d<95)
{
cout<<"medium durable ";
}
else if(d>75 && d<85)
{
cout<<"Low durable ";
}
else if(d<75 && d>0)
{
cout<<"very low durable ";
}
return 0;
}
