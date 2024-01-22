#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n = 5;

    int m = n;
    int mask = 0;

    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int ans = (~n) & mask;

    cout << "bin: " << ans;

    return 0;
}