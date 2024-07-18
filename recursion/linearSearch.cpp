#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int find)
{

    // base case
    if (size == 0)
    {
        return -1;
    }

    if (arr[0] == find)
    {
        return size;
    }
    else
    {
        return linearSearch(arr + 1, size - 1, find);
    }
}

int main()
{
    // Your code here

    int arr[6] = {1, 2, 3, 4, 60, 34};

    int ans = linearSearch(arr, 6, 3);
    if (ans != -1)
    {
        cout << 6 - ans;
    }
    else
    {
        cout << -1;
    }
    return 0;
}