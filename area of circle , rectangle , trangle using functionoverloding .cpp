#include<iostream>
using namespace std;
class area{
 float length,breath;
 float radius;
 float base,height;
public:
void circumfrerence()
 {
 cout<<"enter the radius :"<<endl;
 cin>>radius;
    cout<<" area circle is :\n"<<2*3.14*radius<<endl;
}
  void rectangle()
 {
  cout<<"enter the length and breath :"<<endl;
  cin>>length>>breath;
    cout<<" area  rectangle is :\n"<<length*breath<<endl;
}
  void trangle()
 {
  cout<<"enter the base and height :"<<endl;
  cin>>base>>height;
    cout<<" area trangle is :\n"<<base*height/2<<endl;
}
};
 int main()
 { int a;
 area b;

 cout<< " 1 circle :"<<endl;
   cout<< " 2 rectangle :"<<endl;
   cout<< " 3 trangle :"<<endl;
   cout<<"chose the operation :"<<endl;
   cin>>a;

   switch(a)
   {
   case 1: b.circumfrerence();
   break;
   case 2: b.rectangle();
   break;
   case 3: b.trangle();

   }
     return 0;
 }
