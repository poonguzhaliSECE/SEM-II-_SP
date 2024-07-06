#include<iostream>
using namespace std;
class Sum
{
private:
    int a;
    int b;
public:
    void Add(int x,int y)
    {
        a=x;
        b=y;
        cout<<"Sum Is :"<<a+b<<endl;
    }
};
class Diff : public Sum
{
private:
    int a;
    int b;
public:
    void Sub(int x,int y)
    {
        a=x;
        b=y;
        cout<<"Difference Is :"<<a-b<<endl;
    }
};
int main()
{
    Diff d;
    d.Add(4,7);
    d.Sub(7,4);
    return 0;
}
