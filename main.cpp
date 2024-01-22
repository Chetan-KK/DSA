#include <iostream>
#include <math.h>
using namespace std;

int reverse(int x)
{
    int rev = 0;
    int i = 0;
    int count = 0;
    while (x)
    {
        int digit = x % 10;
        int power = pow(10, i) * digit;
        rev = rev + power;
        x = x / 10;
        i++;
    }

    return rev;
}
int getBinary(int n)
{

    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        cout << ans << endl;

        n = n >> 1;
        i++;
    }
    return ans;
}

int main()
{
    // cout << "rev:" << reverse(123456) << endl;
    cout << "binary:" << getBinary(10);
}