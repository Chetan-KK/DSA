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

int main()
{
    int size = 10;
    int arr[size] = {10, 20, -3, 4, 5, 7, 2, 0, -12, 94};

    int temp;

    int i = 1;
    while (i < size)
    {
        cout << arr[i] << " ";
        swap(arr[i], arr[i - 1]);
        i = i + 2;
    }

    printArr(arr, size);

    return 0;
}