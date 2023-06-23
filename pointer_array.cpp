// pointer_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

void rev_arr(int* arr, int size) {
    int* start = arr;                  
    int* end = arr + size - 1;         

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    const int SIZE = 5;
    int numbers[SIZE] = { 1, 2, 3, 4, 5 };

    cout << "Original Array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    rev_arr(numbers, SIZE);

    cout << "Reversed Array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
