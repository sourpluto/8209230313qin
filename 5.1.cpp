#include<iostream>
using namespace std;
class Time {
private:
    int hour;
    int minute;
    int sec;
public:
    void setTime(int h, int m, int s) {
        hour = h;
        minute = m;
        sec = s;
    }
    void display() const {
        cout << "It is "<<hour << ":" << minute << ":" << sec <<"." << endl;
    }
    void inputTime() {
        cout << "Enter the time (hour minute second): ";
        cin >> hour >> minute >> sec;
    }
};
int main() {
    Time tl;
    tl.inputTime();
    tl.display();
    return 0;
}