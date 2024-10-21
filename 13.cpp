#include <iostream>
using namespace std;

template <class T>
T area(T side)
{
    return side * side;
}

template <class T>
T area(T len, T wid)
{
    return len * wid;
}

// template <class T>
// T area(T len, T base)
// {
//     return 1 / 2 * base * len;
// }

// template <class T>
// T area(T radius)
// {
//     return 3.14 * r * r;
// }

int main()
{
    int sqArea = area(5);
    int recArea = area(5, 10);
    // int triArea = area(5, 10);
    // int cirArea = area(5);

    cout << "sqr area is: " << sqArea;
    cout << "\nrec area is: " << recArea;
    // cout << "tri area is: " << triArea;
    // cout << "cir area is: " << cirArea;
}