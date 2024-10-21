#include <iostream>
using namespace std;

template <class T>
class displayValue
{
public:
    T show(T value, T rate, T time)
    {
        T simpleInt = value * (rate / 100.0) * time;
        return simpleInt;
    }
};

int main()
{
    displayValue<int> objI;
    int ansI = objI.show(10000, 5, 2);
    cout << "\n Simple Int: " << ansI;

    displayValue<float> objF;
    float ansF = objF.show(1000.50, 5.5, 2.5);
    cout << "\n Simple Int: " << ansF;
}