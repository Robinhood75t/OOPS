///class in oops 

#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    int marks;
    // member functions of class
    void setname(string s)
    {
        name = s;
    }
    void setroll(int x)
    {
        rollno = x;
    }
    void setmarks(int m)
    {
        marks = m;
    }
    void getname()
    {
        cout<<"name = "<<name<<endl;
    }
    void getroll()
    {
        cout<<"roll no = "<<rollno<<endl;
    }
    void getmarks()
    {
        cout<<"marks = "<<marks<<endl;
    }
};
int main()
{
    student s1;
    s1.setname("robin");
    s1.getname();
    s1.setroll(45);
    s1.getroll();
    s1.setmarks(45);
    s1.getmarks();
    return 0;
}
