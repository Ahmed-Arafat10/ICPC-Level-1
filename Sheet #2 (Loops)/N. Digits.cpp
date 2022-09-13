#include <iostream>
using namespace std;

int main()
{
    long long int tcase, num, counter = 0;
    cin >> tcase;

    for (long long k = 1; k <= tcase; k++)
    {
        cin >> num;
        while (num > 0)
        {
            cout << num % 10;
            num /= 10;
            if (num > 0)
                cout << " ";
        }
        if (k != tcase)
            cout << endl;
    }
    return 0;
}
 