#include <iostream>
using namespace std;

bool isPalindrome(int x)
{

    int last = x % 10;
    int test = (x / 10) % 10;
    int reverse = 0;

    int i = 0;
    while (i != 3)
    {
        reverse = reverse * 10 + last;

        last = (x / 10) % 10;

        i++;
    }

    // cout<<"last: "<<last<<endl;
    cout << "test: " << test << endl;
    cout << "rev: " << reverse << endl;

    return false;
}

int main()
{

    int num = 3923;

    cout << endl
         << isPalindrome(num);

    return 0;
}