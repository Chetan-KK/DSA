#include <iostream>
using namespace std;

int power(int num, int pow)
{
    cout << num << " " << pow << endl;

    // base case
    if (pow == 0)
    {
        return 1;
    }
    if (pow == 1)
    {
        return num;
    }

    int ans = power(num, pow / 2);

    if (pow % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return ans * ans * num;
    }
}

int main()
{
    // Your code here

    int pow = 4;

    cout << power(4, pow);

    return 0;
}