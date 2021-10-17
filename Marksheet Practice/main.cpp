#include<iostream>
#include<string.h>
using namespace std;

int main() {
	int rollno, CAM, SP, MR, total;
	float percentage;
	char name[20];

	cout << "Input the Roll Number of the student :";
	cin >> rollno;

	cout << "Input the Name of the Student :";
	cin >> name;

	cout << "Input the marks of Computer Applications in Mining Industry, Surface Planing andMine Rescue: ";
	cin >> CAM >> SP >> MR;

	total = CAM + SP + MR;
	percentage = total/3.0;
	
if(percentage > 50){
        if(percentage > 54){
           cout<<"\na is less than 50";
        }
        if(percentage > 64){
           cout<<"\na is greater than 50";
        }
        if(percentage>79){
        	cout<<"A+"
		}
		
				
											 
				
				
	
	cout << "Roll No : " << rollno <<endl << "Name of Student : " << name <<endl;

	cout << "Marks in Computer Applications in Mining Industry : " << CAM << endl;
	cout << "Marks in Surface Planing : " << SP << endl;
	cout << "Marks in Mine Rescue : " << MR << endl;
	cout << "Total Marks = " << total <<endl;
	cout << "Percentage = " << percentage <<endl;
	


}
