#include<iostream>
using namespace std;

class person
{
    int a;
    public:
    person()
    {
        cout<<"hello world";
    }
    person(int a=40)
    {
        cout<<a;
    }
};

int main(int argc, char const *argv[])
{
    person p1;
    return 0;
}
