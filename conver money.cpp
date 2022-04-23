#include<iostream>
using namespace std;
class money
{
int rupees;
int paisa;
public:
void gettime(int r, int p)
{
rupees = r;
paisa = p;
}
void putdata()
{
cout <<rupees<<" rupees and ";
cout <<paisa<<" paisa "<<"\n";
}
 money sum(money , money);
};
money money::sum(money ml , money m2)
{ money m;
m.paisa = ml.paisa + m2.paisa;
m.rupees=paisa/100;
m.paisa = paisa%100;
m.rupees = m.rupees + ml.rupees + m2.rupees;
 return(m);
}
int main()
{
money m1, m2, m3;
m1.gettime(2, 50);
m2.gettime(3, 50);
m3=m3.sum(m1, m2);
cout <<"ml = "; m1.putdata();
cout <<"m2 = "; m2.putdata();
cout <<"m3 = "; m3.putdata();
}

