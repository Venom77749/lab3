#include <iostream>

class Point {
private:
    int x, y;
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    int getX() const { return x; }
    int getY() const { return y; }
    void setX(int newX) { x = newX; }
    void setY(int newY) { y = newY; }
    void print() const {
        std::cout << '{' << x << ';' << y << '}';
    }
};

class Line {
private:
    Point start;
    Point end;
public:
    Line(const Point& s, const Point& e) : start(s), end(e) {}
    Line(int x1, int y1, int x2, int y2) : start(x1, y1), end(x2, y2) {}

    const Point& getStart() const { return start; }
    const Point& getEnd() const { return end; }
    void setStart(const Point& p) { start = p; }
    void setEnd(const Point& p) { end = p; }
    void print() const {
        std::cout << "Линия от ";
        start.print();
        std::cout << " до ";
        end.print();
        std::cout << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "rus");

    Line L1(Point(1, 3), Point(23, 8));
    Line L2(5, 10, 25, 10);
    Line L3(L1.getStart(), L2.getEnd());

    L1.print();
    L2.print();
    L3.print();

    L1.setStart(Point(10, 10));
    L1.setEnd(Point(40, 20));
    L2.setStart(Point(15, 12));
    L2.setEnd(Point(35, 12));
    L3.setStart(L1.getStart());
    L3.setEnd(L2.getEnd());

    std::cout << "После изменения:" << std::endl;
    L1.print();
    L2.print();
    L3.print();

    L1.setStart(Point(100, 100));
    std::cout << "После изменения L1 без изменения L3:" << std::endl;
    L1.print();
    L3.print();

    return 0;
}
