#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<int> arr)
{
    cout << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(vector<int> &arr, int i)
{
    // base
    if (i == 0 || i == 1)
    {
        return;
    }

    for (int j = 1; j < i; j++)
    {
        if (arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
        }
    }

    bubbleSort(arr, i - 1);
}

int main()
{
    // Your code here

    vector<int> arr = {3, 6, 1, 8, 2, 5, 1};

    bubbleSort(arr, arr.size());

    printArr(arr);

    return 0;
}