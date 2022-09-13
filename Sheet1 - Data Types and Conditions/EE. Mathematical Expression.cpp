#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    switch (s)
    {
    case '+':
        if (a + b == c)
            cout << "Yes";
        else
            cout << a + b;
        break;
    case '-':
        if (a - b == c)
            cout << "Yes";
        else
            cout << a - b;
        break;
    case '*':
        if (a * b == c)
            cout << "Yes";
        else
            cout << a * b;
        break;
    }

    return 0;
}