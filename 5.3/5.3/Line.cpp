#include "Line.h"
#include <cmath>
#include <iostream>

Line::Line(const Point& s, const Point& e) : start(s), end(e) {}

Line::Line(int x1, int y1, int x2, int y2) : start(x1, y1), end(x2, y2) {}

int Line::length() const {
    int dx = end.getX() - start.getX();
    int dy = end.getY() - start.getY();
    return static_cast<int>(std::round(std::sqrt(dx * dx + dy * dy)));
}

void Line::print() const {
    std::cout << "Линия от ";
    start.print();
    std::cout << " до ";
    end.print();
    std::cout << std::endl;
}
