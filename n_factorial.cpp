#include <iostream>
using namespace std;

int main()
{
    int n, fact = 1;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    if (n <= 0)
    {
        cout << "Enter positive number" << endl;
    }
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            fact *= i;
        }
        cout << "Factorial of " << n << " = " << fact << endl;
    }
    return 0;
}