#include <iostream>  
#include <cmath>
using namespace std;
int g(int a, int b) {
    while (b != 0) {
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
    cout << "������������������";
    cin >> a >> b;
    int gys = g(a, b);
    int gbs = s(a, b);
    cout << "�����������Լ���ǣ�" << gys << endl;
    cout << "����������С�������ǣ�" << gbs << endl;
    return 0;
}
