#include<iostream>
using namespace std;

class person
{
    public:
    person(int x)
    {
        cout<<"parent value:"<<x<<endl;
    }
};
  
class student:public person
{
  public:
  student(int a):person(a)
  {

  }
  void show()
  {}
};

int main()
{
    student s1(40);
    return 0;
}