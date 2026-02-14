#include<iostream>
using namespace std;
class cube{
    private:
    int length;
    int width;
    int height;
    public:
    void setlength(int l){
        length=l;
    }
    void setwidth(int w){
        width=w;
    }
    void setheight(int h){
        height=h;
    }
    int caculateS(){
        return 2*(length*width+length*height+width*height);
    }
    int caculateV(){
        return length*width*height;
    }
    //成员函数进行比较
    bool compare(cube c){
        if(caculateV()==c.caculateV()){
            return true;
        }
        else{
            return false;
        }
    }
};
//全局函数进行比较
bool compare(cube c1,cube c2){
    if(c1.caculateV()==c2.caculateV()){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    cube c1,c2;
    c1.setlength(2);
    c1.setwidth(3);
    c1.setheight(4);
    c2.setlength(4);
    c2.setwidth(3);
    c2.setheight(2);
    //成员函数进行比较
    if(c1.compare(c2)){//这这里我们是通过调用c1中的函数在进行c2的赋值进行的比较。
        cout<<"相等"<<endl;
    }
    else{
        cout<<"不相等"<<endl;
    }
    //全局函数进行比较
    if(compare(c1,c2)){
        cout<<"相等"<<endl;
    }
   else{
            cout<<"不相等"<<endl;
        }
    return 0;
}