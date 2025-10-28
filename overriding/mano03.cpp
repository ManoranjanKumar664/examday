#include<iostream>
using namespace std;

class person
{
    private:
    int a;
    public: 
    person(){}
    person(int x)
    {
        // a=x;
        cout<<x;   
    }
  /*   person()
    {
        cout<<"this is parent"<<endl;
    } */
};

class student:public person
{
    private:
    int b, c;
    public:
    student(){}
    student(int x):person(x)
    {
        // b=x;
    }

};

int main(int argc, char const *argv[])
{
    student s1(40), s2;
    return 0;
}
