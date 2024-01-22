#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int find)
{

    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == find)
        {
            return mid;
        }
        else if (find < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }

    return -1;
}

int main()
{
    int size = 10;
    int arr[10] = {2, 3, 6, 9, 10, 32, 45, 86, 91, 100};

    int find = 30;
    cout << binarySearch(arr, size, find);

    return 0;
}