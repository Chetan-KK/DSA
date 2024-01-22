#include <iostream>
using namespace std;

bool powoftwo(int n)
{

    int i = 1;

    while (i <= n)
    {
        if (i == n)
        {
            return true;
        }
        i = i * 2;
    }
    return false;
}

int main()
{
    cout << powoftwo(1) << endl;
    return 0;
}