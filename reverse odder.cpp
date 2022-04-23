#include<iostream>
 using namespace std;
int main()
{

      int rev=0,a,rem;
        cout<<"enter the number";
          cin>>a;

      while(a!=0)
      {
        rem=a%10;
        rev=(rev*10)+rem;
        a=a/10;

    }
    cout<<"the reverse is"<<" "<<rev;
    return 0;
}
