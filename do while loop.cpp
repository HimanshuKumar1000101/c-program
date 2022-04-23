#include<iostream>
using namespace std;
int main()
 {
     int a,b;
     int fact=1;
     cout<< "enter the number :";
     cin>>b;
    for(a=1;a<=b;a++)
     {
        fact=fact*a;
     }
     cout<< "FACTORIAL"<<" "<<fact;

    return 0;
}
