#include <iostream>
using namespace std;

int main() {
    double numbers[10];
	int index;
    
    double largestNumber, sum, average,maxIndex;
    

    cout << "Enter 10 numbers: " << endl;

    for (int i = 0; i < 10; ++i) {
        cin >> numbers[i];
    }

    cout << "The numbers are: ";


    for (int n = 0; n < 10; ++n) {
        cout << numbers[n] << "  ";
    }
	
	return 0;
}
