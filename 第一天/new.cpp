#include<iostream>
using namespace std;
int main(){
    int *p=new int (10);//在这里是动态分配了一个int类型的空间，并且初始化为10
    cout << *p <<endl;
    delete p;
    p=nullptr;
    int *arr=new int [5]{1,2,3,4,5};//在这里是动态分配了一个int类型的数组，并且初始化为1,2,3,4,5。注意：分配数组要用[]，以及初始化时没有=号
    for(int i=0;i<5;i++){
        cout <<arr[i] <<" ";
    }
    cout<<endl;
    delete []arr;
    arr=nullptr;
    return 0;
}