#include<iostream>
using namespace std;
class Sum
{
public:
    Sum()
    {
        cout<<"Constructor"<<endl;
    }
    ~Sum()
    {
        cout<<"Destructor"<<endl;
    }
    void display()
    {
        cout<<"Display Function"<<endl;
    }
};
int main()
{
    Sum s;
    s.display();
    return 0;
}
