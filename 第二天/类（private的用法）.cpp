#include<iostream>
#include<string>
using namespace std;
class person{
    private :
    string name;//我想把name设置为可读可写
    int age;//我想把age设置为只读
    int id;//我想把id设置为只写
    public://虽然我不能直接访问name等等，但是我可以通过成员函数来间接访问。就是跳转到类中进行访问。
    void setname(string n){
        name=n;
    }
    void getname(){
        cout<<name<<endl;
    }
    void getage(){
        cout<<age<<endl;
    }
    void setid(int i){
        id=i;
    }
    void initial(){
        name="lisi";
        age=20;
        id=0;
    }
};

int main(){
    person p;
    p.initial();
    p.setname("zhangsan");
    p.getname();
    p.setid(123);
    p.getage();
    return 0;
}