#include <iostream>
#include <vector>
// 起泡排序函数
void bubbleSort(std::vector<double>& list) {
    int listSize = list.size();
    bool changed;

    do {
        changed = false;
        for (int j = 0; j < listSize - 1; j++) {
            if (list[j] > list[j + 1]) {
                // 交换list[j]和list[j + 1]
                std::swap(list[j], list[j + 1]);
                changed = true;
            }
        }
    } while (changed);
}

int main() {
    // 创建一个含有10个双精度数字的数组
    std::vector<double> numbers = { 3.5, 2.1, 4.0, 1.2, 5.6, 7.3, 6.4, 8.9, 9.5, 10.0 };

    // 打印原始数组
    std::cout << "Original array:" << std::endl;
    for (const double& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 对数组进行起泡排序
    bubbleSort(numbers);

    // 打印排序后的数组
    std::cout << "Sorted array:" << std::endl;
    for (const double& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
