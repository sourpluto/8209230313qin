#include "5.3cube.h"
Cube::Cube() {
    length = width = height = 0;
}
void Cube::set_values(double l, double w, double h) {
    length = l;
    width = w;
    height = h;
}
double Cube::get_volume() {
    return length * width * height;
}