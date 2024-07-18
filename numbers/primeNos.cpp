#include <iostream>
#include <vector>
using namespace std;

void printAllPrimes(int num)
{

    int i = 2;

    vector<bool> prime(num + 1, false);

    prime[0] = prime[1] = true;
    while (i < num)
    {

        if (num % i == 0)
        {

            prime[i] = true;

            for (int j = 2 * i; j < num; j = j + i)
            {
                prime[j] = true;
            }
        }

        i++;
    }

    for (int i = 0; i < num; i++)
    {
        if (prime[i])
        {
            cout << i << " ";
        }
    }
}

int main()
{

    int num = 10;

    printAllPrimes(num);

    return 0;
}