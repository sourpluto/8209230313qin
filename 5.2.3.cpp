#include <iostream>
using namespace std;
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int size;
    cout << "����������Ԫ�ظ����� ";
    cin >> size;
     int* arr = new int[size];
    cout << "����������Ԫ�أ� ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "ָ��ָ�����ݣ�" << endl;
    for (int i = 0; i < size; i++) {
        cout << "arr + " << i << ": " << (arr + i) << " -> " << *(arr + i) << endl;
    }
    sortArray(arr, size);
    cout << "��ָ�뷽ʽ�������Ԫ�أ�"<<endl;
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}

