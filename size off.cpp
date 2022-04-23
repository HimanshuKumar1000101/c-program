/*#include<iostream>
using namespace std;
int main()
{ int a,b,c;
cout<<"enter the three numbers \n";
cin>>a>>b>>c;
cout<<endl;
if(a>b)
{
    if(a>c){
        cout<<"grater  "<<a;
    }
}
else if(b>c){
    cout<<"grater  "<<b;
}
else{
    cout<<"grater  "<<c;
}
return 0;


}
*//*
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the number"<<endl;
    cin>>a;


    if(a%2==0){
        cout<<"even "<<a;
    }
    else{
        cout<<"odd"<<a;
    }
}
*/
/*#include<iostream>
using namespace std;
int main()
{
    int a;
    int sum=0;
    cout<<"how many times the number we have to triverse";
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        sum=sum+a;
    }
    cout<<sum;



}

#include<iostream>
using namespace std;
int main()
{ int a=100;
    for(int i=1;i<=a;i++)
    {
        if(i%3==0)
        {
            continue;
        }
         cout<<i<<endl;
    }

    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int a,i,b;
    cout<<"enter the number"<<endl;
    cin>>a>>b;
    for(int num=a;num<=b;num++){
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
           // {cout<<"non prime number";}
        break;
    }
    if(num==i){
    cout<<num<<"  prime" <<endl; }}
    return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the number: "<<endl;
    cin>>a;
    switch(a)
    {
        case 1 : cout<<"hello"<<endl;
        break;
        case 2 : cout<<"HELLO"<<endl;
                break;
        case 3 : cout<<"HIMANSHU"<<endl;
                break;
        case 4 : cout<<"KUMAR"<<endl;
                break;
        case 5 : cout<<"NARAYAN"<<endl;
                break;
                default : cout<<"i am still learning "<<endl;
    }



    return 0;
}
