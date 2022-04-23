#include<iostream>
using namespace std;
int main()
{
int i,a,b;
float t=0;
int count=0;
cout<<"enter the count\n";
cin>>a;
for(i=0;i<a;i++){
        cout<<"enter the number";
        cin>>b;
        if(b>=0){
            t=t+b;
            count++;
        }
        }
cout<< "average = "<<t/count<<" "<<endl;
cout<<"sum of numbers = "<<t<<"";
return 0;
}
