#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int x, counter = 0;
    stack<int> s1;
    cin >> x;
    if (x == 0)
        cout << x;
    while (true)
    {
        if (x % 2 == 0)
        {
            if (x == 0)
                break;
            x /= 2;
            s1.push(0);
            counter++;
        }
        else
        {
            x /= 2;
            s1.push(1);
            counter++;
        }
    }
    while (!s1.empty())
    {
        cout << s1.top();
        s1.pop();
    }
}