#include <iostream>
using namespace std;

int main()
{

    int size = 5;

    int arr[size] = {5, 2, 3, 0, 1};

    int find = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            // cout << find << " " << i << endl;
            if (!arr[j] == i)
            {
                find = find + 1;
            }
        };

        if (find == size)
        {
            cout << i;
        }
        find = 0;
    }

    return 0;
}