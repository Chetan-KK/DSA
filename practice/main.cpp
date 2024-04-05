#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

void twoSum(int arr[], int target, int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << arr[i] << "+" << arr[j] << "=" << arr[i] + arr[j] << endl;
            }
        }
    }

    // int val = 0;
    // while (val == size)
    // {
    //     if (val+)
    //     val++;
    // }
}

int main()
{
    int v1[10] = {6, 8, 2, 6, 1, 60, 40, 2, 8, 9};

    twoSum(v1, 100, 10);
    return 0;
}