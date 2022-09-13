#include <iostream>
using namespace std;

int main()
{
    long long num, counter = 0;
    cin >> num;
    for (long i = 1; i <= num; i++)
    {
        if (num % i == 0)
            counter++;
    }
    if (counter == 2)
        cout << "YES";
    if (counter > 2)
        cout << "NO";
    if (counter < 2)
        cout << "NO";
    return 0;
}