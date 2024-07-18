#include <iostream>
using namespace std;

int fabonacci(int num)
{
    if (num == 0)
    {
        return 0;
    }
    if (num == 1)
    {
        return 1;
    }

    return fabonacci(num - 1) + fabonacci(num - 2);
}

int main()
{
    // Your code here

    cout << fabonacci(4);

    return 0;
}