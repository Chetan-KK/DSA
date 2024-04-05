#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> v(5, 1);

    v.begin();

    for (int i : v)
    {
        cout << i << endl;
    }

    return 0;
}