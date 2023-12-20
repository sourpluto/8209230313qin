#include <iostream>
#include "5.3cube.h"
using namespace std;
int main() {
    Cube cube1, cube2, cube3;
    cout << "请输入第一个长方柱的长、宽、高：" << endl;
    cin >> cube1.length >> cube1.width >> cube1.height;
    cout << "请输入第二个长方柱的长、宽、高：" << endl;
    cin >> cube2.length >> cube2.width >> cube2.height;
    cout << "请输入第三个长方柱的长、宽、高：" << endl;
    cin >> cube3.length >> cube3.width >> cube3.height;
    cout << "第一个长方柱的体积为：" << cube1.get_volume() << endl;
    cout << "第二个长方柱的体积为：" << cube2.get_volume() << endl;
    cout << "第三个长方柱的体积为：" << cube3.get_volume() << endl;
    return 0;
}