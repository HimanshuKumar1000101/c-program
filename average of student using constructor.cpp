#include<iostream>
using namespace std;
class students
{
float x;
float avg;
public:
 students(float x1, float x2 ,float x3 )
{ avg=(float)((x1+x2+x3)/3);
}
int show()
{
    cout<<"Average of three subject : "<<avg<<endl;
}
};
int main()
{
float x1,x2,x3;
cout<<" enter marks of maths : ";
cin>>x1;
cout<<" enter marks of science : ";
cin>>x2;
cout<<" enter marks of english : ";
cin>>x3;
students s(x1,x2,x3);
s.show();
return 0;
}

