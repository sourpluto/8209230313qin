#include <iostream>  
#include <cmath>
using namespace std;
int gys(int a, int b) {
    while (b != 0) {
        int t = a;
        a = b;
        b = t % b;
    }
    return a;
    //欧几里得方法计算最大公约数
}

int gbs(int a, int b) {
    return a * b / gys(a, b);
}
int main() {
    int a, b;
    cout << "请输入两个正整数：";
    cin >> a >> b;
    int c=gys(a, b);
    int d=gbs(a, b);
    int& refr = c, & refx = d;
    cout << "两个数的最大公约数是：" << refr << endl;
    cout << "两个数的最小公倍数是：" << refx << endl;
    return 0;
}