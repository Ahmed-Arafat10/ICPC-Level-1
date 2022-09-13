#include <bits/stdc++.h>
using namespace std;
long fab(int pos)
{
    long prev = 0, prevprev = 1, current = 1;
    for (long i = 1; i < pos; i++)
    {
        prevprev = prev;
        prev = current;
        current = prevprev + prev;
    }
    return current;
}
int main()
{
    int n;
    cin >> n;
    cout << 0 << " ";
    for (long i = 1; i <= n - 1; i++)
        cout << fab(i) << " ";
}