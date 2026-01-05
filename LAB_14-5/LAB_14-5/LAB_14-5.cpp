#include <iostream>
using namespace std;

class Box {
private:
    int* value;

public:
    Box() {
        value = new int;
        cout << "Box created with dynamic memory." << endl;
    }

    ~Box() {
        delete value;
        cout << "Box destroyed, memory freed." << endl;
    }

    void set(int v) {
        *value = v;
    }

    int get() {
        return *value;
    }
};

int main() {
    Box box1;

    box1.set(42);
    cout << "Value in box: " << box1.get() << endl;

    Box box2;
    box2.set(100);
    cout << "Value in box2: " << box2.get() << endl;

    return 0;
}