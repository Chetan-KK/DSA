#include <iostream>
#include <vector>
using namespace std;

bool cd(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = size; j > i; j--)
        {
            if (arr[i] == arr[j])
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    vector<int> v = {3, 2, 3};
    int arr[10] = {1, 0, 11, 3, 30, 40, 32, 2, 4, 2};

    cout << v.size();

    return 0;
}