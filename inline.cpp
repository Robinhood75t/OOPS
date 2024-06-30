#include<iostream>
using namespace std;
class product{
    int num;
    float cost;
    public:
    void setdata(int n,float c);
    void display()
    {
        cout<<"number = "<<num<<endl;
        cout<<"cost = "<<cost<<endl;
    }
};
inline void product::setdata(int n,float c)  // making it inline function
{
    num = n;
    cost = c;
}
int main()
{
    product n;
    n.setdata(10,20);
    n.display();
    return 0;
}