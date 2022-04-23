#include<iostream>
using namespace std;
class complex
{
float real, imag;
public:
void input(float r, float i)
{ real = r;
imag = i;
 }
 complex sum(complex, complex);
void show()
{
cout<<"Enter the complex number and image number  :"<<real<<imag<<endl;
 cout <<real<<"+"<<imag<<"i";
}
};
 complex::sum(complex c1, complex c2)
{
complex c;
c.real = c1.real + c2.real;
c.imag = c1.imag + c2.imag;
  return(c);
}
int main()
{
complex c3, c4, c5;
c3.input(2,4);
c4.input(5,7);
c5 = sum(c3, c4);
cout<<"\nc3 = ";
c3.show();
cout<<"\nc4 = ";
c4.show();
cout<<"\nc5 = ";
c5.show();
}
