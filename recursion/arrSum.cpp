#include <iostream>
using namespace std;

int sumArr(int arr[], int size)
{

    if (size == 1)
    {
        return arr[0];
    }

    return arr[0] + sumArr(arr + 1, size - 1);
}

int main()
{
    // Your code here

    int arr[6] = {1, 2, 3, 4, 60, 4};

    cout << sumArr(arr, 6);

    return 0;
}