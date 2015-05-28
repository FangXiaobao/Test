
//the function setprecision() defined in header file <iomanip>
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double  t;
    cout<<"请输入需要处理的数字:";
    cin>>t;
    streamsize prec;
    prec = cout.precision();
    int p;
    cout<<"输入需要保留的精度：";
    cin>>p;
    cout<<setprecision(p)<<t<<setprecision(prec)<<endl;
    cout<<"谢谢使用！"<<endl;
    
    return 0;
}