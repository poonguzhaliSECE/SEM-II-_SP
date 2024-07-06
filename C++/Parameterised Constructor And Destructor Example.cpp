#include<iostream>
using namespace std;
class Arg
{
private:
    int n1,n2;
public:
    Arg(int a, int b)
    {
        cout<<"Constructor\n"<<endl;
        n1=a;
        n2=b;
    }
    void display()
    {
        cout<<"Display"<<endl;
        cout<<n1+n2;
    }
};
int main()
{
    Arg a(5,5);
    a.display();
    return 0;
}
