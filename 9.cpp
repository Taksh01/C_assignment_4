#include <iostream>
using namespace std;

template <typename T>
T reverse(T var)
{
    T rev = 0;
    while (var > 0)
    {
        int lDigit = var % 10;
        rev = rev * 10 + lDigit;
        var = var / 10;
    }

    return rev;
}

int main()
{
    int ans = reverse(123);
    cout << "Reverse no is: " << ans;
}