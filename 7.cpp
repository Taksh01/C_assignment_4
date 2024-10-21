#include <iostream>
using namespace std;

template <typename T>
T compare(T a, T b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int ansI = compare(10, 5);
    cout << "\n Greatest No is: " << ansI;

    float ansF = compare(1.5, 5.2);
    cout << "\n Greatest No is: " << ansF;

    // In char comparison always use single quotes not double
    char ansC = compare('b', 'z');
    cout << "\n Greatest No is: " << ansC;
}