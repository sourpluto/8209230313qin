#include <iostream>
using namespace std;
struct Student {
    int id; 
    float score; 
};

Student* max(Student students[], int size) {
    float maxScore = -1; 
    Student* maxStudent = nullptr; // 初始化指向最高成绩学生的指针

    // 遍历学生数组
    for (int i = 0; i < size; i++) {
        if (students[i].score > maxScore) {
            maxScore = students[i].score; 
            maxStudent = &students[i]; 
        }
    }

    return maxStudent; 
}

int main() {
    Student students[5]; 
    int id;
    float score;
    for (int i = 0; i < 5; i++) {
        cout << "输入第" << i + 1<<"个学生的学号:";
        cin >> id;
        cout << "输入第" << i + 1<<"个学生的成绩:";
        cin >> score;
        students[i].id = id;
        students[i].score = score;
    }

    Student* top = max(students, 5);

    if (top!= nullptr) {
        cout << "学生成绩最高者的学号为" << top->id <<endl;
    }
    return 0;
}
