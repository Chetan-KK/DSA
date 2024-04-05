#include <iostream>
using namespace std;

int mySqrt(int x)
{

    int start = 0;
    int end = x;

    int mid = start + (end - start) / 2;

    int ans = 0;

    while (start <= end)
    {
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid > x)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
            ans = mid;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

double myPerfectSqrt(int n, int p, int sqr)
{
    double ans = sqr;

    double factor = 1;

    for (int i = 0; i < p; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }

    return ans;
}

int main()
{
    int n;
    int p;
    cout << "enter number: ";
    cin >> n;
    cout << endl;

    cout << "enter precision: ";
    cin >> p;
    cout << endl;

    // cout << mySqrt(25);
    cout << myPerfectSqrt(n, p, mySqrt(n));

    return 0;
}