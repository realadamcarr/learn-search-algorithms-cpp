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

    CopyRemaining(array, mergedArray, leftFirst, leftLast);
    CopyRemaining(array, mergedArray, rightFirst, rightLast);

    for (index = saveFirst; index <= rightLast; index++)
        array[index] = mergedArray[index];
}

template <class T>
void CopyRemaining(T array[], T mergedArray[], int& startIndex, int endIndex, int& targetIndex)
{
    while (startIndex <= endIndex)
    {
        mergedArray[targetIndex] = array[startIndex];
        startIndex++;
        targetIndex++;
    }
}
