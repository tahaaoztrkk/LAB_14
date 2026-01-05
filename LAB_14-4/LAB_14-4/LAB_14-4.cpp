#include <iostream>
using namespace std;

int main() {
    int arr[] = { 10, 20, 30, 40, 50 };
    int size = 5;

    int* p = arr;

    cout << "Array elements using pointer iteration:" << endl;

    for (int i = 0; i < size; i++) {
        cout << "Element " << i << ": " << *(p + i) << endl;
    }

    cout << "\nAlternative method:" << endl;
    int* ptr = arr;
    for (int i = 0; i < size; i++) {
        cout << *ptr << " ";
        ptr++; 
    }
    cout << endl;

    cout << "\nUsing while loop:" << endl;
    int* p2 = arr;
    int* end = arr + size; 
    while (p2 < end) {
        cout << *p2 << " ";
        p2++;
    }
    cout << endl;

    return 0;
}