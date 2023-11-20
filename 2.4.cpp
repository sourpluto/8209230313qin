#include<iostream>
using namespace std;
int main() {
    int num1, num2;
    char operator_;

    cout << "输入一个运算式:";
    cin >> num1 >> operator_ >> num2;

    switch (operator_) {
    case '+':
        cout << "结果是: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "结果是: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "结果是: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0) {
            cout << "除数不能为0！" << endl;
        }
        else {
            cout << "结果是: " << num1 / num2 << endl;
        }
        break;
    case '%':
        if (num2 == 0) {
            cout << "除数不能为0！" << endl;
        }
        else {
            cout << "结果是: " << num1 % num2 << endl;
        }
        break;
    default:
       cerr << "非法的运算符！" << endl;
    }

    return 0;
}
