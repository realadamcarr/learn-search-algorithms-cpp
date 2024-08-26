#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 100;

template <class T>
void MergeSort(T array[], int first, int last)
{
    if (first >= last)
        return;

    int middle = (first + last) / 2;
    MergeSort(array, first, middle);
    MergeSort(array, middle + 1, last);
    Merge(array, first, middle, middle + 1, last)
}
template <class T>
void Merge(T array[], int leftFirst, int leftLast, int rightFirst, int rightLast)
{
    T mergedArray[MAX];
    int index = leftFirst;
    int saveFirst = leftFirst;

    while ((leftFirst <= leftLast) && (rightFirst <= rightLast))
    {
        if (array[leftFirst] < array[rightFirst])
        {
            mergedArray[index] = array[leftFirst];
            leftFirst++;
        }
        else
        {
            mergedArray[index] = array[rightFirst];
            rightFirst++;
        }
        index++;
    }

    CopyValuesBackToArray_(array, mergedArray, leftFirst, leftLast);
    CopyValuesBackToArray_(array, mergedArray, rightFirst, rightLast);
    for (index = saveFirst; index <= rightLast; index++)
        array[index] = mergedArray[index];
}

// Let Me think about this
template <class T>
void CopyValuesBackToArray(T array[], T mergedArray[], int startIndex, int endIndex)
{
    for (int index = startIndex; index <= endIndex; index++)
        array[index] = mergedArray[index];
}
template <class T>
void CopyValuesBackToArray_(T array[], T mergedArray[], int startIndex, int endIndex)
{
    int index = startIndex;
    while (startIndex <= endIndex)
    {
        mergedArray[index] = array[startIndex];
        startIndex++;
        index++;
    }
}
