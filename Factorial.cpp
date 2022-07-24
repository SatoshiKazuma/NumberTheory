#include <iostream>
using namespace std;
int factorial(int a)
{
    for (int i = (a - 1); i > 0; i--)
    {
        a = a * i;
    }
    return a;
}
int main()
{
    int a = 5;
    cout << factorial(a);
    return 0;
}