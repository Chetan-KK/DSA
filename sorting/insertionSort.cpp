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

void insertionSort(int arr[], int size)
{

    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];

        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j + 1] = temp;
    }

    printArr(arr, size);
}

int main()
{

    int arr[10] = {3, 6, 1, 0, 5, 78, 2, 7, 9, 1};

    insertionSort(arr, 10);

    return 1;
}