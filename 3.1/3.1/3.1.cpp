#include <iostream>
#include <vector>
#include <string>

class Student {
private:
    std::string name;
    std::vector<int> grades;
public:
    Student(const std::string& n, const std::vector<int>& g)
        : name(n), grades(g) {}

    Student(const Student& other)
        : name(other.name), grades(other.grades) {}

    std::vector<int>& getGrades() { return grades; }
    const std::string& getName() const { return name; }

    void print() const {
        std::cout << name << ": [";
        for (int i = 0; i < grades.size(); ++i) {
            std::cout << grades[i];
            if (i != grades.size() - 1) std::cout << ",";
        }
        std::cout << "]" << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "rus");

    Student vasya("Вася", { 3, 4, 5 });
    Student petya("Петя", vasya.getGrades());

    petya.getGrades()[0] = 5;

    vasya.print();
    petya.print();

    Student andrey("Андрей", vasya.getGrades());
    vasya.getGrades()[1] = 1;
    andrey.print();
    vasya.print();

    return 0;
}
