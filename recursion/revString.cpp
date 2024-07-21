#include <iostream>
using namespace std;

void reverse(string s, int i, int j)
{

    if (i == j || i > j)
    {
        return;
    }

    swap(s[i], s[j]);

    cout << s[i] << " " << s[j] << " " << s << endl;
    reverse(s, i + 1, j - 1);
}

int main()
{
    // Your code here

    string s = "chetan";

    reverse(s, 0, 5);

    return 0;
}