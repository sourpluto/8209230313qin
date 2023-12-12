#include <iostream>
#include<vector>
using namespace std;
// 函数声明，合并两个排列好的数组
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int index1 = 0, index2 = 0, index3 = 0;

    // 遍历两个数组，直到至少一个数组遍历完成
    while (index1 < size1 && index2 < size2) {
        if (list1[index1] < list2[index2]) {
            list3[index3++] = list1[index1++];
        }
        else {
            list3[index3++] = list2[index2++];
        }
    }

    // 如果第一个数组还有剩余元素，将它们添加到合并后的数组中
    while (index1 < size1) {
        list3[index3++] = list1[index1++];
    }

    // 如果第二个数组还有剩余元素，将它们添加到合并后的数组中
    while (index2 < size2) {
        list3[index3++] = list2[index2++];
    }
}
using namespace std;
int main() {
    int size1, size2;

    const int size = 80;
    // 提示用户输入第一个数组的大小和元素

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
    // 提示用户输入第二个数组的大小和元素

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

    // 创建一个新数组来存储合并后的结果
    int* list3 = new int[size1 + size2];

    // 合并两个数组
    merge(list1, size1, list2, size2, list3);

    // 输出合并后的数组
    cout << "The merged list is: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << list3[i] << " ";
    }
    cout << endl;
    return 0;
}

