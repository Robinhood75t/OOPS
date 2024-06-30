#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    int marks;
    // default constructor
    student()
    {
        name = "robin";
        rollno = 34;
        marks = 34;
    }
    // parameterised constructor
    student(string n,int r,int m)
    {
        name = n;
        rollno = r;
        marks = m;
    }
    // copy constructor
    student(student& s2)
    {
        name = s2.name;
        rollno = s2.rollno;
        marks = s2.marks;
    }
};
int main()
{
    student s1;
    cout<<s1.name<<endl;
    cout<<s1.rollno<<endl;
    cout<<s1.marks<<endl;
    cout<<endl;
    student s2("vikas",23,100);
    cout<<s2.name<<endl;
    cout<<s2.rollno<<endl;
    cout<<s2.marks<<endl;
    cout<<endl;
    student s3 = s2;
    cout<<s3.name<<endl;
    cout<<s3.rollno<<endl;
    cout<<s3.marks<<endl;
    return 0;
}