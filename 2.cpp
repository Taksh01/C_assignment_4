#include <iostream>
using namespace std;

template <class T>
T add(T a, T b)
{
    return a + b;
};

int main()
{
    float ans = add(10.5, 15.0);
    cout << "add of two number is: " << ans;
}