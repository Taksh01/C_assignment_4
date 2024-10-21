#include <iostream>
using namespace std;

class trial
{
public:
    int a = 10;
};

template <typename T>
void fTrial(T object)
{
    cout << "a value is: " << object.a;
}

int main()
{
    trial obj;
    fTrial(obj);
}