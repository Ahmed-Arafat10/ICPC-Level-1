#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = 3;
    int k = 1;
    for (int r = 1; r <= n; r++)
    {
        for (int i = k; i <= s; i++)
        {
            cout << i << " ";
            if (i == s)
            {
                cout << "PUM" << endl;
            }
        }
        s += 4;
        k += 4;
    }
    return 0;
}