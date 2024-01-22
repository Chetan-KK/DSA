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

void bubbleSort(int arr[], int size)
{
    for (int i = 1; i < size - 1; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    printArr(arr, size);
}

int main()
{

    int arr[10] = {3, 6, 1, 0, 5, 78, 2, 7, 9, 1};

    bubbleSort(arr, 10);

    return 1;
}