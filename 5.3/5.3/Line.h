#pragma once

#include "Point.h"

class Line {
private:
    Point start;
    Point end;
public:
    Line(const Point& s, const Point& e);
    Line(int x1, int y1, int x2, int y2);
    int length() const;
    void print() const;
};