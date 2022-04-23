/*Write a program to read the marks of a  student in three different subjects and print the highest marks secured by him.*/
#include<iostream>
using namespace std;
class large
{ int x,y,z;
public:
    void input();
    void output();
};
void large::input()
{ // here we will take the inputs from the user in three subjects
    cout<<"enter the marks of english :";
        cin>>x;
    cout<<"enter the marks of science :";
        cin>>y;
     cout<<"enter the marks of maths :";
    cin>>z;
}/*here the logic of the program is presented ,
we are compare the marks of a student in 3 subject using nested if else statement */
 void large::output()
 // first we compare the marks of english and science
 { if(x>y)
 {
     cout<<" highest marks secured by him in english"<<" "<<x;
 }
 // // first we compare the marks of science and maths
else if(y>z)
 {
     cout<<" highest marks secured by him in science"<<" "<<y;
 }
 // if the upper both the condition fails then else part will present.
 else(z);
 {
     cout<<" highest marks secured by him in maths"<<" "<<z;
 }
}
 int main() // here we are calling the function.
 {
     large l;
     l.input();
     l.output();
 };


