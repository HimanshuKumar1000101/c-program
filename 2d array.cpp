/*#include <stdio.h>
int main()
{
int a[3][3],b[3],r,c,rs=0;
printf("Enter 9 values");
for(r=0; r<=2; r++)
{
for(c=0; c<=2; c++)
{
scanf("%d", &a[r][c]);
}
}
for(r=0; r<=2; r++)
{
rs=0;
b[r]=0;
for(c=0; c<=2; c++)
{
printf("%d\t", a[r][c]);
rs=rs+a[r][c];
b[r]=b[r]+b[c][r];
}
printf("%d", rs);
printf("\n");
}
for(r=0; r<=2; r++)
{
printf("%d\t", b[r]);
}

return 0;
}

#include<iostream>
using namespace std;
int main()
{
int a[50],b[50],c[100];
int m,i,n,t;

cout<<"Enter total number of elements for 1st Array: ";
cin>>m;
cout<<"Enter "<<m<<" elements for 1st Array: ";
for(i=0;i<m;i++)
{
cin>>a[i];
}
cout<<"Enter total number of elements for 2nd Array: ";
cin>>n;
cout<<"Enter "<<n<<" elements for 2nd Array: ";
for(i=0;i<n;i++)
{
cin>>b[i];
}
for(i=1;i<=a[i];i++)
{
    int x=a[i]>a[i]
}


/*t=m+n;
for(i=0;i<m;i++)
{
c[i]=a[i];
}
for(i=0;i<n;i++,m++)
{
c[m]=b[i];
}
for(i=0;i<t;i++)
{
cout<<c[i]<<" ";
}
return 0;
}*/
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int n1,n2;
cin >> n1;
int * a1 = new int[n1];
for(int i=0 ; i<n1 ; ++i) {
cin >> a1[i];
}
sort(a1,a1+n1);
cin >> n2;
int * a2 = new int[n2];
for(int i=0 ; i<n2 ; ++i) {
cin >> a2[i];
}
sort(a2,a2+n2);
int n3 = n1 + n2;
int * arr = new int[n3];
int i = 0; int j1 = 0; int j2 = 0;
while(j1<n1 && j2<n2) {
if(a1[j1] < a2[j2]){
arr[i] = a1[j1];
++i;
++j1;
}
else{
arr[i] = a2[j2];
++i;
++j2;
}
}
if(j1 == n1 && j2!= n2) {
for(j2; j2<n2; ++j2){
arr[i] = a2[j2];
++i;
}
}
else if(j2 == n2 && j1!=n1) {
for(j1; j1<n1; ++j1){
arr[i] = a1[j1];
++i;
}
}
else goto print;
print:
for(int k=0 ; k<n3 ; ++k) {
cout << arr[k] << " ";
}
return 0;
}
