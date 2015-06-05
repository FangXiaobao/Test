//虚函数实现动态绑定
#include<iostream>
using namespace std;
class A
{
public:
    void print()
    {
        cout<<"1"<<endl;
    }
    virtual void vprint()
    {
        cout<<"2"<<endl;
    }
};


class B : public A
{
public:
    void print()
    {
        cout<<"3"<<endl;
    }
    void vprint()
    {
        cout<<"4"<<endl;
    }
    
};

 int main()
{
    
    A* p = new A;
    p->print();
    p->vprint();
    p = new B;
    p->print();
    p->vprint();
    
    return 0;
}