#include<iostream>
using namespace std;

class student
{
    public:
    int a;
    void takevalue(int x)
    {
        a=x;
    }
    student operator++(int)
    {
        student temp;
        // int y=a;
        temp.a=a++;
        return temp;
    }
    void showvalue()
    {
        cout<<a<<endl;
    }
};

int main()
{
    student s1;
    s1.takevalue(43);
    cout<<"value before increasing:";
    s1.showvalue();
    student s2=s1++;
    cout<<"value after increasing:";
    s1.showvalue();
    cout<<"value of s2.a:";
    s2.showvalue(); 
    return 0;
}

