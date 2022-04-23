#include<iostream>
using namespace std;
class Distance
{  //here two data members.
		int feet;
		int inches;
	public:
		void input()
		{ //here we take the input from user.
			cout<<"Enter feet: ";
			cin>>feet;
			cout<<"Enter inches: ";
			cin>>inches;
		}
		void output()
		{
			cout<<"Distance is feet= "<<feet<<", inches= "<<inches<<endl;
		}
		void sum(Distance d1, Distance d2)
		{ //here the main logic of the code we are calculating the inches and feet
			feet = d1.feet + d2.feet;
			inches = d1.inches + d2.inches;
			feet = feet + (inches / 12);
			inches = inches % 12;
		}
};
int main()
{ //now we are calling the function.
	Distance d1, d2, d3;
	d1.input();
	d2.input();
	d3.sum(d1, d2);
	d3.output();
	return 0;
}
