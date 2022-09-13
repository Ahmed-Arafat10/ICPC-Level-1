#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, x;
    cin >> a >> b >> c >> d;
    // x=(1LL*a*b)-(1LL*c*d);
    cout << "Difference = " << (1LL * a * b) - (1LL * c * d);
    return 0;
}

///---
#include <iostream>

using namespace std;

int main()
{
    long long a, b, c, d, x;
    cin >> a >> b >> c >> d;
    x = (a * b) - (c * d);
    cout << "Difference = " << x;
    return 0;
}