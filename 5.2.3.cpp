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
    cout << "请输入数组元素个数： ";
    cin >> size;
     int* arr = new int[size];
    cout << "请输入数组元素： ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "指针指向内容：" << endl;
    for (int i = 0; i < size; i++) {
        cout << "arr + " << i << ": " << (arr + i) << " -> " << *(arr + i) << endl;
    }
    sortArray(arr, size);
    cout << "用指针方式输出数组元素："<<endl;
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}

