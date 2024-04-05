#include <iostream>
#include <vector>
using namespace std;

int getTotal(vector<int> arr)
{
    int total = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        total = total + arr[i];
    }
    return total;
}

bool isPossible(vector<int> arr, int m, int mid)
{
}

int allocateBooks(vector<int> arr, int studs)
{

    int start = 0;
    int total = getTotal(arr);
    int end = total;

    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isPossible(arr, studs, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{

    vector<int> v1 = {10, 20, 30, 40};

    allocateBooks(v1, 2);

    return 0;
}