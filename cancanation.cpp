#include<iostream>
using namespace std;
class base
{
protected:
     string firstName;
     string secondName;
     string lastName;
      public:
         void first()
         {
             cout << "Type your first name: ";
         cin >> firstName;
         cout << "Your name is: " << firstName<<endl;
         }

};
class intermidate : public base
{
   public: second()
   {cout << "Type your second name: ";
cin >> secondName; // get user input from the keyboard
cout << "Your name is: " << secondName<<endl;
string fullname =firstName+secondName;
 cout<<"first and second :"<<fullname<<endl;
}

};
class derived : public intermidate
{
public:
    last()
   {cout << "Type your last name: ";
cin >> lastName; // get user input from the keyboard
cout << "Your name is: " << lastName<<endl;
  string fullname= firstName+secondName+lastName;
  cout<<"full name :"<<fullname;
}

};
int main()
{
   derived d;
    d.first();
    d.second();
    d.last();
    return 0;
}
/*
#include<iostream>
using namespace std;
class student
{
protected:
     string name;
     int Class;
    int rollno;
      public:
         void information()
         {
            cout<<"enter name : "<<endl;
            cin>>name;
            cout<<"enter class : "<<endl;
            cin>>Class;
            cout<<"enter rollno : "<<endl;
            cin>>rollno;
         }
};
class test
{ protected:
int english,science,maths;
   public: marks()
   { cout<<"enter marks of english : "<<endl;
   cin>>english;
   cout<<"enter marks of english : "<<endl;
   cin>>science;
   cout<<"enter marks of english : "<<endl;
   cin>>maths;
}

};
class exam : public student ,public test
{
public: void averge()
{
   int avj;
    cout<<"average ="<<(english+maths+science)/3;

}

};
int main()
{
   exam d;
    d.information();
    d.marks();
    d.averge();
    return 0;
}
*/
