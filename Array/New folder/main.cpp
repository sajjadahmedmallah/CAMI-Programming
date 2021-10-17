#include<iostream>
#include <stdio.h>

using namespace std;
int main()
{
	cout<<"-------------------"<<endl;
	cout<<"Sajjad Ahmed Mallah"<<endl;
	cout<<"-------------------"<<endl;
     int a[10],i,s=0,g;
     float avg;
     printf("Enter 10 Numbers:\n");
     for(i=0;i<10;i++)
     {
          scanf("%d",&a[i]);
          s=s+a[i];
          avg=s/10.0;
     }
     printf("Sum of Numbers = %d\n",s);
     printf("Average of Numbers   = %.2f\n",avg);
     g=a[0];
     for(i=0;i<10;i++)
          if(a[i]>g)
               g=a[i];
     printf(" Largest Number      = %d\n",g);         
     return 0;
}
