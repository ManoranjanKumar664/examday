#include<iostream>
using namespace std;

class person
{
    private:
    int age;
    public:
    person(int a)
    {
        age=a;
    }
    void show_age()
    {
        cout<<"age:"<<age<<endl;
    }
};
class student:public person  
{
    private:
    int a;
    public:
    student(int x)
    {
        a=x;
    }
    void show_a()
    {
        cout<<a<<endl;
    }
};

int main()
{
    student s1(10);
    s1.show_a();
    // person p1(50);
    // p1.show_age();
    return 0;
}