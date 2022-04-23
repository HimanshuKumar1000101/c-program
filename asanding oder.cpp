
#include<iostream>
using namespace std;
 int main()
 {
     int a,b,c;
     cout<< "enter the three number :";
     cin>>a>>b>>c;
     if((a<b)&&(a<c))
        cout<<"smaller number:"<<a;
     if((b<a)&&(b<c))
        cout<<"smaller number:"<<b;
      else
     cout<<"smaller number:"<<c;
     return 0;

}

