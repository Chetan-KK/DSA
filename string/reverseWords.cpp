#include <iostream>
using namespace std;

string removeSpaces(string s)
{
    // remove first spaces

    int i = 0;
    string str;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            str.push_back(s[i]);
        }
    }

    return str;
}

string reverseWords(string s)
{
    string reversed;
    int lastPoint = s.size() - 1;
    int i = s.size() - 1;
    int end = s.size() - 1;
    int j = 0;
    while (i >= 0)
    {
        if (s[i] == ' ' || i == 0)
        {
            if (i == 0)
            {
                reversed.push_back(s[0]);
            }
            int newWordStart = i + 1;
            j = 0;
            while (newWordStart + j <= end)
            {
                // cout << "s:" << s[newWordStart + j] << endl;
                reversed.push_back(s[newWordStart + j]);
                j++;
            }
            j++;
            reversed.push_back(' ');
            end = i - 1;
        }
        cout << reversed << endl;
        i--;
    }

    return reversed;
}

int main()
{

    string s = "     the sky    is blue     ";

    string filteredString = removeSpaces(s);
    cout << filteredString << endl;
    // cout << reverseWords(filteredString) << endl;

    return 0;
}