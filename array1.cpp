#include<iostream>
using namespace std;
int main()
{
int n,i,m;
cout<<("Enter the total number of elements: ");
cin>>n;

int *arr=new int();

cout<<("Enter elements in array: ");
for(i=0;i<n;i++)
{
cin>>arr[i];
}

cout<<("Enter position to delete the element");
cin>>m;


for(i=0;i<n;i++)
{
if(i!=m)
{
cout<<arr[i]<<" ";
}
}
delete []arr;
}
