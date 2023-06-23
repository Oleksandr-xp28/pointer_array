// pointer_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void copy_arr_rev(int* source, int* dest, int size) {
    int* src_ptr = source + size - 1;
    int* dest_ptr = dest;

    while (size > 0) {
        *dest_ptr = *src_ptr;
        src_ptr--;
        dest_ptr++;
        size--;
    }
}

int main() {
    const int SIZE = 5;
    int source[SIZE] = { 1, 2, 3, 4, 5 };
    int dest[SIZE];

    cout << "Source Array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << source[i] << " ";
    }
    cout << endl;

    copy_arr_rev(source, dest, SIZE);

    cout << "Reversed Destination Array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << dest[i] << " ";
    }
    cout << endl;

    return 0;
}