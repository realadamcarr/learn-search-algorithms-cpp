// StudentBinarySearchCliApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


void insertionSort(string array[], int size) {
    for (int index = 1; index < size; ++index) {
        string key = array[index];
        int j = index - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

int binarySearch(const string arr[], int left, int right, const string& target) {
    while (left <= right) {
        int midpoint = left + (right - left) / 2;

        if (arr[midpoint] == target)
            return midpoint;

        if (arr[midpoint] < target)
            left = midpoint + 1;
        else
            right = midpoint - 1;
    }
    return -1;
}

int main() {

    string array[] = { "Jon", "Dot", "Eva", "Roy", "Guy", "Jan", "Tom", "Jim", "Ann", "Kim", "Ron", "Tim", "Kay", "Amy" };
	int byteSize = sizeof(array);
	int stringSize = sizeof(array[0]);
	int size = byteSize / stringSize;


    insertionSort(array, size);

    cout << "Sorted array:\n";
    for (int index = 0; index < size; ++index) {
        std::cout << array[index] << " ";
    }
    std::cout << std::endl;


    string value;
    cout << "Enter a string to search: ";
    cin >> value;

    int valueIndex = binarySearch(array, 0, size - 1, value);
    if (valueIndex != -1)
        std::cout << "Position of '" << value << "' in the sorted array: " << valueIndex << std::endl;
    else
        std::cout << "String not found in the array." << std::endl;

    return 0;
}

