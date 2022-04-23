#include<iostream>
using namespace std;
#define area(a,b)( a*b )
class rectangle
{
int a,b;
public:
    void input()
    {
        cout<<"Enter the length :";
        cin>>a;
        cout<<"Enter the Breath :";
        cin>>b;
    }
    void perimeter()
  {
      cout<<"perimeter of a rectangle is :"<<2*(a+b)<<endl;
  }
  void area_no()
  {
      cout<<"area of a rectangle : "<<area(a,b)<<endl;
  }
};
int main()
{
    rectangle r;
    r.input();
    r.perimeter();
    r.area_no();
    return 0;
}
