#include <iostream>
using namespace std;

// template <typename T>
// void mySwap(T &a, T &b) // Pass by reference; to change value inside function
// {
//     T temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
// int main()
// {
//     int a = 5, b = 10;
//     cout << "Before Swap a: " << a << ",b:" << b << endl;
//     mySwap(a, b);
//     cout << "After Swap a: " << a << ",b:" << b;
// }

template <typename T1, typename T2>
void mySwap(T1 &a, T2 &b) // Pass by reference; to change value inside function
{
    T1 temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 5;
    float b = 10.12;
    cout << "Before Swap a: " << a << ",b:" << b << endl;
    mySwap(a, b);
    cout << "After Swap a: " << a << ",b:" << b;
}