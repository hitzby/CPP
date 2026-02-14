#include<iostream>
#include<cmath>
using namespace std;
class point{
    private:
    int m_x;
    int m_y;
    public:
    void setX(int X){
        m_x=X;
    }
    int getX(){
        return m_x;
    }
    void setY(int Y){
        m_y=Y;
    }
    int getY(){
        return m_y;
    }
};
class circle{
    private:
    int m_R;
    point m_center;
    public:
    void setR(int r){
        m_R=r;
    }
    int getR(){
        return m_R;
    }
    void setX(int x){
        m_center.setX(x);
    }
    int getX(){
        return m_center.getX();
    }
    void setY(int y){
        m_center.setY(y);
    }
    int getY(){
        return m_center.getY();
    }
};
void compare(circle c,point p){
    if(sqrt(pow(c.getX()-p.getX(),2)+pow(c.getY()-p.getY(),2))==c.getR()){
        cout<<"在圆上"<<endl;
    }
    else if(sqrt(pow(c.getX()-p.getX(),2)+pow(c.getY()-p.getY(),2))<c.getR()){
        cout<<"在圆内"<<endl;
    }
    else{
        cout<<"在圆外"<<endl;
    }
}
int main(){
    circle c;
    point p;
    c.setR(5);
    c.setX(5);
    c.setY(10);
    p.setX(5);
    p.setY(15);
    compare(c,p);
    return 0;
}