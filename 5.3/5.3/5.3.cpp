#include "Line.h"
#include <iostream>

int main() {
    setlocale(LC_ALL, "rus");

    Line line(Point(1, 1), Point(10, 15));
    line.print();
    std::cout << "Длина линии: " << line.length() << std::endl;
    return 0;
}
