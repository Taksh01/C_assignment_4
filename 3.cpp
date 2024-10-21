#include <iostream>
using namespace std;

template <class T>
class array
{
public:
    T array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
};

int main()
{

    array<int> a1;

    for (int i = 0; i < 10; i++)
    {
        cout << a1.array[i] << " ";
    }
}