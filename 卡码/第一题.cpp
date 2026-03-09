#include <iostream>
#include <limits>
using namespace std;

int main() {
    int a;
    cout << "请输入一个整数: ";
    
    // 不仅要能读入整数，还要检查读完整数后，紧跟着的是不是回车符
    while (!(cin >> a) || cin.peek() != '\n') { 
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << "输入包含非法字符或小数，请输入一个纯整数: ";
    }
    
    cout << "你输入的纯整数是: " << a << endl;
    return 0;
}