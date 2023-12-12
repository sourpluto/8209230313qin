#include<iostream>
#include<string>
using namespace std;
int indexof(const char* s1, const char* s2);

int main() {
    string s1, s2;

    cout << "Enter string s1: ";
    cin >> s1;
    cout << "Enter string s2: ";
    cin >> s2;

    int index = indexof(s1.c_str(), s2.c_str());

    if (index != -1) {
        cout << "Substring found at index: " << index << endl;
    }
    else {
        cout << "Substring not found." << endl;
    } 

        return 0;
}
int indexof(const char* s1, const char* s2) {
    while (*s1 && *s2) {
        if (*s1 == *s2) {
            return s1 - s2;
        }
        s1++;
        s2++;
    }
    return -1; 
}
