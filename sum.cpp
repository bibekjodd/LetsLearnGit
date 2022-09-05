#include <iostream>
#include <vector>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    a = 2, b = 3;

    cout << sum(a, b) << "\n";

    return 0;
}