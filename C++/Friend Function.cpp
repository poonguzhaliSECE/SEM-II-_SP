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
        b=6;
    }
    friend void frndfunction(A &obj);
};
void frndfunction(A &obj)
{
    cout<<obj.a;
    cout<<endl;
    cout<<obj.b;
}
int main()
{
    A a;
    frndfunction(a);
    return 0;
}
