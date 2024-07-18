#include <iostream>
using namespace std;

string word(int num)
{
    string arr[10] = {
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
    };

    return arr[num];
}

void sayNumber(int num)
{
    // base case
    if (num == 0)
    {
        return;
    }

    sayNumber(num / 10);

    cout << word(num % 10) << " ";
}

int main()
{
    // Your code here
    int num;
    cout << "enter number: ";

    cin >> num;

    cout << endl
         << endl;
    sayNumber(num);

    return 0;
}