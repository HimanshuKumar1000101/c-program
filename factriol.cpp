class addition
{
int m , n;
public:

addition(addition &A )
{ m = A.m; n = A.n; }
 do{
    printf("%d\n",a);
    a++;
        }
    while(a==(a-1)*(a-2)*(a-3)*1);
};
int main()
{
addition a1; // Default Constructor
addition a2(20, 30); // Parametrized Constructor
addition a3(a2); // Copy Constructor
return 0;
}
