#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> v;
    int temp = -1;
    for (int i = 0; i < m; i++)
    {
        if (temp < nums1[i])
        {
            v.push_back(nums1[i]);
            temp = nums1[i];
        }
        else
        {
            v.push_back(nums2[i]);
            v.push_back(nums1[i]);
        }
    }
    return v;
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3;
    int n = 3;

    vector<int> v = merge(nums1, m, nums2, n);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}