#include <iostream>
using namespace std;

template <class T1, class T2, class T3>
class STUDENT
{
public:
    T1 age;
    T2 name;
    T3 id;
    void display(T1 age, T2 name, T3 id)
    {
        cout << "Name is: " << name;
        cout << "\nAge is: " << age;
        cout << "\nId is: " << id;
    }
};

int main()
{
    STUDENT<int, string, int> obj;
    obj.display(15, "Rohan", 101);
}