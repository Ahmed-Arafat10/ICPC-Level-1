#include <iostream>
using namespace std;

int main()
{
    long long tcase, num, counter = 0;
    cin >> tcase;
    for (long k = 1; k <= tcase; k++)
    {
        cin >> num;
        for (long i = 1; i <= num; i++)
        {
            if (num % i == 0)
                counter++;
        }
        if (counter == 2)
            cout << "Prime" << endl;
        if (counter > 2)
            cout << "Not" << endl;
        if (counter < 2)
            cout << "Not" << endl;
        counter = 0;
    }
    return 0;
}