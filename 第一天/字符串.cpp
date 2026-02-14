#include<iostream>
#include<string>
using namespace std;
int main(){
    //C语言风格的字符串
    char str1[]="hello world";
    cout<<str1<<endl;
    //C++风格的字符串
    string str2="hello C++";
    string nameseed="ABCDE";//string 类似于字符数组
    str2+=nameseed[0];//在这里是直接往后添加字符，算是和C不同的地方
    cout<<str2<<endl;
    return 0;
}
//system("cls");意思是清屏