#include<iostream>
using namespace std;
class Student
{
private:
    int rollno;
    string name;
    int mark;
    char grade;
public:
   Student();
    void Display();
};
Student::Student()
    {
        cout<<"Enter the Name: ";
        cin>>name;
        cout<<"\n";
        cout<<"Enter the Roll Number: ";
        cin>>rollno;
        cout<<"\n";
        cout<<"Enter the Marks: ";
        cin>>mark;
        cout<<"\n";
        cout<<"Enter the Grade: ";
        cin>>grade;
        cout<<"\n";
    }
void Student::Display()
 {
        cout<<name;
        cout<<"\n";
        cout<<rollno;
        cout<<"\n";
        cout<<mark;
        cout<<"\n";
        cout<<grade;
        cout<<"\n";
    }
int main()
{
    Student s;
    s.Display();
    return 0;
}
