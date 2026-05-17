// WAP with a function which calculate A where A=p(1+R/100)^n for data p r and n
// but for some cases value of r is fixed i.e.15 call this function in main
#include <iostream>
#include <math.h>
using namespace std;
int A(int p, int r = 15, int n)
{
    return p * pow((1 + (r / 100)), n);
}
int main()
{
    int a = 100, b = 16, c = 3;
    cout << "The interest is\t" << A(a, b, c);
}