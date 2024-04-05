#include <iostream>
using namespace std;

int squareRoot(int num)
{
    int start = 0;
    int end = num;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        cout << mid << endl;
        if (mid * mid == num)
        {
            return mid;
        }
        if (mid * mid > num)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{

    cout << "the root is: " << squareRoot(10000);

    return 0;
}