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

vector<int> reverseArr(vector<int> &arr, int m)
{
    int start = m + 1;
    int end = arr.size() - 1;
    int temp = 0;

    while (start < end)
    {

        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    return arr;
}

int main()
{
    vector<int> g1{1, 2, 3, 4, 5, 6, 4, 6, 3, 6, 8, 3, 1};

    vector<int> v = reverseArr(g1, 2);
    printArr(v);

    return 0;
}