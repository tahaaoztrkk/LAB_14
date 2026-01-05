#include <iostream>
using namespace std;

int main() {
  
    int a = 10, b = 20, c = 30;

    int* ptrs[3];

    ptrs[0] = &a;
    ptrs[1] = &b;
    ptrs[2] = &c;

    cout << "Values using array of pointers:" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "Pointer " << i << " points to value: " << *ptrs[i] << endl;
        cout << "Address stored: " << ptrs[i] << endl;
        cout << "Address of original variable: " << &a + i << endl;
        cout << "---" << endl;
    }

    cout << "\nModifying values through pointers:" << endl;
    *ptrs[0] = 100;
    *ptrs[1] = 200;
    *ptrs[2] = 300;

    cout << "After modification:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}