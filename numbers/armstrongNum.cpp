#include <iostream>
#include <math.h>
using namespace std;

bool isArmstrong(int num)
{
    int sum = 0;
    int numCount = to_string(num).size();
    int prev = num;
    while (num > 0)
    {
        int val = num % 10;

        sum = sum + pow(val, numCount);

        cout << "num:" << num << ", sum:" << sum << ", val:" << val << endl;
        num = num / 10;
    }

    cout << "prev:" << prev << ", sum:" << sum << endl;

    return prev == sum;
}

int main()
{

    int num = 1634;

    cout << isArmstrong(num);

    return 0;
}