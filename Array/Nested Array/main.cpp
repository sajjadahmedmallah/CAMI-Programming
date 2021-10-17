#include <iostream>
using namespace std;
 
int main()
{
	cout<<"___________________"<<endl;
	cout<<""<<endl;
	cout<<"Sajjad Ahmed Mallah"<<endl;
	cout<<"___________________"<<endl;
    int arr[100];
    int size, i, j, mallah;
 
    cout<<"Enter size of array: ";
    cin>>size;
 
    cout<<"Enter elements in array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            
            if(arr[j] < arr[i])
            {
                mallah = arr[i];
                arr[i] = arr[j];
                arr[j] = mallah;
            }
        }
    }
    //Printing the sorted array in ascending order
    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<endl;
    }
 
    return 0;
}
