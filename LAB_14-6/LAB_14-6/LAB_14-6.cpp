#include <iostream>
using namespace std;

class Analyzer {
public:
    double average(int* arr, int size) {
        if (size <= 0) {
            return 0.0;
        }

        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }

        return static_cast<double>(sum) / size;
    }
};

int main() {
    Analyzer analyzer;

    int arr[] = { 85, 90, 78, 92, 88 };
    int size = sizeof(arr) / sizeof(arr[0]);

    double avg = analyzer.average(arr, size);

    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Average: " << avg << endl;

    return 0;
}