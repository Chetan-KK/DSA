#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    cout << "printing array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int binarySearch(int arr[], int size, int find)
{

    int start = 0;
    int end = size;

    int mid = start + ((end - start) / 2);

    // base case
    cout << "mid: " << mid << " start: " << start << " end: " << end << " arr[mid]: " << arr[mid] << endl;
    if (arr[mid] == find)
    {
        return mid;
    }
    else if (find < arr[mid])
    {
        binarySearch(arr, size - mid, find);
    }
    else if (find > arr[mid])
    {
        binarySearch(arr - mid, size - mid, find);
    }
}

int main()
{
    // Your code here

    int arr[6] = {10, 20, 30, 40, 60, 80};

    cout << binarySearch(arr, 6, 60);
    printArr(arr, 3);

    return 0;
}