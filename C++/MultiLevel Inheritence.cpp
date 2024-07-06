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
class Multi : public Diff
{
private:
    int a;
    int b;
public:
    void Pro(int x,int y)
    {
        a=x;
        b=y;
        cout<<"Product Is :"<<a*b<<endl;
    }
};
int main()
{
    Multi m;
    m.Add(5,5);
    m.Sub(5,5);
    m.Pro(5,5);
    return 0;
}

