#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long num, fact = 1, num2;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        cin >> num2;
        if (num2 == 0)
            cout << 0 << endl;
        else
        {
            for (int j = 1; j <= num2; j++)
            {
                fact *= j;
            }
            cout << fact << endl;
            fact = 1;
        }
    }
    return 0;
}