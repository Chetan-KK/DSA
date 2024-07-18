#include <iostream>
#include <vector>
using namespace std;

int getNum(int row, int col)
{

    for (int i = 0; i < row - 1; i++)
    {
        /* code */
    }

    return row;
}

int main()
{

    int row = 4;
    int col = 3;

    cout << getNum(row, col);

    return 0;
}