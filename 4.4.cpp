#include <iostream>
#include<vector>
using namespace std;
// �����������ϲ��������кõ�����
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int index1 = 0, index2 = 0, index3 = 0;

    // �����������飬ֱ������һ������������
    while (index1 < size1 && index2 < size2) {
        if (list1[index1] < list2[index2]) {
            list3[index3++] = list1[index1++];
        }
        else {
            list3[index3++] = list2[index2++];
        }
    }

    // �����һ�����黹��ʣ��Ԫ�أ���������ӵ��ϲ����������
    while (index1 < size1) {
        list3[index3++] = list1[index1++];
    }

    // ����ڶ������黹��ʣ��Ԫ�أ���������ӵ��ϲ����������
    while (index2 < size2) {
        list3[index3++] = list2[index2++];
    }
}
using namespace std;
int main() {
    int size1, size2;

    const int size = 80;
    // ��ʾ�û������һ������Ĵ�С��Ԫ��

    cout << "Enter list1's length:";
    cin >> size1;
    int* list1 = new int[size1];
    if (size1 < size) {

        for (int i = 0; i < size1; i++) {
            cin >> list1[i];
        }
    }
    else {
        cout << "too large" << endl;
    }
    // ��ʾ�û�����ڶ�������Ĵ�С��Ԫ��

    cout << "Enter list2's length:";
    cin >> size2;
    int* list2 = new int[size2];
    if (size2 < size) {

        for (int i = 0; i < size2; i++) {
            cin >> list2[i];
        }
    }
    else {
        cout << "too large" << endl;
    }

    // ����һ�����������洢�ϲ���Ľ��
    int* list3 = new int[size1 + size2];

    // �ϲ���������
    merge(list1, size1, list2, size2, list3);

    // ����ϲ��������
    cout << "The merged list is: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << list3[i] << " ";
    }
    cout << endl;
    return 0;
}

