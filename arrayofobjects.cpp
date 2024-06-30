/// array of objects
#include<iostream>
using namespace std;
class employee{
    string name;
    int age;
    public:
    void getname()
    {
        cin>>name;
    }
    void getage()
    {
        cin>>age;
    }
    void display()
    {
        cout<<"name = "<<name<<endl;
        cout<<"age = "<<age<<endl;
    }
};
int main()
{
    employee e[4];
    for(int i=0;i<4;i++)
    {
        e[i].getname();
        e[i].getage();
    }
    for(int i=0;i<4;i++)
    {
        e[i].display();
    }
    return 0;
}