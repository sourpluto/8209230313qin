#include <iostream>
using namespace std;
class Point {
private:
    int x;
    int y;
public:
    Point(int a = 0, int b = 0) : x(a), y(b) {}
    void setPoint(int i, int j) {
        x += i;
        y += j;
    }
    void display(Point& p) {
        cout << "�޸ĺ������ֵ��(" << p.x << "," << p.y << ")" << endl;
    }
};

int main() {
    int i, j;
    cout << "��������Ҫ�޸ĵ�����ֵ��i��j��" << endl;
    cin >> i >> j;
    Point p(60, 80);
    p.setPoint(i, j);
    p.display(p);
    return 0;
}