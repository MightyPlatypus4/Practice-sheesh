#include <iostream>
#include "Triangle.h"
int main()
{
    Triangle mas[3];
    double a, b, c;
    for (int i = 0; i < 3; i++) {
        std::cout << "Enter a,b,c for triangle n " << i + 1 << " with space " << std::endl;
        std::cin >> a >> b >> c;
        mas[i].set(a, b, c);
        if (!(mas[i].exst_tr())) {
            mas[i].show();
            std::cout << "Nope, try again" << std::endl;
            i--;
        }
    }
    for (int i = 0; i < 3; i++) {
        mas[i].show();
        std::cout << "Perymeter: " << mas[i].perimetr() << std::endl;
        std::cout << "Square: " << mas[i].square() << std::endl;
    }
    return 0;
}