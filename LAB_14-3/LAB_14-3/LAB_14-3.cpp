#include <iostream>
using namespace std;

class Student {
private:
    int id;
    int grade;

public:
    Student(int id, int grade) {
        this->id = id;
        this->grade = grade;
    }

    bool isPassed() {
        return grade >= 50;
    }

    void display() {
        cout << "Student ID: " << id << ", Grade: " << grade;
        cout << " - " << (isPassed() ? "PASSED" : "FAILED") << endl;
    }
};

int main() {
    Student students[3] = {
        Student(101, 75),
        Student(102, 45),
        Student(103, 90)
    };

    int passedCount = 0;

    cout << "Student Results:" << endl;
    for (int i = 0; i < 3; i++) {
        students[i].display();
        if (students[i].isPassed()) {
            passedCount++;
        }
    }

    cout << "\nTotal passed: " << passedCount << " out of 3" << endl;

    return 0;
}