#include <iostream>
using namespace std;

class Util {
public:
    void swap(int* a, int* b) {
        if (a != nullptr && b != nullptr) {
            int temp = *a;
            *a = *b;
            *b = temp;
        }
    }
};

int main() {
    Util util;

    int x = 10, y = 20;

    cout << "Before swap: x = " << x << ", y = " << y << endl;

    util.swap(&x, &y);

    cout << "After swap: x = " << x << ", y = " << y << endl;

    int a = 100, b = 200;
    cout << "\nBefore swap: a = " << a << ", b = " << b << endl;

    util.swap(&a, &b);

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}