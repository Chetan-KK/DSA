#include <iostream>
#include <array>

using namespace std;

void printArr(array<int, 10> arr)
{
    cout << "array :";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << " " << arr[i];
    }
}

array<int, 10> rotateArr(array<int, 10> arr, int rotateTarget)
{
    array<int, 10> temp(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        temp[(i + rotateTarget) % arr.size()] = arr[i];
    }

    return temp;
}

int main()
{

    array<int, 10> arr = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int rotateTarget = 4;

    array<int, 10> newArr = rotateArr(arr, rotateTarget);
    printArr(newArr);

    return 0;
}