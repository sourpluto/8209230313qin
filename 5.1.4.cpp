#include<iostream>
using namespace std;
int* f() {
    int* list = new int[4]; 
    list[0] = 1;
    list[1] = 2;
    return list;
}

void main() {
    int* p = f(); 
    cout <<"p[0]:"<< p[0] << endl;
    cout <<"p[1]:" << p[1] << endl;
    delete[] p;
}
