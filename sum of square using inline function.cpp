#include<iostream>
using namespace std;
class square
{
int x;
public:
    void input()
    {
        cout<<"Enter the value :";
        cin>>x;
    }
    void sum_of_square()
    { int sum=0;
      int i;
        for( i=1;i<(x*2);i+=2)
            {
                sum=sum+(i*i);
            }
         cout<<"sum of square :"<<sum<<endl;
    }
};
int main()
{
    square s;
    s.input();
    s.sum_of_square();
    return 0;
}
