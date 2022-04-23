#include<iostream>
using namespace std;
class fact
{ int factorial;
public:
    fact(int f)
    {
      factorial=f;
    }
    fact(fact &f)
    {
        factorial=f.factorial;
    }

   friend void facte_no(fact);
   ~fact()
   {
       cout<<"destructor";
   }
   void display()
    {
        cout<<"factorial = "<<factorial<<endl;
    }

};
void facte(fact f1)
{
    int factorial=1;
  for(int i=1;i<=f1.f;i++)

    {
        factorial=factorial*i;
     }
}
int main()
{
    fact f2,f3,f4;
    f2.fact(5);
    fact f3(f2);
    f4.facte();
    f5.display();
    return 0;
}
