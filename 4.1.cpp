#include <iostream>
#include <vector>//用于动态数组操作
#include <algorithm>//用于查找操作
using namespace std;
int main() {
    vector<int> numbers;//声明一个整数类型的量 用于存储输入的数字
    int n, input;//n用于循环计数 input用于存储数字

    cout << "Enter ten numbers: ";
    for (int i = 0; i < 10; ++i) {
        cin >> input;
        // 检查输入是否已经在数组中
        auto it = find(numbers.begin(), numbers.end(), input);//
        if (it == numbers.end()) {
            // 如果输入不在数组中，则存入数组
            numbers.push_back(input);
        }
    }

    // 输出不同的数
    cout << "The distinct numbers are: ";
    for (const int& num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
