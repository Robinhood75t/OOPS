// friend function

#include<iostream>
using namespace std;
class sum{
    int a;
    int b;
    public:
    void setdata()
    {
        a = 24;
        b = 34;
    }
    friend int sumofnum(sum s);
};
int sumofnum(sum s)
{
    return int(s.a+s.b)/20;
}
int main()
{
    sum x;
    x.setdata();
    cout<<"sum of num : "<<sumofnum(x);
    return 0;
}