#include <iostream>
using namespace std;
int main() {
   int n = 8, fact = 1, i;
   for(i=1; i<=n; i++)
   fact = fact * i;
   cout<<"Factorial of "<<n<<" is "<<fact;
   return 0;
}
