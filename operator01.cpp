#include<iostream>
using namespace std;

class student
{
    public:
    int a;
    void show()
    {
        cout<<"a:"<<a<<endl;
        //" "<<"b:"<<b<<endl;
    }
    void takevalue(int x)
    {
        a=x;
    }
    student operator++()
    {
        student temp;
        temp.a=++a;
        return temp;
    }
};

int main()
{
    student s1;
    s1.takevalue(50);
    student s2=++s1;
    s2.show();
    return 0;
}