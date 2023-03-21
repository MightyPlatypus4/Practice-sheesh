#include "Triangle.h"
#include <iostream>
#include <cmath>
//43w345
bool Triangle::exst_tr() {
    return ((a + b > c) && (b + c > a) && (a + c > b));
}
void Triangle::set(double a1, double b1, double c1) {
    a = a1;
    b = b1;
    c = c1;
}
void Triangle::show() {
    std::cout << "1 side: " << a << std::endl;
    std::cout << "2 side: " << b << std::endl;
    std::cout << "3 side: " << c << std::endl;
}
double Triangle::perimetr() {
    double p = a + b + c;
    return p;
}
double Triangle::square() {
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}