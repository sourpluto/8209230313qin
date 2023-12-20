#include <iostream>
using namespace std;
struct Student {
    int id; 
    float score; 
};

Student* max(Student students[], int size) {
    float maxScore = -1; 
    Student* maxStudent = nullptr; // ��ʼ��ָ����߳ɼ�ѧ����ָ��

    // ����ѧ������
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
        cout << "�����" << i + 1<<"��ѧ����ѧ��:";
        cin >> id;
        cout << "�����" << i + 1<<"��ѧ���ĳɼ�:";
        cin >> score;
        students[i].id = id;
        students[i].score = score;
    }

    Student* top = max(students, 5);

    if (top!= nullptr) {
        cout << "ѧ���ɼ�����ߵ�ѧ��Ϊ" << top->id <<endl;
    }
    return 0;
}
