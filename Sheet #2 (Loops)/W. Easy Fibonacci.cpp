#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long f = 0, s = 1, result = f + s, c = 3;

    for (long i = 0; i < n; i++)
    {
        if (i == 0)
            cout << 0 << " ";
        else if (i == 1)
            cout << 1 << " ";
        else if (i == 2)
            cout << 1 << " ";
        else
        {
            f = s;
            s = result;
            result = f + s;
            cout << result << " ";
        }
    }
    return 0;
}

 