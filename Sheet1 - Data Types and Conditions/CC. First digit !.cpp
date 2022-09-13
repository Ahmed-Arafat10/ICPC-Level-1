#include <iostream>

using namespace std;

int main()
{
    long x, digit, c = 0, arr[1];
    cin >> x;
    while (x > 0)
    {
        digit = x % 10;
        arr[0] = digit;
        x /= 10;
        c++;
    }
    if (arr[0] % 2 == 0)
        cout << "EVEN";
    else
        cout << "ODD";
    return 0;
}