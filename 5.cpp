#include <iostream>
using namespace std;

class trial
{
public:
    int a = 10;
};

template <typename T>
void fTrial(T hi)
{
    cout << "a value is: " << hi.a;
}

int main()
{
    trial obj;
    fTrial(obj);
}