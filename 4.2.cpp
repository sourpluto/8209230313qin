#include <iostream>
#include <vector>
// ����������
void bubbleSort(std::vector<double>& list) {
    int listSize = list.size();
    bool changed;

    do {
        changed = false;
        for (int j = 0; j < listSize - 1; j++) {
            if (list[j] > list[j + 1]) {
                // ����list[j]��list[j + 1]
                std::swap(list[j], list[j + 1]);
                changed = true;
            }
        }
    } while (changed);
}

int main() {
    // ����һ������10��˫�������ֵ�����
    std::vector<double> numbers = { 3.5, 2.1, 4.0, 1.2, 5.6, 7.3, 6.4, 8.9, 9.5, 10.0 };

    // ��ӡԭʼ����
    std::cout << "Original array:" << std::endl;
    for (const double& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // �����������������
    bubbleSort(numbers);

    // ��ӡ����������
    std::cout << "Sorted array:" << std::endl;
    for (const double& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
