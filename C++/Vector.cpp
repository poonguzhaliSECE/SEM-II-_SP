#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a;
    for(int i=1;i<=5;i++)
    {
        a.push_back(i);
    }
    for(auto i=a.begin();i!=a.end();i++)
    {
        cout<<*i ;
    }
    cout<<endl;
    for(auto i=a.cbegin();i!=a.cend();i++)
    {
        cout<<*i ;
    }
    cout<<endl;
    for(auto i=a.rbegin();i!=a.rend();i++)
    {
        cout<<*i ;
    }
    cout<<endl;
    for(auto i=a.crbegin();i!=a.crend();i++)
    {
        cout<<*i ;
    }
    cout<<endl;
    cout<<"Size:"<<a.size();
    cout<<endl;
    cout<<"Capacity:"<<a.capacity();
    cout<<endl;
    cout<<"Maximum Size:"<<a.max_size();
    cout<<endl;
    return 0;
}
