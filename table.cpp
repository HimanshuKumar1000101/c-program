#include<iostream>

using namespace std;

int main()
{
	int m,n;
	cout<<"Enter the starting number: ";
	cin>>m;
	cout<<"Enter the last number: ";
	cin>>n;
	for(m; m<=n; ++m)
	{
		for(int i = 1; i <= 10; ++i)
		{
			cout<< (m * i) <<" ";
		}
		cout<<endl;
	}
	return 0;
}
