#include <iostream>
using namespace std;

template <class T>
class displayValue
{
public:
    // if you need to return value from function then set it to string
    void show(T value)
    {
        string binary = "";
        if (value == 0)
        {
            binary = binary + "0";
        }
        else
        {
            while (value > 0)
            {
                binary = (value % 2 == 0 ? "0" : "1") + binary;
                value = value / 2;
            }
        }
        cout << "Binary Number is: " << binary;
    };
};

int main()
{
    displayValue<int> obj;
    obj.show(10);
}