#include <iostream>
using namespace std;
int main()
{
    int n, i, a = 0, b = 1, c;
    cout << "Enter the number of series:";
    cin >> n;
    cout << a << "\t" << b;
    for (i = 0; i <= n; i++)
    {
        c = a + b;
        cout << "\t" << c;
        a = b;
        b = c;
    }
    return 0;
}