#include <iostream>
#include "5.3cube.h"
using namespace std;
int main() {
    Cube cube1, cube2, cube3;
    cout << "�������һ���������ĳ������ߣ�" << endl;
    cin >> cube1.length >> cube1.width >> cube1.height;
    cout << "������ڶ����������ĳ������ߣ�" << endl;
    cin >> cube2.length >> cube2.width >> cube2.height;
    cout << "������������������ĳ������ߣ�" << endl;
    cin >> cube3.length >> cube3.width >> cube3.height;
    cout << "��һ�������������Ϊ��" << cube1.get_volume() << endl;
    cout << "�ڶ��������������Ϊ��" << cube2.get_volume() << endl;
    cout << "�����������������Ϊ��" << cube3.get_volume() << endl;
    return 0;
}