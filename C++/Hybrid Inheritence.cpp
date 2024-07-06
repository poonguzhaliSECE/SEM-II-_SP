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
class Multi : public Sum
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
class Div : public Multi
{
private:
    int a;
    int b;
public:
    void Q(int x,int y)
    {
        a=x;
        b=y;
        cout<<"Quotient Is :"<<a/b<<endl;
    }
};
class Mod : public Div
{
private:
    int a;
    int b;
public:
    void Rem(int x,int y)
    {
        a=x;
        b=y;
        cout<<"Remainder Is :"<<a%b<<endl;
    }
};
int main()
{
    Div d;
    d.Pro(1,3);
    d.Q(9,3);
    d.Add(11,11);
    Mod m;
    m.Pro(1,7);
    m.Q(25,5);
    m.Add(5,6);
    m.Rem(1,3);
    Multi mu;
    mu.Pro(2,6);
    mu.Add(8,2);
    Diff di;
    di.Sub(5,3);
    di.Add(9,1);
    return 0;
}


