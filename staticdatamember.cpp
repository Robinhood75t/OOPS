// static data member

#include<iostream>
using namespace std;
class item
{
    static int count;
    int num;
    public:
    void getdata(int n)
    {
        num = n;
        count++;
    }
    void getcount()
    {
        cout<<"count = "<<count;
    }
};
int item:: count;
int main()
{
    item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();
    a.getdata(100);
    b.getdata(200);
    c.getdata(300);
    cout<<"\n after reading :"<<endl;
    a.getcount();
    b.getcount();
    c.getcount();
    return 0;
}