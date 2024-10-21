#include <iostream>
using namespace std;

template <typename t>
t maxArr(t arr[], int count)
{
    t max = arr[0];
    for (int i = 0; i < count; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
};

int main()
{
    float arr[5] = {1.5, 1.25, 1.5, 1.65, 1.95};
    float ans = maxArr(arr, 5);
    cout << "max no is: " << ans;
}