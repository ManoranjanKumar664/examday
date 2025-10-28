#include<iostream>
using namespace std;

class student
{
    public:
    int marks1, marks2;
    void takevalue(int x, int y)
    {
        marks1=x;
        marks2=y;
    }
    int operator>(student s1)
    {
        if(marks1>s1.marks1&&marks2>s1.marks2)
         return 1;
        else
         return 0;
    }
};

int main()
{
    student s1, s2;
    s1.takevalue(10, 20);
    s2.takevalue(5, 9);
    if(s1>s2)
     cout<<"student 1 is suitable."<<endl;
    else
     cout<<"student s2 is suitable."<<endl;
    return 0;
}