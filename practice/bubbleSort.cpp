#include <iostream>
using namespace std;

void printArr(int arr[10])
{

    cout << "array:";

    for (int i = 0; i < 10; i++)
    {
        cout << " " << arr[i];
    }
    cout << " :end" << endl;
}

void bubbleSort(int arr[10])
{
    for (int i = 10; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
            printArr(arr);
        }
    }
}

int main()
{
    int nums[10] = {4, 35, 6, 78, 9, 2, 1, 4, 6, 2};

    bubbleSort(nums);

    return 0;
}