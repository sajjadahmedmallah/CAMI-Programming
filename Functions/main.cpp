#include <iostream>

using namespace std;

int main()
{
	cout<<"Sajjad Ahmed"<<endl;
	
	cout<<"17MN05"<<endl;
	
	int higher(int x, int y,int z,int w);

	int first = 0, second = 0,third=0,fourth=0, largest = 0;

	cout << "Please enter the first value: " << endl;
	cin >> first;

	cout << "Please enter the second value: " << endl;
	cin >> second;
	
	
	cout << "Please enter the third value: " << endl;
	cin >> third;
	
	cout << "Please enter the fourth value: " << endl;
	cin >> fourth;
	
	largest = higher(first, second,third,fourth);
	cout << "The highest value is" << largest << endl;


	return 0;
}

int higher(int x, int y,int z,int w)
{
	if (x > y && x > w && x > z)
	{
		return x;
	}
	else if (y > w && y > x && y > z)
	{
		return y;
	}
	else if (w > x && w > y && w > z)
	{
		return w;
	}
	else
	{
		return z;
	}
}
