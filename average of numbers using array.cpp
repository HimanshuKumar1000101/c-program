#include <iostream>
using namespace std;

int main(){
int *array, n, sum = 0;
cout << "Enter the value of n: "; cin >> n;
array = new int[n];
cout << "Enter the values: ";
for(int i=0; i < n; i++){
cin >> array[i];
}
for(int i=0; i < n; i++){
sum += array[i];
}
cout << "Sum is: " << sum <<" and average is: " << sum/n << endl;
delete array;
}
