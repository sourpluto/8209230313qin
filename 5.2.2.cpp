#include <iostream>
using namespace std;
int parseHex(const char* const hexString) {
    int value = 0;
    for (int i = 0; hexString[i] != '\0'; ++i) {
        char c = hexString[i];
        if (c >= '0' && c <= '9') {
            value = value * 16 + (c - '0');
        }
        else if (c >= 'A' && c <= 'F') {
            value = value * 16 + (c - 'A' + 10); 
        }
        else {
            cerr << "��Ч��ʮ�������ַ�����" << endl;
            return -1;
        }
    }
    return value;
}
int main() {
    cout << "���Ե��ú��� parseHex(��A5��) ��" << parseHex("A5") << endl;
    return 0;

}

