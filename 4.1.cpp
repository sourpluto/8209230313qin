#include <iostream>
#include <vector>//���ڶ�̬�������
#include <algorithm>//���ڲ��Ҳ���
using namespace std;
int main() {
    vector<int> numbers;//����һ���������͵��� ���ڴ洢���������
    int n, input;//n����ѭ������ input���ڴ洢����

    cout << "Enter ten numbers: ";
    for (int i = 0; i < 10; ++i) {
        cin >> input;
        // ��������Ƿ��Ѿ���������
        auto it = find(numbers.begin(), numbers.end(), input);//
        if (it == numbers.end()) {
            // ������벻�������У����������
            numbers.push_back(input);
        }
    }

    // �����ͬ����
    cout << "The distinct numbers are: ";
    for (const int& num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
