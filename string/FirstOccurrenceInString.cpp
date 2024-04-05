#include <iostream>
using namespace std;

string CheckString(string s1, string s2, int pos)
{
    int i = 0;

    while (i < s2.length())
    {
        if (s1[pos] != s2[i])
        {
            return " ";
        }

        i++;
        pos++;
    }
    return s2;
}

int strStr(string haystack, string needle)
{
    for (int i = 0; i < haystack.length(); i++)
    {
        if (haystack[i] == needle[0])
        {
            if (CheckString(haystack, needle, i) == " ")
            {
                continue;
            }
            else
            {
                return i;
            }
        }
    }
    return -1;
}

int main()
{

    cout << strStr("dddbutsad", "sad");

    return 0;
}