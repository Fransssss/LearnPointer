// Title : Intro to Pointer
// Purpose : access data in array using a pointer
// Have fun - Enjoy the process - Practices make improvement

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    const int SIZE = 10;
    int a[SIZE] = {};
    int* ptrA = a;

    cout << " Enter " << SIZE << " numbers in array separate by space : " << endl;
    for(size_t i = 0; i < SIZE; ++i)
    {
            cin >> a[i];
    }

    cout << endl;
    for(size_t i = 0; i < SIZE;++i)                          // using pointer to extract data and address with * sign
    {
        cout  << " The address of (Pointer + " << i << ") " << *(ptrA + i) << " = (pointer + " << i << ") - " << ptrA + i << endl;
    }

    cout << endl;

    for(size_t i = 0; i < SIZE;++i)                        // user array to extract data dnd address with & sign
    {
        cout << " The address of (a[" << i  << "]) " << a[i] << " = &a[" << i << "] - " << &a[i] + 1 << endl;
    }

    return 0;
}