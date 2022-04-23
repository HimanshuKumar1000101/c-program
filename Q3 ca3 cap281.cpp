#include<iostream>
#include<string>
using namespace std;
class Virtual_string{
    protected:
    virtual string concatenate(string &x, string &y ,string &z, string &a) = 0;
};
 class Concatenate : public Virtual_string
 {
public:
string concatenate(string &x, string &y ,string &z, string &a)
{
    string temp;
    temp = x+y+z+a;
    return temp;
}
};
int main()
{
string x, y , z ,a;

cout<<" Enter the string: "<<endl;
cin>>x>>y>>z>>a;
cout<<endl;
Concatenate C;

cout<<"concatenate string : " << C.concatenate(x,y,z,a);
cout<<endl;
return 0;
}
/*
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
fstream file("demo1.txt"); // creating an object of fstream class
 //calling an open method
if(!file.is_open())
{
cout<<"Error in creating file!!!";
return 0;
}
else{
cout<<"File created successfully."<<endl;
cout<<"I love C++ programming "<<endl;
file<<"I love C++ programming"; // writing contents
//file.close(); // calling the close method or closing the file
file.seekg(0);
cout<<"reading from the file"<<endl;
string line;
while(file.good()){
    getline(file,line);
    cout<<line<<endl;
}
}
return 0;

}*/
