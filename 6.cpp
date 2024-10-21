#include <iostream>
using namespace std;

template <class T>
class cal
{
public:
    T a;
    T b;

    T add(T a, T b)
    {
        return a + b;
    }

    T sub(T a, T b)
    {
        return a - b;
    }

    T multi(T a, T b)
    {
        return a * b;
    }

    T div(T a, T b)
    {
        return a / b;
    }
};

int main()
{
    cal<int> obj;

    int ans = obj.add(10, 5);
    cout << "\n add  is: " << ans;

    int a = obj.sub(10, 5);
    cout << "\n sub  is: " << a;

    int b = obj.multi(10, 5);
    cout << "\n multi  is: " << b;

    int c = obj.div(10, 5);
    cout << "\n div  is: " << c;
}