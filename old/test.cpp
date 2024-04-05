#include <iostream>
using namespace std;

void reverseBits(int n)
{
    while (n != 0)
    {
        int bit = n & 1;
        cout << bit << " ";
        n = n >> 1;
    }
}

int main()
{

    reverseBits(1001010);

    return 0;
}