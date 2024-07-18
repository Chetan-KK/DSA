#include <iostream>
using namespace std;

void printArr(int *arr, int *size)
{

    int arrptr = *arr;
    while (*arr == (10 [arr]))
    {
        cout << *arr << " ";
        arrptr++;
    }
}

int main()
{

    int a = 3;
    int &b = a;

    int *ptr = &a;
    int **doublePtr = &ptr;

    cout << "value: " << *ptr << endl;
    cout << "address: " << ptr << endl;
    cout << endl;
    cout << "value by dp: " << **doublePtr << endl;
    cout << "address of ptr: " << *doublePtr << endl;
    cout << "address of dp: " << doublePtr << endl;
    cout << endl;
    cout << "a: " << a << "b: " << b << endl;
    cout << endl;
    cout << "++dp: " << ++(**doublePtr) << endl;
    cout << "++p: " << ++(*ptr) << endl;

    cout << "arr" << endl;

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int *arrp = arr;
    int *sizePtr = &size;

    cout << "value by arr: " << 8 [arr] << endl;
    cout << "address by arr: " << arr << endl;
    cout << "value by p: " << *arrp << endl;
    cout << "address by p: " << arrp << endl;
    cout << endl;
    cout << "value by p: " << *(arr + 8) << endl;
    cout << endl
         << "print arr by pointer" << endl;

    printArr(arr, sizePtr);

    return 0;
}