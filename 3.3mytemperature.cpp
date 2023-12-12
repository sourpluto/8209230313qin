#include "mytemperature.h"
#include<iostream>
double celsius_to_fah(double cel) {
	double t = (cel * 9.0) / 5.0 + 32.0;
	return t;
}
double fahrenheit_to_cels(double fah) {
	double z = (fah - 32.0) * 5.0 / 9.0;
	return z;
}