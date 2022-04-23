#include <iostream>
using namespace std;
int swap(int x, int y)
{
int temp = x;
x = y;
y = temp;
}
int main()
{
int a = 30, b=20;
cout<<"Before swap() function call: "<<a<<" "<<b;
swap(a, b);
cout<<"\nAfter swap() function call: "<<a<<" "<<b;
return 0;
}
