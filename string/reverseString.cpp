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

void reverseString(char s[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(s[start++], s[end--]);
    }
}

int main()
{

    char s[20];

    cin >> s;

    int len = getLength(s);
    cout << "length is: " << len << endl;
    reverseString(s, len);

    cout << s;

    return 0;
}