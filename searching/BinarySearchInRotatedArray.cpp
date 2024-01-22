#include <iostream>
using namespace std;

int getPivot(int arr[], int size)
{

    int start = 0;
    int end = size - 1;

    int mid = start + ((end - start) / 2);

    while (start < end)
    {
        if (arr[mid] <= arr[end])
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + ((end - start) / 2);
    }

    return start;
}

int binarySearch(int start, int end, int arr[], int find)
{

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == find)
        {
            return mid;
        }
        else if (arr[mid] < find)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int size = 10;
    int arr[size] = {7, 8, 9, 10, 1, 2, 3, 4, 5, 6};

    int find = 100;
    if (find <= arr[size - 1])
    {
        cout << binarySearch(getPivot(arr, size), size - 1, arr, find);
    }
    else
    {
        cout << binarySearch(0, getPivot(arr, size) - 1, arr, find);
    }

    return 0;
}