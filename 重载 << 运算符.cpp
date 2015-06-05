//重载 << 运算符
#include<iostream>
using namespace std;
class Point
{
private:
    int x;
    int y;
public:
    Point();
    friend ostream& operator<< (ostream& os,Point& pt);
};

ostream& operator<< (ostream& os,Point& pt)
{
    os<<"("<<pt.x<<","<<pt.y<<")"<<endl;
    return os;
}

Point::Point()
{
    x=1;
    y=2;
}


int main()
{
    Point p;
    cout<<p;
}
