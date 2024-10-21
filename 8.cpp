#include <iostream>
using namespace std;

template <class T>
class displayValue
{
public:
    T value;
    // ! Constructor wid same name of class and by auto called;use to set values
    displayValue(T val)
    {
        value = val;
    }
    void show()
    {
        cout << "Value is:" << value << endl;
    }
};

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