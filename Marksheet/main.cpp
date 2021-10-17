#include<iostream>
#include<string.h>
using namespace std;

int main() {
	int rollno, CAM, SP, MR, total;
	float percentage;
	char name[20], grd[10];

	cout << "Input the Roll Number of the student :";
	cin >> rollno;

	cout << "Input the Name of the Student :";
	cin >> name;

	cout << "Input the marks of Computer Applications in Mining Industry, Surface Planing andMine Rescue: ";
	cin >> CAM >> SP >> MR;

	total = CAM + SP + MR;
	percentage = total/3.0;

	if (percentage >= 60)
		strcpy(grd, "A");

	else if (percentage < 60 && percentage >= 48)
		strcpy(grd,"B");

	else if (percentage <48 && percentage >= 36)
		strcpy(grd, "C");

	else
		strcpy(grd, "F");

	cout << "Roll No : " << rollno <<endl << "Name of Student : " << name <<endl;

	cout << "Marks in Computer Applications in Mining Industry : " << CAM << endl;
	cout << "Marks in Surface Planing : " << SP << endl;
	cout << "Marks in Mine Rescue : " << MR << endl;
	cout << "Total Marks = " << total <<endl;
	cout << "Percentage = " << percentage <<endl;
	cout << "Grd = " << grd <<endl;


}
