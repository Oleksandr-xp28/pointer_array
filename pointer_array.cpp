#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int SIZE = 5;
    int* arr1 = new int[SIZE] {1, 2, 3, 4, 5};
    int* arr2 = new int[SIZE];

    int* ptr1 = arr1;
    int* ptr2 = arr2;

    for (int i = 0; i < SIZE; i++) {
        *(ptr2 + i) = *(ptr1 + i);
    }

    for (int i = 0; i < SIZE; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    delete[] arr1;
    delete[] arr2;

    return 0;
}