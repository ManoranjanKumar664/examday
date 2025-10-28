#include<iostream>
using namespace std;
class person;

class student
{
    public:
    int a, b;
    student(){}
    student(int x, int y)
    {
        a=x;
        b=y;
    }
    void showvalue()
    {
        cout<<"values are:";
        cout<<a<<" "<<b<<endl;
    }
    friend void sumvalues(student, person);
};

class person
{
    public:
    int m, n;
    person(){}
    person(int x, int y)
    {
        m=x;
        n=y;
    }
    friend void sumvalues(student, person);
};

void sumvalues(student s1, person p1)
{
    cout<<"sum1:"<<s1.a+p1.m<<endl;
    cout<<"sum2:"<<s1.b+p1.n<<endl;
}

int main()
{
    student s1(10, 44); person p1(11, 30);
    sumvalues(s1, p1);
    return 0;
}