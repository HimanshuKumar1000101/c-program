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

#include<iostream>
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
}/*
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

#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the number "<<endl;
    cin>>x;
    if(x%2==0&&x%3==0)
    {
        cout<<"the number is deviceable by both";
    }
    else if(x%2==0){
         cout<<"the number is deviceable by 2";
    }
     else if(x%3==0){
         cout<<"the number is deviceable by 3";
    }
    else{cout<<"not devisiable by both";}
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int rows,cols;
    cout<<"enter the number of rows"<<endl;
    cin>>rows;
    cout<<"enter the number of cols"<<endl;
    cin>>cols;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=cols;j++){
            if(i==1 || i==rows)
        {
            cout<<"*";
        }
        else if(j==1 || j==cols)
        {
            cout<<"*";
        }
        else{ cout<<" ";}
           }
            cout<<endl;
    }


}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the n"<<endl;
    cin>>n;
    for(int i=n;i>=1;i--)
        {
        for( int j=1;j<=i;j++){
        cout<<"*";}
    cout<<endl;
        }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
        {
        for( int j=1;j<=n;j++)
        {
      if(j<=n-i)
        {
        cout<<" ";
        }
        else{
        cout<<"*";
        }
        }
        cout<<endl;
        }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the n "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
       cout<<endl;
    }
}

#include<iostream>>
using namespace std;
int main()
{
    int x;
    int count=1;
    cout<<"enter the n : "<<endl;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<count++;
        }
        cout<<endl;
    }
}

#include<iostream>>
using namespace std;
int main()
{
    int x;
    int count=1;
    cout<<"enter the n : "<<endl;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
       int space=2*x - 2*i;
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }

        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=x;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
       int space=2*x - 2*i;
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }

        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n+1-i;j++)
      {
        cout<<j;
      }
       cout<<endl;
    }
    return 0;

}

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {   if((i+j)%2==0){
            cout<<"1"<<" ";}
            else
            {
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n,i;
 //int space=n-i;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
           cout<<" ";
        }
         for( int j=1;j<=n;j++){ cout<<"*"; }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
      cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
        for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"enter the value of n :"<<endl;
    cin>>n;
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(((i+j)%4==0) || (i==2 && j%4==0))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<"non prime"<<endl;
            break;
        }
        else
            {
                cout<<"prime";
                break;
            }
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n;
    int x , y;
    cout<<"enter the value of n"<<endl;
    cin>>n;
   while(n>0)
   {
       int x=n%10;
       y=y*10+x;
       n=n/10;

   }
   cout<<y;
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cout<<"enter the value of n"<<endl;
    cin>>n;
   int y=0;
   int b=n;
    while(n>0)
    {
      x=n%10;
      y=y+(x*x*x);
      n=n/10;
    }
    if(y==b){
    cout<<"  armstrong number";
    }
    else{
        cout<<"not armstront number";
    }

}

#include<iostream>
using namespace std;
void getdata()
{ int a,b;
 cout<<"enter the range : "<<endl;
 cin>>a>>b;
//  putdata();
}
void putdata(int a,int b)
{ int i;
    for(int num=a;num<=b;num++)
    {
       for( int i=2;i<=num;i++)
       {
           if(num%i==0)
           {
               break;
           }
           if(num==i)
       {
           cout<<i;
       }
       }

    }
}
int main()
{  int i;
    int x=5;
   int y=35;
    //getdata();
    putdata(x,y);
    return 0;
}

#include<iostream>
using namespace std;
void fib(int n)
{
    int t1=0;
    int t2=1;
    int nextterm;
    for(int i=1;i<=n;i++)
    {
        cout<<t1<<" ";
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
}
int main()
{
    int n;
    cout<<"enter the value of n :"<<endl;
    cin>>n;
    fib(n);
}

#include<iostream>
using namespace std;
fact_fun(int n)
{  int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
return fact;

}
int main()
{
    int n;
    cout<<"enter the value of n : "<<endl;
    cin>>n;

   int ans= fact_fun(n);
   cout<<ans<<endl;
}
#include<iostream>
using namespace std;
sum_n(int n)
{ int sum;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"enter the value of n :"<<endl;
    cin>>n;

    int ans= sum_n(n);
    cout<<"sum of n natural no. = "<<ans<<endl;

}

#include<iostream>
using namespace std;
convert(int n)
{

}
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    convert(n);
}

#include<iostream>
#include<climits>
using namespace std;
class obj
{
    int n;
    public:
   void getdata()
    {
       cout<<"enter the size of array"<<endl;
       cin>>n;
       int arr[n];
       for(int i=1;i<=n;i++)
       {
           cin>>arr[i];
       }
        int maxno=INT_MIN;
        int minno=INT_MIN;
        for(int i=1;i<=n;i++)
        {
         maxno=max(maxno,arr[i]);
         minno=min(minno,arr[i]);
        }
        cout<<maxno<<endl;
        cout<<minno;
    }
};
int main()
{
    obj a1;
    a1.getdata();
    return 0;
}

#include<iostream>
using namespace std;
int searching(int arr[],int n,int key)
{
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==key)
        {
            cout<<i;
        }
    }

}
int main()
{
    int n;
    cin>>n;
   int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;

    cout<<searching(arr,n,key);
    return 0;

}

#include<iostream>
using namespace std;
int searching(int arr[],int n,int key)
{
   int s=0;
   int e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<searching(arr,n,key);
    return 0;
}
include<iostream>
using namespace std;

int main()
{
    int n,i,l,j;
    cin>>n;
   int arr[n];
        cout<<"enter the value in array 1"<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the value in array 2"<<endl;
      for(int j=1;j<=n;j++)
    {
        cin>>arr[j];
    }
   int index=sizeof(arr[i]);
    for(int l=1;l<=index;l++)
    {
        arr[index]=arr[i];
        index++;
    }
 cout<<"\nAfter Concatination:"<<endl;
for(int i=1;i<10;i++)
{
cout<<arr[i]<<" ";
}



return 0;
}

#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *linl;
};
int main()
{
    struct node *head=NULL;
    head=(struct node*) malloc(sizeof(struct node));
    head->data=10;
    head->linl;
    cout<<head->data<<"  "<<head->linl;
}
*/
#include<iostream>
using namespace std;
int main()
{  int a=10;
    void *ptr=NULL;
   ptr=&a;
     cout<<*(int*)ptr;
     return 0;
}
