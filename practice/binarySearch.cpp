#include <iostream>
using namespace std;

int binaryFirstSearch(int arr[], int size, int find)
{
    int start = 0;
    int end = size - 1;
    int mid = ((end - start) / 2) + start;

    while (start <= end)
    {
        if (find <= arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = ((end - start) / 2) + start;
    }
    return start;
}

int binaryLastSearch(int arr[], int size, int find)
{
    int start = 0;
    int end = size - 1;
    int mid = ((end - start) / 2) + start;

    while (start <= end)
    {

        if (find >= arr[mid])
        {
            start = mid + 1;
        }
        else if (find < arr[mid])
        {
            end = mid - 1;
        }
        mid = ((end - start) / 2) + start;
    }
    return end;
}

int main()
{

    int arr[9] = {10, 13, 20, 20, 20, 20, 20, 20, 134};
    int find = 20;

    cout << binaryFirstSearch(arr, 9, find) << endl;
    cout << binaryLastSearch(arr, 9, find);

    return 0;
}