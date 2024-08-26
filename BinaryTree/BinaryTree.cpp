#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_ITEMS = 100;

struct ListType
{
    int length;
    int info[MAX_ITEMS];
};

int BinarySearch(ListType list, int &item, bool &isFound)
{
    int first = 0;
    int last = list.length - 1;

    isFound = false;

    while (first <= last && !isFound)
    {
        int midPoint = (first + last) / 2;
        if (item < list.info[midPoint])
        {
            last = midPoint - 1;
        }
        else if (item > list.info[midPoint])
        {
            first = midPoint + 1;
        }
        else
        {
            item = list.info[midPoint];
            isFound = true;
            return midPoint;
        }
    }
    return -1; // -1 Represents not found
}

int BinarySearchForgetful(ListType list, int item, bool &found)
{
    int first = 0;
    int last = list.length - 1;
    found = false;

    while (first < last)
    {
        int midPoint = (first + last) / 2;
        if (item > list.info[midPoint])
            first = midPoint + 1;
        else
            last = midPoint;
    }

    if (last == -1)
        return -1; // -1 Represents not found
    else if (item == list.info[first])
    {
        found = true;
        return first;
    }
    else
        return -1; // -1 Represents not found
}

int BinarySearchRecognisingEquality(ListType list, int item, bool &found)
{
    int first = 0;
    int last = list.length - 1;
    found = false;

    while (first <= last)
    {
        int midPoint = (first + last) / 2;
        if (item == list.info[midPoint])
        {
            found = true;
            return midPoint;
        }
        else if (item > list.info[midPoint])
            first = midPoint + 1;
        else
            last = midPoint - 1;
    }
    return -1; // -1 Represents not found
}
