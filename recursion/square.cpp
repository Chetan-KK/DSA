#include <iostream>
using namespace std;

int powerOf(int num, int pow)
{
    if (pow == 0)
    {
        return 1;
    }

    return num * powerOf(num, pow - 1);
}

int main()
{

    cout << powerOf(3, 6);

    return 0;
}