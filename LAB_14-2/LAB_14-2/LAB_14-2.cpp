#include <iostream>
using namespace std;

class Calculator {
public:
    void square(int* x) {
        if (x != nullptr) {
            *x = (*x) * (*x);
        }
    }
};

int main() {
    Calculator calc;
    int num = 5;

    cout << "Original value: " << num << endl;

    calc.square(&num);

    cout << "After squaring: " << num << endl;

    return 0;
}