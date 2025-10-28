#include<iostream>
using namespace std;

class person
{
    int y;
    public:
    // person(){}
    person()
    {
        cout<<"this is parent"<<endl;
    }
    person(int s)
    {
        y=s;
    }
};

class student:public person
{
    private:
    int x;
    public:
    student(){}
    student(int a)
    {
        x=a;
    }
};

int main()
{
    student s1, s2(40);
    return 0;
}