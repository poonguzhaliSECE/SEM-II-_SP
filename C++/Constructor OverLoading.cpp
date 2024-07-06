#include<iostream>
using namespace std;
class Overload
{
private:
    int result;
public:
    Overload(int a,int b)
    {
        result=a+b;
        cout<<"Constructor 1\nSum : "<<result<<endl;
    }
    Overload(int a,int b,int c)
    {
        result=a+b+c;
        cout<<"Constructor 2\nSum : "<<result<<endl;
    }
    void Display(int x,int y)
    {
        cout<<"\nDisplay Function"<<endl;
        int a=x;
        int b=y;
        cout<<a+b;
    }
};
int main()
{
    Overload o1(1,2);
    Overload o2(1,2,3);
    o1.Display(5,5);
    o2.Display(5,5);
    return 0;
}
