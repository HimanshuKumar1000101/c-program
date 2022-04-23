#include <iostream>
using namespace std;
//class name is Float
class Float{
   public:float vale;
          void getData(){ //taking input from user
            cout << "Enter the Value: ";
			cin >> vale;
        }//this function is showing the division of two numbers.
        Float divide(Float v1, Float v2){
            Float temp;
            temp.vale = v1.vale / v2.vale;
            return temp;
        }//this function is showing the multiplication of two numbers.
        Float multiplication(Float v1, Float v2){
            Float temp1;
            temp1.vale = v1.vale * v2.vale;
            return temp1;
        }
};
int main(){
    Float f1, f2, f3, f4;
//now we are calling the function.
    f1.getData();
    f2.getData();
    f3 = f3.divide(f1, f2);
    cout <<"divide of numbers: " << f3.vale<< endl;
	f4 = f4.multiplication(f1, f2);
	cout<<"multiplication of numbers: "<<f4.vale<<endl;
    return 0;
}
/*#include<iostream>
using namespace std;
class FLOAT
{
float meter;
int centimeter;
 public:
     void get_data(float m,float c)
     {
        meter=m;
        centimeter=c;
    }
    FLOAT sum(FLOAT,FLOAT);
    void put_data()
    {
       cout<<meter<<"meter"<<" ";
       cout<<centimeter<<"centimeter"<<endl;
    }
    };
FLOAT FLOAT::sum(FLOAT f1,FLOAT f2)
{
    FLOAT f;
f.centimeter = f1.centimeter + f2.centimeter;
f.meter = f.centimeter/100;
f.centimeter = f.centimeter%100;
f.meter = f.meter + f1.meter + f2.meter;
return(f);
}
int main()
{
    FLOAT f1,f2,f3;

    f1.get_data(4.5,20);
    f2.get_data(5.4,90);

    f3=f3.sum(f1,f2);
cout <<"Tl = "; f1.put_data();
cout <<"T2 = "; f2.put_data();
cout <<"T3 = "; f3.put_data();
}*/
