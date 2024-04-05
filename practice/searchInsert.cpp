#include <iostream>
#include <vector>
using namespace std;

int SearchInsert(vector<int> nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int mid = ((end - start) / 2) + start;

    while (start <= end)
    {
        cout << start << " " << mid << " " << end << " " << endl;
        if (nums[mid] == target)
        {
            return mid;
        }

        if (nums[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + ((end - start) / 2);
    }
    return mid;
}

int main()
{
    vector<int> v1 = {10, 20, 30, 40, 50, 60, 70, 80};
    int target = 34;

    int result = SearchInsert(v1, target);

    cout << result;

    return 0;
}