#include <iostream>
#include <vector>
using namespace std;

void printArr(int v[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
}

void sort(int arr[], int size)
{
    cout << (1 ^ 3);

    for (int i = 0; i < size; i++)
    {
        // int temp = 0;
        // for (int j = 0; j < size; j++)
        // {
        //     if (arr[i] < arr[j])
        //     {
        //         temp = arr[i];
        //         arr[i] = arr[j];
        //         arr[j] = temp;
        //     }
        // }

        // bool one = arr[i] >> 1 == 0;
        // bool two = arr[i] >> 1 == 0;
        // if (one && two)
        // {
        //     cout << arr[i] << endl;
        // }
    }
    // printArr(arr, size);
}

int main()
{
    int v1[10] = {1, 2, 2, 1, 0, 2, 1, 0, 0, 0};

    sort(v1, 10);
    return 0;
}