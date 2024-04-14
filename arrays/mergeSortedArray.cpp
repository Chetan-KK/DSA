#include <iostream>
#include <vector>
using namespace std;

vector<int> sortVector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] > v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }
    return v;
}

vector<int> merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    for (int i = 0; i < n; i++)
    {
        nums1.pop_back();
    }
    for (int i = 0; i < n; i++)
    {
        nums1.push_back(nums2[i]);
    }

    return nums1;
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3;
    int n = 3;

    vector<int> v = merge(nums1, m, nums2, n);
    vector<int> result = sortVector(v);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}