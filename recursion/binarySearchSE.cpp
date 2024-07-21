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

int binarySearch(int arr[], int size, int start, int end, int find)
{
    // base case
    if (start > end)
    {
        return -1;
    }

    int mid = start + ((end - start) / 2);

    if (arr[mid] == find)
    {
        return mid;
    }

    else if (find < arr[mid])
    {
        return binarySearch(arr, size, start, mid - 1, find);
    }
    else
    {

        return binarySearch(arr, size, mid + 1, end, find);
    }
}

int main()
{
    // Your code here

    int arr[6] = {10, 20, 30, 40, 60, 80};

    int num = 0;

    cout << "array: ";
    printArr(arr, 6);
    cout << "enter element to find: ";
    cin >> num;
    cout << binarySearch(arr, 6, 0, 5, num);

    return 0;
}