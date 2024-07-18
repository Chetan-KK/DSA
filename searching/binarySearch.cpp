#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int find)
{

    int start = 0;
    int end = size;
    int mid = ((end - start) / 2) + start;

    while (start <= end)
    {
        if (arr[mid] == find)
        {
            int first = mid;
            if (arr[first - 1] == arr[mid])
            {
                while (arr[first] == arr[mid])
                {
                    first--;
                }
            }

            return first;
        }

        if (find > arr[mid])
        {
            start = mid + 1;
        }

        if (find < arr[mid])
        {
            end = mid - 1;
        }

        mid = ((end - start) / 2) + start;
    }

    return -1;
}

int main()
{
    int size = 2;
    int arr[2] = {5, 20};

    int find = 5;
    cout << binarySearch(arr, size, find);

    return 0;
}