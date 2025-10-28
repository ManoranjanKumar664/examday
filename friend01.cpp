#include<iostream>
using namespace std;

class student
{
    public:
    // int a=100, b=40;
    int a, b;
    void takevalue(int x, int y)
    {
        a=x;b=y;
    }
    // void takevalue(int L)
    void showvalues()
    {
        cout<<"values are:";
        cout<<a<<" "<<b<<endl;
    }
    friend student sumvalues(student&, student&);
};

student sumvalues(student &s1, student &s2)
{
    // cout<<"value1:"<<s1.a+s2.a<<endl;
    // cout<<"value2:"<<s1.b+s2.b<<endl;
    student s3;
    s3.a=s1.a+s2.a;
    s3.b=s1.b+s2.b;
    return s3;
}

int main()
{
    student s1, s2;
    s1.takevalue(49, 33);
    s2.takevalue(100, 30);
    student s3=sumvalues(s1, s2);
    s3.showvalues();  
    return 0;
}