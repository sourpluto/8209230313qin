#include<iostream>
using namespace std;
int monkeyeat(int day) {
	if (day > 1) {
		return 2 * monkeyeat(day - 1) + 1;
	}
	else {
		return 1;
	}
}
int main() {
	int day = 10;
	int peaches = monkeyeat(day);
	cout << "���ӵ�һ�칲ժ" << peaches<<"�����ӡ�" << endl;
	return 0;
}