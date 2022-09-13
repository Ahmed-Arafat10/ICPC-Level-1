#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long x;
    double y, result;
    cin >> x >> y;
    if (x == 1)
        result = y * 4.00;
    if (x == 2)
        result = y * 4.50;
    if (x == 3)
        result = y * 5.00;
    if (x == 4)
        result = y * 2.00;
    if (x == 5)
        result = y * 1.50;

    cout << "Total: R " << fixed << setprecision(2) << result;

    return 0;
}