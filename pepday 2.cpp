#include<iostream>
using namespace std;
class A{public:
    A(int x)
    {

    x=8;
    cout<<x;
    }
    };
    class B :public A{
public:
    B(int y):A(10)
    {

        cout<<y;

    }
    };
    int main()
    {
        B b(7);
        return 0;
    }

