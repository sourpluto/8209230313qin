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
    //ŷ����÷����������Լ��
}

int gbs(int a, int b) {
    return a * b / gys(a, b);
}
int main() {
    int a, b;
    cout << "������������������";
    cin >> a >> b;
    int c=gys(a, b);
    int d=gbs(a, b);
    int& refr = c, & refx = d;
    cout << "�����������Լ���ǣ�" << refr << endl;
    cout << "����������С�������ǣ�" << refx << endl;
    return 0;
}