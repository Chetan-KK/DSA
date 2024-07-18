#include <iostream>
using namespace std;

int printCount(int num)
{

    if (num == 1)
    {
        return 1;
    }

    cout << num << " ";

    printCount(num - 1);
}

int main()
{
    // Your code here
    cout << printCount(50);

    return 0;
}