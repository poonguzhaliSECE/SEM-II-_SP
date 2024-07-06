#include<iostream>
using namespace std;
class Sum
{
private:
    int a,b;
    int R;
public:
    Sum(int x,int y);
    void Display();
};
Sum::Sum(int x,int y)
    {
        this->a=x;
        this->b=y;
        R=a+b;
    }
void Sum::Display()
    {
        cout<<"Sum :"<<R;
    }
int main()
{
    Sum s(5,6);
    s.Display();
    return 0;
}
