#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int xc, yc, r, n, x2, y2;
    cin >> xc >> yc >> r >> n;
    while (n--)
    {
        cin >> x2 >> y2;
        double dis = sqrt((x2 - xc) * (x2 - xc) + (y2 - yc) * (y2 - yc));
        if (dis <= r)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

 