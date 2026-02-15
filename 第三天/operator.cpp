#include<iostream>
using namespace std;
class person{
    friend ostream& operator<<(ostream&cout,person&p);//声明友元函数，访问private
    private:
    int m_a;
    int m_b;
    public:
    person(int a,int b):m_a(a),m_b(b){}//在这里应用初始化列表
   
};
ostream& operator<<(ostream&cout,person&p){//重载输出运算符
    cout<<"m_a="<<p.m_a<<",m_b="<<p.m_b;
    return cout;//返回cout对象本身，支持连续输出
}
int main(){
    person p(10,20);
    cout<<p<<" hello world "<<endl;
    return 0;
}