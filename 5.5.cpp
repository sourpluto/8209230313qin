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
        cout << "修改后的坐标值：(" << p.x << "," << p.y << ")" << endl;
    }
};

int main() {
    int i, j;
    cout << "请输入需要修改的坐标值的i和j：" << endl;
    cin >> i >> j;
    Point p(60, 80);
    p.setPoint(i, j);
    p.display(p);
    return 0;
}