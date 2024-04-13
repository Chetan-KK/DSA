#include <iostream>
#include <array>
using namespace std;

bool isValid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        return true;
    }
    return false;
}

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch - 'A' + 'a';
    }
}

char mostOccuring(string s)
{
    array<int, 26> arr{0};

    int biggest = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (isValid(s[i]))
        {
            char temp = toLowerCase(s[i]);
            arr[temp - 'a']++;
        }
    }

    int ans = -1;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > biggest)
        {
            ans = i;
            biggest = arr[i];
        }
    }

    return 'a' + ans;
}

int main()
{

    string s = "helloji";

    cout << mostOccuring(s);

    return 0;
}