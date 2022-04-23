#include<iostream>
using namespace std;
class ascending
{
public:
    int arr[100];
    int a, i, j, temp;
    void getdata()
    {
       cout<<"Enter size of array: ";
    cin>>a;
    cout<<"Enter elements in array: ";
    for(i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    }
    void ascending_order()
    {  for(i=0; i<a; i++)
    {
        for(j=i+1; j<a; j++)
        {
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void display()
{
    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(i=0; i<a; i++)
    {
        cout<<arr[i]<<endl;
    }
}
};
class decending: public ascending
{
    public:
        void decending_order()
        {
        for(i=0; i<a-1; i++)
    {
        for(j=i+1; j<a; j++)
        {
            if(arr[j] > arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
 void show()
 {
    cout<<"Elements of array in sorted decending order:"<<endl;
    for(i=0; i<a; i++)
    {
        cout<<arr[i]<<endl;
    }

 }
};
int main()
{ decending d;
  d.getdata();
  d.ascending_order();
  d.display();
  d.decending_order();
  d.show();
  return 0;
}
