#include<iostream>
using namespace std;
class A
{
private:
    int a;
protected:
    int b;
public:
    A()
    {
        a=5;
        b=8;
    }
    friend class B;
};
class B
{
public:
    void Display(A &d)
    {
        cout<<d.a;
        cout<<endl;
        cout<<d.b;
    }
};
int main()
{
    A a;
    B b;
    b.Display(a);
    return 0;
}
