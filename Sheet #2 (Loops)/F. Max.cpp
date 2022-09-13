#include <iostream>

using namespace std;

int main()
{
    long long num, num2, max = 0;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        cin >> num2;
        if (num2 > max)
            max = num2;
    }
    cout << max;
    return 0;
}