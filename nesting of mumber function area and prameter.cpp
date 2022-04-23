#include<iostream>
using namespace std;
class area
{ int length,breadth;
public:

void input()
{
    cout<<"enter the value of length :";
        cin>>length;
    cout<<"enter the value of breadth :";
        cin>>breadth;
}
 void output(){
    input();
    cout<<"perimater of rectangle is :\n"<<2*(length+breadth)<<endl;
  cout<<" area of rectangle is : \n"<<length*breadth<<endl;
 }
 };
 int main()
 {
     area a;

     a.output();
     return 0;
 }


