// QuickSortExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>

using namespace std;

template<class T>
class BubbleSortExample
{
public:
    static void main()
    {
        int array[] = {23, 41, 25, 36, 3, 67, 72, 88};
        int arraySize = sizeof(array) / sizeof(array[0]);

        cout << "Original Array: ";
        printArray(array, arraySize);

        bubbleSort(array, arraySize);

        cout << "Sorted Array: ";
        printArray(array, arraySize);
    }

    template<class T>
    static void bubbleSort(T array[], int arraySize)
    {
        bool isSorted = false;
        for (int pass = 1; pass <= arraySize - 1 && !isSorted; pass++)
            isSorted = BubbleUp(array, arraySize, pass);
    }

    /// <summary>
    /// Bubble up the largest element to the end of the array
    /// </summary>
    /// <param name="n">Size of the array</param>

    template<class T>
    static bool BubbleUp(T array[], int arraySize, int pass)
    {
        bool isSorted = true; // Assume the array is sorted
        for (int index = 0; index < arraySize - pass; index++)
        {
            if (array[index] > array[index + 1])
            {
                swap(array[index], array[index + 1]);
                isSorted = false; // Array is proven to be unsorted
            }
        }
        return isSorted;
    }

    template<class T>
    static void printArray(T array[], int arraySize)
    {
        for (int index = 0; index < arraySize; index++)
            cout << array[index] << " ";

        cout << endl;
    }
};

int main()
{
    BubbleSortExample::main();
    return 0;
}
