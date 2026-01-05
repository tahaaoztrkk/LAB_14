#include <iostream>
using namespace std;

class IntArray {
private:
    int* data;
    int size;

public:
    IntArray(int size) {
        this->size = size;
        data = new int[size];
    }

    ~IntArray() {
        delete[] data;
        cout << "IntArray destroyed, memory freed." << endl;
    }

    void fill(int value) {
        for (int i = 0; i < size; i++) {
            data[i] = value;
        }
    }

    int sum() {
        int total = 0;
        for (int i = 0; i < size; i++) {
            total += data[i];
        }
        return total;
    }

    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    IntArray arr(5);

    arr.fill(10);
    arr.display();
    cout << "Sum of array: " << arr.sum() << endl;

    return 0;
}