#include <iostream>
using namespace std;

int peakIndexInMountainArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);

    while (start <= end)
    {
        if (arr[mid + 1] < arr[mid] && arr[mid - 1] < arr[mid])
        {
            return mid;
        }
        else if (arr[mid + 1] < arr[mid])
        {
            end = mid - 1;
        }
        else if (arr[mid - 1] < arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            return -1;
        }

        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{

    int arr[5] = {3, 5, 3, 2, 0};

    cout << peakIndexInMountainArray(arr, 5);

    return 0;
}