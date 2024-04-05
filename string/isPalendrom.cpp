#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        return ch - 'A' + 'a';
    }
}

bool isValid(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return true;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        return true;
    }
    else if (ch >= '0' && ch <= '9')
    {
        return true;
    }
    return false;
}

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
        // cout << "start: " << s[start] << " end: " << s[end] << endl;

        if (!isValid(s[start]))
        {
            start++;
            continue;
        }

        if (!isValid(s[end]))
        {
            end--;
            continue;
        }
        // cout << "valid start: " << s[start] << " valid end: " << s[end] << endl;

        if (toLowerCase(s[start]) != toLowerCase(s[end]))
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;
}

int main()
{

    char s[20];

    cout << "Enter your string: ";
    cin >> s;
    cout << endl;

    int len = getLength(s);
    cout << isPalendrom(s, len);

    return 0;
}