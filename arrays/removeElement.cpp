#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<int> nums)
{
    cout << "array:";

    for (int i = 0; i < nums.size(); i++)
    {
        cout << " " << nums[i];
    }
    cout << endl;
}

int removeElement(vector<int> &nums, int val)
{
    int i = 0, j = nums.size() - 1;
    while (i < j)
    {
        if (nums[i] == val)
        {
            while (nums[j] == val)
            {
                nums[j] = -1;
                j--;
            }
            nums[i] = nums[j];

            nums[j] = -1;
            j--;
        }
        i++;
    }
    printArr(nums);

    return i + 1;
}

int main()
{
    vector<int> nums = {3, 2, 2, 3};
    int val = 2;

    cout << removeElement(nums, val);

    return 0;
}