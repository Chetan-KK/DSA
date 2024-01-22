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

void selectionSort(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    printArr(arr, size);
}

int main()
{

    int arr[10] = {3, 6, 1, 7, 5, 78, 2, 7, 9, 1};

    selectionSort(arr, 10);

    return 1;
}