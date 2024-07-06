#include<iostream>
using namespace std;
class Example
{
private:
    int x;
    int y;
public:
    Example()
    {
        x=0;
        y=0;
    }
    Example(int a,int b)
    {
        x=a;
        y=b;
    }
    Example operator +(Example & e2)
    {
        Example e3;
        e3.x=x+e2.x;
        e3.y=y+e2.y;
        return e3;
    }
    void Display() const
    {
        cout<<"x:"<<x;
        cout<<"\n";
        cout<<"y:"<<y;
    }
};
int main()
{
    Example e1(2,6);
    Example e2(5,2);
    e1.Display();
    cout<<"\n";
    e2.Display();
    Example e3;
    e3=e1+e2;
    cout<<"\n";
    e3.Display();
    return 0;
}
