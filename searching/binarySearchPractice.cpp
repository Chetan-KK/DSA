#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int find)
{
    int start = 0;
    int end = arr.size() - 1;

    int mid = ((end - start) / 2) + start;

    while (start <= end)
    {
        cout << " mid :" << mid << " start :" << start << " end :" << end << endl;

        if (arr[mid] == find)
        {
            return mid;
        }
        else if (find < arr[mid])
        {
            end = mid - 1;
        }
        else if (find > arr[mid])
        {
            start = mid + 1;
        }

        mid = start + ((end - start) / 2);
    }

    return -1;
}

int main()
{

    vector<int> arr = {12, 17, 28, 45, 55, 74, 90, 113, 234, 247, 398};
    // vector<int> arr = {12, 17, 28, 45, 55, 74, 90, 113, 234, 247, 398, 899};

    cout << binarySearch(arr, 111);

    return 0;
}