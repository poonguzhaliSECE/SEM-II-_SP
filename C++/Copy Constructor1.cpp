//Copy Constructor
#include<iostream>
using namespace std;
class Sample
{
private:
    int x;
public:
    Sample(int a);
    Sample(Sample &s);
    void Display();
};
Sample::Sample(int a)
    {
        x=a;
    }
Sample::Sample(Sample &s)
    {
        x=s.x;
    }
void Sample::Display()
    {
        cout<<x;
    }
int main()
{
    Sample Sam(10);
    Sam.Display();
    cout<<"\n";
    Sample Sam1(Sam);
    Sam1.Display();
    cout<<"\n";
    Sam.Display();
    return 0;
}
