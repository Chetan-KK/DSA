#include <iostream>
using namespace std;

int getLength(char s[])
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

bool isPalendrom(char s[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        if (s[start++] != s[end--])
        {
            return false;
        }
    }
    return true;
}

int main()
{

    char s[20];

    cin >> s;

    int len = getLength(s);
    cout << isPalendrom(s, len);

    return 0;
}