#include <iostream>
using namespace std;

class Numbers {
private:
    int* arr;
    int size;

public:
   
    Numbers(int* values, int size) {
        this->size = size;
        arr = new int[size];

        
        for (int i = 0; i < size; i++) {
            arr[i] = values[i];
        }
    }
    ~Numbers() {
        delete[] arr;
    }

    int max() {
        if (size <= 0) return -1;

        int maxVal = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }
        return maxVal;
    }

    void display() {
        cout << "Numbers: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int values[] = { 23, 45, 12, 67, 34, 89 };
    int size = sizeof(values) / sizeof(values[0]);

    Numbers numbers(values, size);

    numbers.display();
    cout << "Maximum value: " << numbers.max() << endl;

    return 0;
}