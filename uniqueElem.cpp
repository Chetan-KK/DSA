#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    cout << "printing array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool findFounded(int arr[], int size, int current)
{
    for (int j = 0; j < size; j++)
    {
        if (current == arr[j])
        {
            return true;
        }
    }
    return false;
}

void findDuplicates(int arr[], int size)
{

    int duplicate[size] = {0};
    int founded[size];
    int duplicateCount = 0, foundedCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
        }
        else if (findFounded(founded, foundedCount, i))
        {
            continue;
        }

        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate[duplicateCount] = arr[i];
                founded[foundedCount] = j;

                duplicateCount++;
                foundedCount++;

                break;
            }
        }
    }

    printArr(duplicate, size);
}
int main()
{
    int size = 8;
    int arr[8] = {10, 4, 2, 4, 1, 3, 3, 2};

    findDuplicates(arr, size);

    return 0;
}