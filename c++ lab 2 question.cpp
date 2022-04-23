#include <iostream>
using namespace std;

int hcf(int a1, int a2);

int main()
{
   int a1, a2;
// taking input from user
   cout << "Enter two positive integers: ";
   cin >> a1 >> a2;
// after the completing the logic of the code than give the output.
   cout << "Greatest Common Divisor :" << a1 << " & " <<  a2 << " is: " << hcf(a1, a2);

   return 0;
}
int hcf(int a1, int a2)
{ //here the logic of the code using If else statement
    if (a2 != 0)
       return hcf(a2, a1 % a2);
    else
       return a1;
}
