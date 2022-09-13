#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long f = 0, s = 1, result = f + s, c = 3;
    if (n == 1)
        cout << 0;
    else if (n == 2)
        cout << 1;
    else if (n == 3)
        cout << 1;
    else
    {
        for (long i = 0;; i++)
        {
            f = s;
            s = result;
            result = f + s;
            c++;
            if (c == n)
            {
                cout << result;
                break;
            }
        }
    }
}
 