#include <iostream>
using namespace std;

class student{
  private:
    int marks;

  public:
    void setmarks(int m) {
      marks = m;
    }
    int getmarks() {
      return marks;
    }
};

int main() {
  student Obj;
  int marks;
  cout<<"enter your marks"<<endl;
  cin>>marks;
  Obj.setmarks(marks);
  cout << Obj.getmarks();
  return 0;
}
