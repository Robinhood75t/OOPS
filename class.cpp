#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    int rollno;
};
int main()
{
    student s1;
    s1.name="robin";
    s1.age=24;
    s1.rollno=56;
    student * s2 = new student();
    s2->name = "vikas";
    s2->age = 21;
    s2->rollno = 55;
    cout<<s2->name<<endl;
    cout<<s2->age<<endl;
    cout<<s2->rollno<<endl;
    cout<<s1.name<<" "<<s1.age<<" "<<s1.rollno<<endl;
    return 0;
}