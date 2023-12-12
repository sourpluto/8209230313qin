#include"mytemperature.h"
#include<iostream>

using namespace std;
int main() {
	double a, b, c,e,f,g;
	cout << "请输入需要转换的摄氏度：";
	cin >> a >> b >> c;
	cout << endl;
	cout << "请输入需要转换的华氏度：";
	cin >> e >> f >> g;
	double cel[] = { a,b,c }, fah[] = { e,f,g };
	double celsius_fahrenheit[3],fahrenheit_celsius[3];
	for (int i = 0; i < 3; ++i) {
		celsius_fahrenheit[i] = celsius_to_fah(cel[i]);
	}
	for (int i = 0; i < 3; ++i) {
		fahrenheit_celsius[i] = fahrenheit_to_cels(fah[i]);
	}
	cout << "Celsius  Fahrenheit | Fahrenheit  Celsius" << endl;
	for (int i = 0; i < 3; ++i)
		cout << cel[i] << "  " << fah[i] << " | " << celsius_fahrenheit[i] << "  " << fahrenheit_celsius[i] << "\n";
	return 0;
}