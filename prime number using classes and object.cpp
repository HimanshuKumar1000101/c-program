#include<iostream>
using namespace std;
class pri
{
    int x,y,z;
public:
    void input();
    void output();
    int prime();
};
int pri::prime()
{
int i, z = 0;
for (i = 2; i < x; i++) {
if (x % i == 0) {
 z =1;
break;
    }

    }

}
void pri::input()
{
    cout<<"enter the number :";
    cin>>x;
}
 void pri::output()
 {
     cout<<"prime number : "<<prime();
}
 int main()
 {
     pri p;
     p.input();
     p.output();
     return 0;
 };
