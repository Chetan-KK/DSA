#include <iostream>
using namespace std;

int PeakOfMountain(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = ((end - start) / 2) + start;

    int count = 0;
    while (start <= end && count < 10)
    {

        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }

        if (arr[mid] > arr[mid - 1])
        {
            start = mid + 1;
        }
        else if (arr[mid] < arr[mid - 1])
        {
            end = mid - 1;
        }
        mid = ((end - start) / 2) + start;
        count++;
    }

    return -1;
}

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 9, 8, 7, 6};

    cout << PeakOfMountain(arr, 10);

    return 0;
}