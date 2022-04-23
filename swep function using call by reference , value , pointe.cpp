#include <iostream>
using namespace std;
void swap_by_value(int x, int y)
{
int temp = x;
x = y;
y = temp;
x+=100; y+=100;
}
void swap_by_reference(int &x, int &y)
{
    int temp = x;
x = y;
y = temp;
x+=100; y+=100;
}
void swap_by_pointer(int *x, int *y)
{
    int temp =*x;
*x = *y;
*y = temp;
*x+=100; *y+=100;
}
int main()
{int a,b;
cout<<"Enter two numbers :";
cin>>a>>b;
cout<<"Before swap() function call: "<<a<<" "<<b;
swap_by_value(a,b);
cout<<"\nAfter swap() call by value function call: "<<a<<" "<<b;

swap_by_reference(a,b);
cout<<"\nAfter swap() call by reference function call: "<<a<<" "<<b;

swap_by_pointer(&a,&b);
cout<<"\nAfter swap() call by address function call: "<<a<<" "<<b;

return 0;
}
