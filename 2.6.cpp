#include <iostream>  
#include <cmath>
using namespace std;
int g(int a, int b) {
    while(b != 0) {
        int t = a;
        a = b;
        b = t % b;
    }
    return a;
   //
    }

int s(int a, int b) {
    return a * b / g(a, b);
}
int main() {
    int a, b;
    cout << "请输入两个正整数：";
    cin >> a >> b;
    int gys = g(a, b);
    int gbs = s(a, b);
    cout << "两个数的最大公约数是：" << gys << endl;
    cout << "两个数的最小公倍数是：" << gbs << endl;
    return 0;
}
