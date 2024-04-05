#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<int> &v1)
{
    cout << "Array: ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << " " << v1[i];
    }
}

int RemoveDuplicate(vector<int> &nums)
{

    return -1;
}

int main()
{
    vector<int> v1 = {10, 20, 20, 20, 30, 40, 40, 50};

    int result = RemoveDuplicate(v1);

    cout << result << endl;

    printArr(v1);

    return 0;
}