#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll x, y;
    cin >> x >> y;
    ll mx = max(x, y);
    if (mx == 1)
    {
        cout << "1/1";
        return 0;
    }
    ll t = 6 - mx + 1;
    if (t == 5)
        cout << "5/6";
    if (t == 4)
        cout << "2/3";
    if (t == 3)
        cout << "1/2";
    if (t == 2)
        cout << "1/3";
    if (t == 1)
        cout << "1/6";
    return 0;
}