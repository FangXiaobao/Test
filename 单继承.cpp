// c++单继承实验
#include<iostream>
using namespace std;
class Student
{
private:
    string studentID;                   //学号
    string sex;                         //性别
    string name;                        //姓名
    string department;                  //院系
    static int studentNum;              //静态数据成员 总学生数
public:
    Student();                          //默认构造函数
    Student(Student &s);                //拷贝构造函数
    ~Student();                         //析构函数
    static void showStudentNum();       //静态函数 显示学生人数
    friend void display(Student &s);    //友元函数display(Student &s)显示学生属性
};


void display(Student &s)
{
    cout<<"studentID:"<<s.studentID<<endl;
    cout<<"sex:"<<s.sex<<endl;
    cout<<"name:"<<s.name<<endl;
    cout<<"department:"<<s.department<<endl;
}

Student::Student()
{
        cout<<"now，we will input the date for the student:"<<endl;
        cout<<"studentID :";
        cin>>studentID;
        cout<<"sex:";
        cin>>sex;
        cout<<"name:";
        cin>>name;
        cout<<"department:";
        cin>>department;
        cout<<"OK!The date has been input"<<endl;
        cout<<"-----------------------"<<endl;
        cout<<endl;
    
        studentNum+=1;
    
}

Student::~Student()
{
    studentNum-=1;
}
int Student::studentNum=0;

void Student::showStudentNum()
{
    cout<<"学生总人数为（人）:"<<studentNum<<endl;
}
Student::Student(Student &c)
{
    this->studentID=c.studentID;
    this->sex=c.sex;
    this->name=c.name;
    this->department=c.department;
    
}



class GStudent : public Student              //GStudent 公有继承Student
{
private:
    string profession;
public:
    GStudent();                             //派生类GStudent的构造函数
    void gdisplay();                        //显示研究生属性
    friend void display(Student &s);
};

GStudent::GStudent():Student()              //GStudent构造函数 继承自Student类
{
    cout<<"now please input the profession for the GStudent:";
    cin>>profession;
    cout<<"OK,the profession date has been set!"<<endl;
}
void GStudent::gdisplay()
{
    display(*this);
    cout<<"profession:"<<this->profession<<endl;
}


int main()
{
    Student s[5];               //创建包括5个Student对象的数组
    Student scopy(s[0]);        //拷贝构造函数 实例化scopy对象  由s[0]拷贝
    Student::showStudentNum();  //静态成员函数 显示已创建学生总人数
    cout<<"显示全部学生信息如下所示:"<<endl<<endl;;
    for(int i=0;i<5;i++)        //显示全部学生信息（属性）
    {
        display(s[i]);
        cout<<"-----------------"<<endl;
    }
    cout<<"OK,now we will set date for the GStudent!"<<endl;
    GStudent gs;                //创建Student的派生类GStudent的对象 gs
    gs.gdisplay();              //GStudent类的成员函数  显示所有GStudent对象gs的属性
    return 0;

}











