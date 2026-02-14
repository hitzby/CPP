#include<iostream>
#include<string>
using namespace std;
class person{
    public:
    string name;
    int age;
    int id;
    public://还有private,protected等访问权限修饰符，默认为private，public表示共有的，在类外也可以访问。
    void fuc(){
        name="zhangsan";
        age=20;
        id=123;
    }
};

int main(){
    person p;
    p.fuc();
    cout <<p.name<<endl;//在这里我们是通过对象p来访问成员函数fuc()，在func()函数中我们给成员变量name，age，id赋值了。
    return 0;
}