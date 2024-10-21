#include <iostream>
using namespace std;

template <class T>
class displayValue
{
public:
    T value;
    displayValue(T val);
    void show();
};

template <typename T>
displayValue<T>::displayValue(T val)
{
    value = val;
}

template <typename T>
void displayValue<T>::show()
{
    cout << "Value is:" << value << endl;
}

int main()
{
    displayValue<int> objI(10);
    displayValue<float> objF(10.05);
    // for char single quotes
    displayValue<char> objC('A');
    // for string double quotes
    displayValue<string> objS("Hi");

    objI.show();
    objF.show();
    objC.show();
    objS.show();
}