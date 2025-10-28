#include<iostream>
using namespace std;

class complex
{
    public:
    int a, b;
    complex()
    {

    }
    complex(int x, int y)
    {
        a=x;
        b=y;
    }
    void showvalue()
    {
        cout<<a<<" "<<b<<endl;
    }
complex operator+(complex& n1)
{
    complex temp;
    temp.a=a+n1.a;
    temp.b=b+n1.b;
    return temp;
}
};

int main()
{
    complex n1(10, 20);
    complex n2(50, 60);
    complex n3=n1+n2;
    // n3=n1+n2;
    n3.showvalue();
    return 0;
}
