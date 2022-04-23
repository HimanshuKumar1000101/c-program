#include <iostream>
using namespace std;

int main()

{
    int b, rows;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int i = 0, a= 0; i <= rows; ++i, a= 0)
    {
        for(b = 0; b <= rows-i; ++b)
        {
            cout <<"  ";
        }

        while(a != 2*i-1)
        {
            cout << "10";
            ++a;
        }
        cout<<"1";
        cout << endl;
    }    
    return 0;
}
