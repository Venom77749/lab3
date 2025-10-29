#include <iostream>

class Point {
private:
    int x, y;
public:
    Point(int x, int y)
    {
        this->x = x; this->y = y;
    }

    Point()
    {
        x = 0;
        y = 0;
    }

    void print() const
    {
        std::cout << '{' << x << ';' << y << '}' << std::endl;
    }
};

int main()
{
    Point f1(2, 6);
    Point f2(3, 9);
    Point f3;

    f1.print();
    f2.print();
    f3.print();
}
