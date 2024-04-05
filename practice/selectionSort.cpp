#include <iostream>
using namespace std;

void printArr(int arr[10])
{

    cout << "array:";

    for (int i = 0; i < 10; i++)
    {
        cout << " " << arr[i];
    }
    cout << " :end";
}

void selectionSort(int arr[10])
{
    int temp = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printArr(arr);
}

int main()
{
    int nums[10] = {4, 35, 6, 78, 9, 2, 1, 4, 6, 2};

    selectionSort(nums);

    return 0;
}