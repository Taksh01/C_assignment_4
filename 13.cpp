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

int main()
{
    int sqArea = area(5);
    int recArea = area(5, 10);

    cout << "sqr area is: " << sqArea;
    cout << "\nrec area is: " << recArea;
}