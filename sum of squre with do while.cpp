#include<iostream>
 using namespace std;
int main()
{
    int a;
    int sum=0;
 cout<<"enter the number:";
 cin>>a;
    do{
 sum=sum+a*a;
        a--;
        }
    while(a>0);
    cout<<"sum of square"<<" "<<sum;
    return 0;
}

