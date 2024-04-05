#include <iostream>
#include <vector>
using namespace std;

bool isRotatedOrSorted(vector<int> v)
{
    int count = 0;
    int i = 0;

    while (i < v.size())
    {
        if (v[(i + 1) % v.size()] < v[i])
        {
            count++;
        }
        i++;
    }
    if (count <= 1)
    {
        return true;
    }
    return false;
}

int main()
{

    vector<int> v = {10, 20, 30, 40, 50};
    vector<int> v1 = {30, 40, 50, 10, 20};
    vector<int> v2 = {1, 1, 1};

    cout << "is rotated or sorted: " << isRotatedOrSorted(v2);

    return 0;
}