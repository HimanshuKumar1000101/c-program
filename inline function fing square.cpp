#include<iostream>
using namespace std;
class square
{
int x;
public:
void input()
{
cout<<"Enter any values: ";
cin>>x;
}
void square_no()
{
    cout<<"square of the number : "<<x*x<<endl;
}
 void cube();
};
inline void square::cube()
{
cout<<"cube of the values: "<<x*x*x<<endl;
}
int main()
{
square s;
s.input();
s.square_no();
s.cube();
return 0;
}

