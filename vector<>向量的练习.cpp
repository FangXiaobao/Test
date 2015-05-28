//标准库中的模板类vector< > x    vector类中定义了x.size() 返回值为vector<>模板类中定义
//的vector<int>::size_type 无符号整形 unsigned
//<algorithm>标准库中的算法头文件
//x.push_back(num)  将num放在向量x的末尾  x.begin() x.end()分别为向量x的第一和末尾
//
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    typedef vector<int>::size_type vv;
    vector<int> num;
    int x;
    while(cin>>x)
    {
        num.push_back(x);
        
    }
    
    sort(num.begin(), num.end());
    vv size = num.size();
    cout<<"vector<int>中一共保存了 "<<size<<" 个元素"<<endl;
    for(int i = 0 ; i < size ; i++)
    {
        cout<<num[i]
            <<" ";
    }
    cout<<endl;
    
    return 0;
}