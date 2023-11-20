#include<iostream>
using namespace std;
int main()
{
    double side1, side2, side3;
    double perimeter;
    bool isIsosceles = false;

    cout << "输入三角形的三条边: ";
    cin >> side1 >> side2 >> side3;

    perimeter = side1 + side2 + side3;

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        cout << "这是一个三角形" << endl;
        cout << "周长为: " << perimeter << endl;
        if (isIsosceles) {
            cout << "这不是一个等腰三角形" << endl;
        }
        else {
            cout << "这是一个等腰三角形" << endl;
        }
    }
    else {
        cout << "这三条边无法构成三角形" << endl;
    }

    if (side1 == side2 || side1 == side3 || side2 == side3) {
        isIsosceles = true;
    }
    return 0;
}
