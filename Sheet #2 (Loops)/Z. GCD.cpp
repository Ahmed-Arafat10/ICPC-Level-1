#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    long long a, b, max = 0;
    cin >> a >> b;
    long long bigger = a > b ? a : b;
    for (int i = 1; i <= bigger; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            if (max < i)
                max = i;
        }
    }
    cout << max;
    return 0;
}